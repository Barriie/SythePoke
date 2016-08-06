#include <windows.h>
#include "DXGIManager.h"

DXGIManager g_DXGIManager;



HWND get_nox_window() {
	HWND  h = FindWindow(NULL, L"Nox App Player") ;
	if (h != NULL) h = FindWindowEx(h, 0, NULL, L"ScreenBoardClassWindow");
	if (h != NULL) h = FindWindowEx(h, 0, NULL, L"QWidgetClassWindow");
	if (h != NULL) h = FindWindowEx(h, 0, NULL, L"sub");

	return h;
}


void setup_screen_cap() {
	CoInitialize(NULL);


	g_DXGIManager.SetCaptureSource(CSDesktop);

	g_DXGIManager.Init();

	CComPtr<IWICImagingFactory> spWICFactory = NULL;
	HRESULT hr = NULL;
	do  {
		hr = spWICFactory.CoCreateInstance(CLSID_WICImagingFactory);
		Sleep(100);
	} while( FAILED(hr) );
}		

#define inTolerance(R1,G1,B1,R2,G2,B2,T) ( abs(R1 - R2) + abs(B1 - B2) + abs(G1 - G2) <= T )

BYTE* pBuff = NULL;
int pBuffLen = 0;
double get_compass_angle(bool* success) {


	HWND  h = get_nox_window();
	if (h == NULL) {
		if (success != NULL) *success = false;
		return 0.0;
	}
	RECT twrect;

	if (!GetWindowRect(h, &twrect)) return NULL;


	double tw = twrect.right - twrect.left;
	double th = twrect.bottom - twrect.top;

	double compassradius = (0.089 * tw)/2 -2;
	double cx = tw - (tw * 0.0920);
	double cy = th * 0.148;


	int sx =twrect.left + (cx - compassradius);
	int sy =twrect.top + (cy - compassradius);  
	int ex = twrect.left + (cx + compassradius); 
	int ey = twrect.top + (cy + compassradius);  


	RECT wrect;
	wrect.left = sx;
	wrect.top = sy;
	wrect.right = ex;
	wrect.bottom = ey;

	int l = 4 * (wrect.right- wrect.left) * (wrect.bottom-wrect.top);

	if (l != pBuffLen) {
		if (pBuff != NULL) {
			free(pBuff);
			pBuff = NULL;
		}
	}

	if (pBuff == NULL) {
		pBuffLen = 4 * (wrect.right- wrect.left) * (wrect.bottom-wrect.top);

		pBuff = (BYTE*)malloc(pBuffLen);
	}

	g_DXGIManager.GetOutputBits(pBuff, wrect);


	HDC dc = GetDC(0);
	int we = wrect.right - wrect.left;
	int he = wrect.bottom - wrect.top;

	
	// first center the compass
	int bx = we, by = he, fx = 0, fy = 0;
	for (int y = 0; y < wrect.bottom - wrect.top; y++) 
		for (int x = 0 ; x < we ; x++)  {
			int offset = (we*y + x) *4;

			if ( inTolerance( 239, 52, 69, pBuff[offset+2], pBuff[offset+1], pBuff[offset], 10 ) ||
				inTolerance( 178, 185, 178, pBuff[offset+2], pBuff[offset+1], pBuff[offset], 10 )) {
		if (x < bx) bx = x;
		if (y < by) by = y;
		if (x > fx) fx = x;
		if (y > fy) fy = y;
			}
		}


		int ww = (fx - bx);
		int hh = (fy - by);
		int ccx =  ww/2 + bx;
		int ccy = hh/2 + by;
/*	for (int y = 0; y < wrect.bottom - wrect.top; y++) 
		for (int x = 0 ; x < we ; x++)  {
			int offset = (we*y + x) *4;

			if ( inTolerance( 239, 52, 69, pBuff[offset+2], pBuff[offset+1], pBuff[offset], 10 ) ||
				inTolerance( 178, 185, 178, pBuff[offset+2], pBuff[offset+1], pBuff[offset], 10 ) )
				SetPixel(dc, x, y, RGB(pBuff[offset+2], pBuff[offset+1], pBuff[offset]));



			SetPixel(dc, ccx, ccy, RGB(0,255,0));

		}*/

		int highestmatchcount = 0;
		double highestmatchcountangle = 0.0;

			for (double cang = 0; cang < 6.2831852; cang += 0.008726646) {
				double co = cos(cang);
				double si = sin(cang);

				int matchcount = 0;

				for (double l = 0; l < compassradius; l+=0.5) {
					int x = ccx + l * co;
					int y = ccy + l * si;

					int offset = (we*y + x) *4;
					// red
					if ( inTolerance( 239, 52, 69, pBuff[offset+2], pBuff[offset+1], pBuff[offset], 10 ) ) {
						matchcount++;
						
					}

					// grey
					x = ccx - l * co;
					y = ccy - l * si;
					 offset = (we*y + x) *4;
					if (inTolerance( 178, 185, 178, pBuff[offset+2], pBuff[offset+1], pBuff[offset], 10 )) {
						matchcount++;
						
					}

				}

				if ( highestmatchcount < matchcount ) {
					highestmatchcount = matchcount;

					highestmatchcountangle = cang;
				}

			}

	
			double angle = ((highestmatchcountangle/(6.2831852))*360.0) - 270.0;

			if (angle < 360) angle+=360.0;
			if (angle > 360) angle-=360.0;

		ReleaseDC(0,dc);

		if (success != NULL) *success = true;
	
		return angle;
}