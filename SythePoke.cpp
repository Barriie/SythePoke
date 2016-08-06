#include <windows.h> 
#include <tchar.h>
#include <stdio.h> 
#include <strsafe.h>
#include "CitySelector.h"
#include "SythePokeScreenScraper.h"
#include <math.h>
#define BUFSIZE 4096 

HANDLE g_hChildStd_IN_Rd = NULL;
HANDLE g_hChildStd_IN_Wr = NULL;
HANDLE g_hChildStd_OUT_Rd = NULL;
HANDLE g_hChildStd_OUT_Wr = NULL;

DWORD WINAPI KeysListener( LPVOID lpParam );

long double lat = 0;
long double lng = 0;

void CreateChildProcess(void); 
void WriteToPipe(char* data); 
DWORD WINAPI ReadFromPipe( LPVOID lpParam ) ;
void ErrorExit(PTSTR); 
void setup_screen_cap();

TCHAR exeloc[1024];
TCHAR exepath[1024];
TCHAR exe2loc[1024];

bool bootemulator(void) {

	PROCESS_INFORMATION piProcInfo; 
	STARTUPINFO siStartInfo;
	BOOL bSuccess = FALSE; 

	ZeroMemory( &piProcInfo, sizeof(PROCESS_INFORMATION) );

	ZeroMemory( &siStartInfo, sizeof(STARTUPINFO) );
	siStartInfo.cb = sizeof(STARTUPINFO); 
	siStartInfo.hStdError = g_hChildStd_OUT_Wr;
	siStartInfo.hStdOutput = g_hChildStd_OUT_Wr;
	siStartInfo.hStdInput = g_hChildStd_IN_Rd;
	siStartInfo.dwFlags |= STARTF_USESTDHANDLES;

	bSuccess = CreateProcess(NULL, 
		exe2loc,  
		NULL,        
		NULL,          
		TRUE,        
		0,            
		NULL,         
		exepath,         
		&siStartInfo,  
		&piProcInfo); 
	if ( ! bSuccess ) {
		ErrorExit(TEXT("Could not create process. Try run as administrator?\n"));
		return false;
	}

	Sleep(10000);
	return true;

}

bool sythepokereadyexists(void) {

	return FindWindow(L"ConsoleWindowClass", L"SythePoke") != NULL;
}

bool windowalreadyexists(void) {

	return FindWindow(NULL, L"Nox App Player") != NULL;
}

long double getreg(TCHAR* name) {
	HKEY key;
	if (RegOpenKey(HKEY_CURRENT_USER, TEXT("Software\\SythePoke\\"), &key) != ERROR_SUCCESS){
		return 0;
	} 


	wchar_t* value = (wchar_t*)malloc(256);
	value[0] = (wchar_t)0x00;
	DWORD value_length = 255;
	RegQueryValueEx(key, name, NULL, NULL, (LPBYTE)(value), &value_length);
	RegCloseKey(key);


	long double x = 0;
	swscanf(value, L"%Lg", &x);
	free(value);
	return x;
}


bool setreg(TCHAR* name, long double x) {
	HKEY key;
	DWORD dwDisposition;
	if (RegCreateKeyEx(HKEY_CURRENT_USER, TEXT("Software\\SythePoke\\"),      0, NULL, 0,   KEY_WRITE, NULL, 
		&key, &dwDisposition) != ERROR_SUCCESS){
			return 0;
	} 


	wchar_t value[256];
	value[0] = (wchar_t)0x00;

	swprintf(value, 255, L"%.16Lg", x);
	bool ret = (RegSetValueExW(key, name, 0, REG_SZ, (LPBYTE)value, wcslen(value)*sizeof(wchar_t)) != ERROR_SUCCESS);
	RegCloseKey(key);
	return ret;
}


double runangle = 0;

double rundistance = 0;
bool updated = false;
double runspeed = 0;
int _tmain(int argc, TCHAR *argv[]) 
{ 

	if (sythepokereadyexists()) {
		ExitProcess(1);
	}

	SetConsoleTitle(L"SythePoke");

	TCHAR szFileName[MAX_PATH];

	GetModuleFileName( NULL, szFileName, MAX_PATH );

	do {
		lng = getreg(L"lng");
		lat = getreg(L"lat");

		if (argc == 2) {
			lng = 0; lat = 0;
			printf("cmdline override location reset\n");
		}

		printf("reg fetch %Lg, %Lg\n", lat, lng);

		if (lat==lng && lat==0 ) {
			SythePoke::CitySelector^ z = gcnew SythePoke::CitySelector();
			z->ShowDialog();
		}

	} while ( lat==lng && lat==0 );

	bool pathtrimmed = false;
	for (TCHAR* x = szFileName + wcslen(szFileName)-1; x > szFileName; x--) {
		if (*x == '\\' || *x == '/') {
			*x = '\0';
			pathtrimmed = true;
			break;
		}
	}

	if (!pathtrimmed) {
		printf("Could not figure out where I'm installed!\n");
		return 1;
	}

	printf("www.Sythe.org Pokemon Go Client v0.9\nInstructions:\n\t1. Wait for NOX window to fully load.\n\t2. Log into Pokemon GO\n\t3. Use arrow keys to navigate the game\n\n>If you have trouble or your arrow keys don't work, you can close this window and re-open SythePoke safely without restarting the game to reconnect your arrow keys!\n\nArrow keys should now be relative to the compass!.\n");
	wsprintf(exeloc, L"%s\\bin\\nox_adb.exe shell", szFileName);
	wsprintf(exepath, L"%s\\", szFileName);
	wsprintf(exe2loc, L"%s\\bin\\nox.exe", szFileName);

	if (!windowalreadyexists() && !bootemulator()) {
		ExitProcess(1);
	}

	setup_screen_cap();

	CreateChildProcess();

	Sleep(1000);
	DWORD   dwThreadId = 0, threadId = 0;
	HANDLE t = CreateThread(NULL, 0, ReadFromPipe, NULL, 0, &dwThreadId);
	HANDLE x = CreateThread(NULL, 0, KeysListener, NULL, 0, &threadId);

	char outdata[250];

	WriteToPipe("dumpsys location | grep 'passive: Location' | grep -oE \"gps ([0-9\\.\\-]+),([0-9\\.\\-]+)\"\n");
	bool printed = false;
	int counter = 0;

	//	runspeed = 0.001;

	for(;;) {

		counter++;
		counter = counter % 40;
		if (counter == 0) {
			setreg(L"lat", lat);
			setreg(L"lng", lng);
			updated = true;
		}
		Sleep(200);

		sprintf(outdata, "setprop persist.nox.gps.status enabled\nsetprop persist.nox.gps.longitude '%.16Lg'\nsetprop persist.nox.gps.latitude '%.16Lg'\n/system/bin/agps.sh\n", lng, lat ); 
	//	printf("%s", outdata);
		WriteToPipe(outdata);
		Sleep(1);
		if (!printed) {
			printed = true;
			printf("Setting your GPS to last known location: %.16Lg %.16Lg\n", lng, lat);
		}

	}

	return 0; 
} 

DWORD WINAPI KeysListener( LPVOID lpParam )  {
	bool ok = false;
	for(;;) {

		Sleep(100);


		double angle = get_compass_angle(&ok);
		//printf("angle %g\n", angle);
/*		if ( GetAsyncKeyState (VK_RBUTTON) & 0x8000) {

			HWND h = get_nox_window();
			RECT r;
			GetWindowRect(h, &r);

			POINT p;
			GetCursorPos(&p);

			if (p.x >= r.left && p.x <= r.right && p.y >= r.top && p.y <= r.bottom) {
				double x= p.x - r.left;
				double y = p.y - r.top;
				bool ok = false;


				double h = r.bottom - r.top;
				double w = r.right - r.left;

				double viewangleradiuslr = 40; // this is 30 degrees from the vertical center line to the side of the screen
				double viewangleradiustb = 70; // this is 40 degrees from the vertical center line to the side of the screen

				double cx = w/2.0;
				double cy = h/2.0;

				double lrangle = ((x-cx)/w)*viewangleradiuslr;
				double tbangle = ((y-cy)/h)*viewangleradiuslr;

				// now transform the view-port click on to a click location in the world using trig

				double cameradownangle = 30;
				double cameraheight = 40; //  meters

				double angleofplayer = viewangleradiustb *0.15;
				double playedistfromcamera = cameraheight * tan( ((90 - (cameradownangle + angleofplayer))/360.0) * (6.2831852));

				double forwarddist = cameraheight * tan( ((90 -( cameradownangle + tbangle))/360.0) * (6.2831852)) - playedistfromcamera;
				double sidedist = forwarddist * tan( ((lrangle)/360.0) * (6.2831852));

				double distangle = atan2(sidedist, forwarddist);
				double distance = pow((sidedist* sidedist) + (forwarddist * forwarddist), 0.5);


				printf("Mouse r-clicked at %d, %d, distangle: %g, distance: %g\n", p.x, p.y,  distangle, distance);

				double radiusofearth = 6371000; // m

				ok = true;


				if (ok) {
					double wangle = 180.0 - angle;
					if (forwarddist < 0) {
						wangle += 180;


						wangle += distangle;



						runspeed = 0.0002;
						rundistance = ( distance / (6.2831852 * radiusofearth) ) * 360.0; // number of degrees to run

						runangle = (wangle / 360.0) * (6.2831852);

					}

				} else {
					printf("rightclick but not ok\n");
				}



				//	printf("fd: %g m, sd: %g m, pd: %g m\n", forwarddist, sidedist, playedistfromcamera);

				/*	double hratio = (1.0 - (y / h)) - 0.30;
				double wratio = -((x / w) - 0.5);



				wangle += (wratio * 60);

				*/

				/*

				double dx = x - cx;
				double dy = y - cy;



				//double cdist= pow((x - cx)*(x - cx) + (y - cy)*(y - cy), 0.5);
				//double cangle = atan2(y-cy, x-cx);



				if (wangle > 360) wangle -= 360;
				if (wangle < 0) wangle += 360;
				if (ok) {
				//	printf("Mouse r-clicked at %d, %d, compass angle: %g, hratio: %g, wratio: %g, walkangle: %g\n", p.x, p.y, angle, hratio, wratio, wangle);
				runspeed = 0.0002 * hratio;
				rundistance = hratio * 0.005;

				runangle = (wangle / 360.0) * (6.2831852);


				}
				
			}
		}
	

		if( GetAsyncKeyState( VK_SPACE ) & 0x8000 ) {
			rundistance = 0;

		}
			*/
		if( GetAsyncKeyState( VK_UP ) & 0x8000 ) {

			double wangle = angle + 90.0;

			runangle = (wangle / 360.0) * (6.2831852);
			lat += 0.00005 * sin(runangle);
			lng += 0.00005 * cos(runangle);


		}

		if( GetAsyncKeyState( VK_DOWN ) & 0x8000 ) {

			double wangle = angle + 270.0;

			runangle = (wangle / 360.0) * (6.2831852); 
			lat += 0.00005 * sin(runangle);
			lng += 0.00005 * cos(runangle);

		}

		if( GetAsyncKeyState( VK_LEFT ) & 0x8000 ) {


			double wangle = angle + 180.0;

			runangle = (wangle / 360.0) * (6.2831852); 
			lat += 0.00005 * sin(runangle);
			lng += 0.00005 * cos(runangle);
		}

		if( GetAsyncKeyState( VK_RIGHT ) & 0x8000 ) {
			double wangle = angle ;

			runangle = (wangle / 360.0) * (6.2831852); 
			lat += 0.00005 * sin(runangle);
			lng += 0.00005 * cos(runangle);		
		}


	}

	return 0;


}

void CreateChildProcess()
{ 
	SECURITY_ATTRIBUTES saAttr; 

	saAttr.nLength = sizeof(SECURITY_ATTRIBUTES); 
	saAttr.bInheritHandle = TRUE; 
	saAttr.lpSecurityDescriptor = NULL; 

	if ( ! CreatePipe(&g_hChildStd_OUT_Rd, &g_hChildStd_OUT_Wr, &saAttr, 0) ) 
		ErrorExit(TEXT("StdoutRd CreatePipe")); 


	if ( ! SetHandleInformation(g_hChildStd_OUT_Rd, HANDLE_FLAG_INHERIT, 0) )
		ErrorExit(TEXT("Stdout SetHandleInformation")); 

	if (! CreatePipe(&g_hChildStd_IN_Rd, &g_hChildStd_IN_Wr, &saAttr, 0)) 
		ErrorExit(TEXT("Stdin CreatePipe")); 

	if ( ! SetHandleInformation(g_hChildStd_IN_Wr, HANDLE_FLAG_INHERIT, 0) )
		ErrorExit(TEXT("Stdin SetHandleInformation"));   


	PROCESS_INFORMATION piProcInfo; 
	STARTUPINFO siStartInfo;
	BOOL bSuccess = FALSE; 

	ZeroMemory( &piProcInfo, sizeof(PROCESS_INFORMATION) );

	ZeroMemory( &siStartInfo, sizeof(STARTUPINFO) );
	siStartInfo.cb = sizeof(STARTUPINFO); 
	siStartInfo.hStdError = g_hChildStd_OUT_Wr;
	siStartInfo.hStdOutput = g_hChildStd_OUT_Wr;
	siStartInfo.hStdInput = g_hChildStd_IN_Rd;
	siStartInfo.dwFlags |= STARTF_USESTDHANDLES;

	bSuccess = CreateProcess(NULL, 
		exeloc,     
		NULL,       
		NULL,          
		TRUE,          
		0,             
		NULL,          
		exepath,          
		&siStartInfo,  
		&piProcInfo);  


	if ( ! bSuccess ) 
		ErrorExit(TEXT("Could not create process. Try run as administrator?\n"));
	else 
	{


		CloseHandle(piProcInfo.hProcess);
		CloseHandle(piProcInfo.hThread);
	}
}

void WriteToPipe(char* data) 

{ 
	DWORD dwRead, dwWritten; 
	CHAR chBuf[BUFSIZE];
	BOOL bSuccess = FALSE;

	bSuccess = WriteFile(g_hChildStd_IN_Wr, data, strlen(data), &dwWritten, NULL);


} 

DWORD WINAPI ReadFromPipe( LPVOID lpParam ) 

{ 
	DWORD dwRead, dwWritten; 
	CHAR chBuf[BUFSIZE]; 
	BOOL bSuccess = FALSE;
	HANDLE hParentStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	for (;;) 
	{ 
		bSuccess = ReadFile( g_hChildStd_OUT_Rd, chBuf, BUFSIZE-1, &dwRead, NULL);
		if( ! bSuccess || dwRead == 0 ) {
			printf(">");
			Sleep(1000);
			CreateChildProcess();
			WriteToPipe("dumpsys location | grep 'passive: Location' | grep -oE \"gps ([0-9\\.\\-]+),([0-9\\.\\-]+)\"\n");

			return 0;
		} 

		chBuf[dwRead] = '\0';

		long double x = 0, y = 0;
		int n = sscanf(chBuf, "gps %Lg,%Lg", &x, &y);

		//printf("Scanned %d entries\n", n);
		if (n == 2) {
			//	printf("entries: %.16Lg : %.16Lg\n", x, y);
			//	lat = x;
			//	lng = y;
		} else if (chBuf[0] == 'e' && chBuf[1] == 'r' && chBuf[2] == 'r' && chBuf[3] == 'o' && chBuf[4] == 'r' && chBuf[5] == ':' && chBuf[6] == ' ' && chBuf[7] == 'd' && chBuf[8] == 'e') {
			// failed startup, sleep 5000 and try again
			printf(">");
			Sleep(1000);
			CreateChildProcess();
			WriteToPipe("dumpsys location | grep 'passive: Location' | grep -oE \"gps ([0-9\\.\\-]+),([0-9\\.\\-]+)\"\n");


		}


		//   WriteFile(hParentStdOut, chBuf, 
		//                      dwRead, &dwWritten, NULL);
		// if (! bSuccess ) break; 
	} 
	return 0;
} 

void ErrorExit(PTSTR lpszFunction) 

{ 
	LPVOID lpMsgBuf;
	LPVOID lpDisplayBuf;
	DWORD dw = GetLastError(); 

	FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM |
		FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		dw,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR) &lpMsgBuf,
		0, NULL );

	lpDisplayBuf = (LPVOID)LocalAlloc(LMEM_ZEROINIT, 
		(lstrlen((LPCTSTR)lpMsgBuf)+lstrlen((LPCTSTR)lpszFunction)+40)*sizeof(TCHAR)); 
	StringCchPrintf((LPTSTR)lpDisplayBuf, 
		LocalSize(lpDisplayBuf) / sizeof(TCHAR),
		TEXT("%s failed with error %d: %s"), 
		lpszFunction, dw, lpMsgBuf); 
	MessageBox(NULL, (LPCTSTR)lpDisplayBuf, TEXT("Error"), MB_OK); 

	LocalFree(lpMsgBuf);
	LocalFree(lpDisplayBuf);
	ExitProcess(1);
}
