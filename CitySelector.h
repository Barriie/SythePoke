/* This code is Public Domain. All copyrights are hereby waived. */
﻿#pragma once
#include <Windows.h>
#include <stdio.h>
#include <wchar.h>
#include < stdlib.h >
#include < vcclr.h >
#include "SythePoke.h"
namespace SythePoke {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class CitySelector : public System::Windows::Forms::Form
	{
	public:
		CitySelector(void)
		{
			InitializeComponent();
		}

	protected:

		~CitySelector()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	protected: 

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(403, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CitySelector::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(291, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Select City";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CitySelector::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"IMPORTANT! Select your actual city here or you will risk crashing the game";
			this->label1->Click += gcnew System::EventHandler(this, &CitySelector::label1_Click);
			// 
			// CitySelector
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(427, 101);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CitySelector";
			this->Text = L"SythePoke City Selector";
			this->Load += gcnew System::EventHandler(this, &CitySelector::CitySelector_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

			this->comboBox1->Text = "Select your city";
			wchar_t loc[1024]; double latt;  double lngt;
	latt = 56.162939;
	lngt = 10.203921;
	swprintf(loc, 1023, L"Aarhus, Denmark : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 57.149717;
	lngt = -2.094278;
	swprintf(loc, 1023, L"Aberdeen, Scotland, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 5.3599517;
	lngt = -4.0082563;
	swprintf(loc, 1023, L"Abidjan, Ivory Coast : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.2991738;
	lngt = 54.6972774;
	swprintf(loc, 1023, L"Abu Dhabi, Abu Dhabi, United Arab Emirates : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.0764785;
	lngt = 7.398574;
	swprintf(loc, 1023, L"Abuja, Nigeria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 16.8531086;
	lngt = -99.8236533;
	swprintf(loc, 1023, L"Acapulco, Guerrero, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 5.6037168;
	lngt = -0.1869644;
	swprintf(loc, 1023, L"Accra, Greater Accra, Ghana : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.88;
	lngt = -176.6580556;
	swprintf(loc, 1023, L"Adak, Alaska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.0662897;
	lngt = -130.1004636;
	swprintf(loc, 1023, L"Adamstown, Pitcairn Islands, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.9914194;
	lngt = 35.3308285;
	swprintf(loc, 1023, L"Adana, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 8.9806034;
	lngt = 38.7577605;
	swprintf(loc, 1023, L"Addis Ababa, Ethiopia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -34.9284989;
	lngt = 138.6007456;
	swprintf(loc, 1023, L"Adelaide, South Australia, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.4277547;
	lngt = -9.598107199999999;
	swprintf(loc, 1023, L"Agadir, Agadir Prefecture, Morocco : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 23.831457;
	lngt = 91.2867777;
	swprintf(loc, 1023, L"Agartala, Tripura, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.1766701;
	lngt = 78.00807449999999;
	swprintf(loc, 1023, L"Agra, Uttar Pradesh, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.8852562;
	lngt = -102.2915677;
	swprintf(loc, 1023, L"Aguascalientes, Aguascalientes, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 23.022505;
	lngt = 72.5713621;
	swprintf(loc, 1023, L"Ahmedabad, Gujarat, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.7200079;
	lngt = 140.1025642;
	swprintf(loc, 1023, L"Akita, Akita, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.68849209999999;
	lngt = -18.1261693;
	swprintf(loc, 1023, L"Akureyri, Northeastern Region, Iceland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.1301619;
	lngt = 55.8023118;
	swprintf(loc, 1023, L"Al Ain, Abu Dhabi, United Arab Emirates : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.391583;
	lngt = -84.43827210000001;
	swprintf(loc, 1023, L"Alajuela, Costa Rica : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.0853336;
	lngt = -106.6055534;
	swprintf(loc, 1023, L"Albuquerque, New Mexico, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 82.5017771;
	lngt = -62.3480917;
	swprintf(loc, 1023, L"Alert, Nunavut, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.2000924;
	lngt = 29.9187387;
	swprintf(loc, 1023, L"Alexandria, Egypt : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.7537703;
	lngt = 3.0587927;
	swprintf(loc, 1023, L"Algiers, Algeria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.3459963;
	lngt = -0.4906855;
	swprintf(loc, 1023, L"Alicante, Valencian Community, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.2220146;
	lngt = 76.8512485;
	swprintf(loc, 1023, L"Almaty, Kazakhstan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -19.0653013;
	lngt = -169.9298512;
	swprintf(loc, 1023, L"Alofi, Niue, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.1248;
	lngt = 100.3678178;
	swprintf(loc, 1023, L"Alor Setar, Kedah, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 69.96873760000001;
	lngt = 23.2715496;
	swprintf(loc, 1023, L"Alta, Finnmark, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.6553932;
	lngt = 128.1907723;
	swprintf(loc, 1023, L"Ambon, Maluku, Maluku, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.9453666;
	lngt = 35.9283716;
	swprintf(loc, 1023, L"Amman, Jordan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.6339793;
	lngt = 74.8722642;
	swprintf(loc, 1023, L"Amritsar, Punjab, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.3702157;
	lngt = 4.895167900000001;
	swprintf(loc, 1023, L"Amsterdam, North Holland, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.73366129999999;
	lngt = 177.4968266;
	swprintf(loc, 1023, L"Anadyr, Chukotka Autonomous Okrug, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 61.2180556;
	lngt = -149.9002778;
	swprintf(loc, 1023, L"Anchorage, Alaska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.50631740000001;
	lngt = 1.5218355;
	swprintf(loc, 1023, L"Andorra la Vella, Andorra : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.7412488;
	lngt = -25.6755944;
	swprintf(loc, 1023, L"Angra do HeroÂ¡smo, Azores, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.9333635;
	lngt = 32.8597419;
	swprintf(loc, 1023, L"Ankara, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -18.8791902;
	lngt = 47.5079055;
	swprintf(loc, 1023, L"Antananarivo, Madagascar : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -23.6509279;
	lngt = -70.39750219999999;
	swprintf(loc, 1023, L"Antofagasta, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.2194475;
	lngt = 4.4024643;
	swprintf(loc, 1023, L"Antwerp, Flanders, Belgium : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.822072;
	lngt = 140.7473647;
	swprintf(loc, 1023, L"Aomori, Aomori, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -13.8506958;
	lngt = -171.7513551;
	swprintf(loc, 1023, L"Apia, Samoa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -10.9472468;
	lngt = -37.0730823;
	swprintf(loc, 1023, L"Aracaju, Sergipe, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -21.7848272;
	lngt = -48.1786486;
	swprintf(loc, 1023, L"Araraquara, Sao Paulo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.1673851;
	lngt = 43.9811935;
	swprintf(loc, 1023, L"Arbil, Iraqi Kurdistan, Iraq : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 58.4617568;
	lngt = 8.7724499;
	swprintf(loc, 1023, L"Arendal, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -16.4090474;
	lngt = -71.53745099999999;
	swprintf(loc, 1023, L"Arequipa, Peru : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -18.4782534;
	lngt = -70.3125988;
	swprintf(loc, 1023, L"Arica, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.54725069999999;
	lngt = 40.5601553;
	swprintf(loc, 1023, L"Arkhangelsk, Arkhangelsk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.7706355;
	lngt = 142.364819;
	swprintf(loc, 1023, L"Asahikawa, Hokkaido, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.9600766;
	lngt = 58.32606289999999;
	swprintf(loc, 1023, L"Ashgabat, Turkmenistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 15.3228767;
	lngt = 38.9250517;
	swprintf(loc, 1023, L"Asmara, Eritrea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -22.6604341;
	lngt = -50.4187813;
	swprintf(loc, 1023, L"Assis, Sao Paulo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.16052269999999;
	lngt = 71.47035579999999;
	swprintf(loc, 1023, L"Astana, Kazakhstan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.2637399;
	lngt = -57.57592599999999;
	swprintf(loc, 1023, L"AsunciÂ¢n, Paraguay : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.9838096;
	lngt = 23.7275388;
	swprintf(loc, 1023, L"Athens, Greece : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.7489954;
	lngt = -84.3879824;
	swprintf(loc, 1023, L"Atlanta, Georgia, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.0944959;
	lngt = 51.9238373;
	swprintf(loc, 1023, L"Atyrau, Atyrau Region, Kazakhstan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -36.8484597;
	lngt = 174.7633315;
	swprintf(loc, 1023, L"Auckland, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.3106241;
	lngt = -69.7794897;
	swprintf(loc, 1023, L"Augusta, Maine, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.267153;
	lngt = -97.74306079999999;
	swprintf(loc, 1023, L"Austin, Texas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -21.2129007;
	lngt = -159.7823059;
	swprintf(loc, 1023, L"Avarua, Cook Islands, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.0281396;
	lngt = 13.4255637;
	swprintf(loc, 1023, L"Avezzano, Abruzzo, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -13.1638737;
	lngt = -74.22356409999999;
	swprintf(loc, 1023, L"Ayacucho, Peru : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.3692325;
	lngt = 100.5876634;
	swprintf(loc, 1023, L"Ayutthaya, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.3128057;
	lngt = 44.3614875;
	swprintf(loc, 1023, L"Baghdad, Iraq : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -37.2017285;
	lngt = -59.84106969999999;
	swprintf(loc, 1023, L"BahÂ¡a Blanca, Buenos Aires Province, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.40926169999999;
	lngt = 49.8670924;
	swprintf(loc, 1023, L"Baku, Azerbaijan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -1.2379274;
	lngt = 116.8528526;
	swprintf(loc, 1023, L"Balikpapan, East Kalimantan, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.2903848;
	lngt = -76.6121893;
	swprintf(loc, 1023, L"Baltimore, Maryland, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.6392316;
	lngt = -8.0028892;
	swprintf(loc, 1023, L"Bamako, Mali : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 5.5482904;
	lngt = 95.32375589999999;
	swprintf(loc, 1023, L"Banda Aceh, Aceh, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.903052199999999;
	lngt = 114.939821;
	swprintf(loc, 1023, L"Bandar Seri Begawan, Brunei : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -6.9174639;
	lngt = 107.6191228;
	swprintf(loc, 1023, L"Bandung, West Java, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.9715987;
	lngt = 77.5945627;
	swprintf(loc, 1023, L"Bangalore, Karnataka, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.7563309;
	lngt = 100.5017651;
	swprintf(loc, 1023, L"Bangkok, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.3946735;
	lngt = 18.5581899;
	swprintf(loc, 1023, L"Bangui, Central African Republic : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.4548761;
	lngt = -16.5790323;
	swprintf(loc, 1023, L"Banjul, Gambia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.3850639;
	lngt = 2.1734035;
	swprintf(loc, 1023, L"Barcelona, Catalonia, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.1171432;
	lngt = 16.8718715;
	swprintf(loc, 1023, L"Bari, Apulia, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 11.0041072;
	lngt = -74.80698129999999;
	swprintf(loc, 1023, L"Barranquilla, Colombia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 71.29055559999999;
	lngt = -156.7886111;
	swprintf(loc, 1023, L"Barrow, Alaska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.5595986;
	lngt = 7.5885761;
	swprintf(loc, 1023, L"Basel,  Switzerland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.5081033;
	lngt = 47.7834888;
	swprintf(loc, 1023, L"Basra, Iraq : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 16.2073497;
	lngt = -61.6481441;
	swprintf(loc, 1023, L"Basse-Terre, Guadeloupe, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.3026058;
	lngt = -62.7176924;
	swprintf(loc, 1023, L"Basseterre, Saint Kitts and Nevis : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.375801;
	lngt = -2.3599039;
	swprintf(loc, 1023, L"Bath, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.9106353;
	lngt = -69.82060229999999;
	swprintf(loc, 1023, L"Bath, Maine, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.730997100000001;
	lngt = 81.6747295;
	swprintf(loc, 1023, L"Batticaloa, Sri Lanka : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -22.314459;
	lngt = -49.0586951;
	swprintf(loc, 1023, L"Bauru, Sao Paulo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.7764749;
	lngt = -79.93105120000001;
	swprintf(loc, 1023, L"Charleston, South Carolina, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.3498195;
	lngt = -81.6326234;
	swprintf(loc, 1023, L"Charleston, West Virginia, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.338567;
	lngt = -64.94070099999999;
	swprintf(loc, 1023, L"Charlotte Amalie, United States Virgin Islands, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.2270869;
	lngt = -80.8431267;
	swprintf(loc, 1023, L"Charlotte, North Carolina, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.23824;
	lngt = -63.13107040000001;
	swprintf(loc, 1023, L"Charlottetown, Prince Edward Island, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.1644419;
	lngt = 61.4368431;
	swprintf(loc, 1023, L"Chelyabinsk, Chelyabinsk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.7766642;
	lngt = -96.79698789999999;
	swprintf(loc, 1023, L"Dallas, Texas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.5138073;
	lngt = 36.2765279;
	swprintf(loc, 1023, L"Damascus, Syria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.3926665;
	lngt = 49.9777136;
	swprintf(loc, 1023, L"Dammam, Saudi Arabia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -6.792354;
	lngt = 39.2083284;
	swprintf(loc, 1023, L"Dar es Salaam, Tanzania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -12.4634403;
	lngt = 130.8456418;
	swprintf(loc, 1023, L"Darwin, Northern Territory, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.561769899999999;
	lngt = 125.6532848;
	swprintf(loc, 1023, L"Davao City, Davao del Norte, Philippines : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 70.20019959999999;
	lngt = -148.4597191;
	swprintf(loc, 1023, L"Deadhorse, Alaska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.5452512;
	lngt = 144.851121;
	swprintf(loc, 1023, L"Dededo, Guam, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.670458199999999;
	lngt = 115.2126293;
	swprintf(loc, 1023, L"Denpasar, Bali, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.7392358;
	lngt = -104.990251;
	swprintf(loc, 1023, L"Denver, Colorado, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.9225301;
	lngt = -1.4746186;
	swprintf(loc, 1023, L"Derby, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.9966124;
	lngt = -7.3085748;
	swprintf(loc, 1023, L"Derry, Northern Ireland, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.6005448;
	lngt = -93.6091064;
	swprintf(loc, 1023, L"Des Moines, Iowa, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.331427;
	lngt = -83.0457538;
	swprintf(loc, 1023, L"Detroit, Michigan, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 23.810332;
	lngt = 90.4125181;
	swprintf(loc, 1023, L"Dhaka, Bangladesh : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.4728327;
	lngt = 94.9119621;
	swprintf(loc, 1023, L"Dibrugarh, Assam, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 73.50489;
	lngt = 80.580917;
	swprintf(loc, 1023, L"Dikson, Krasnoyarsk Krai, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.5568557;
	lngt = 125.5603143;
	swprintf(loc, 1023, L"Dili, Timor-Leste : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 11.5720765;
	lngt = 43.1456475;
	swprintf(loc, 1023, L"Djibouti, Djibouti : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.464717;
	lngt = 35.046183;
	swprintf(loc, 1023, L"Dnipropetrovsk, Ukraine : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -6.162959000000001;
	lngt = 35.7516069;
	swprintf(loc, 1023, L"Dodoma, Tanzania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.2854473;
	lngt = 51.53103979999999;
	swprintf(loc, 1023, L"Doha, Qatar : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.015883;
	lngt = 37.80285;
	swprintf(loc, 1023, L"Donetsk, Donetsk Oblast, Ukraine : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.7687933;
	lngt = 140.7288103;
	swprintf(loc, 1023, L"Hakodate, Hokkaido, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.6488625;
	lngt = -63.5753196;
	swprintf(loc, 1023, L"Halifax, Nova Scotia, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.4109234;
	lngt = 23.5490415;
	swprintf(loc, 1023, L"Halkis, Greece : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.5510846;
	lngt = 9.993681799999999;
	swprintf(loc, 1023, L"Hamburg, Hamburg, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.4991934;
	lngt = -1.4765235;
	swprintf(loc, 1023, L"Hamilton, Bermuda, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -37.7870012;
	lngt = 175.279253;
	swprintf(loc, 1023, L"Hamilton, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 70.66343820000002;
	lngt = 23.6819665;
	swprintf(loc, 1023, L"Hammerfest, Finnmark, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.562389;
	lngt = 44.0770134;
	swprintf(loc, 1023, L"Hargeisa, Somaliland, Somalia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 68.7986342;
	lngt = 16.5414503;
	swprintf(loc, 1023, L"Harstad, Troms, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.76371109999999;
	lngt = -72.6850932;
	swprintf(loc, 1023, L"Hartford, Connecticut, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -39.6395783;
	lngt = 176.8392322;
	swprintf(loc, 1023, L"Hastings, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.0086472;
	lngt = 100.4746879;
	swprintf(loc, 1023, L"Hat Yai, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 23.1135925;
	lngt = -82.3665956;
	swprintf(loc, 1023, L"Havana, Cuba : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.5883707;
	lngt = -112.0245054;
	swprintf(loc, 1023, L"Helena, Montana, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.16985569999999;
	lngt = 24.938379;
	swprintf(loc, 1023, L"Helsinki, Uusimaa, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.3387352;
	lngt = 25.1442126;
	swprintf(loc, 1023, L"Heraklion, Crete, Greece : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.0729673;
	lngt = -110.9559192;
	swprintf(loc, 1023, L"Hermosillo, Sonora, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 19.7070942;
	lngt = -155.0884869;
	swprintf(loc, 1023, L"Hilo, Hawaii, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.3852029;
	lngt = 132.4552927;
	swprintf(loc, 1023, L"Hiroshima, Hiroshima, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.8230989;
	lngt = 106.6296638;
	swprintf(loc, 1023, L"Ho Chi Minh City, Vietnam : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -42.8821377;
	lngt = 147.3271949;
	swprintf(loc, 1023, L"Hobart, Tasmania, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -9.4456381;
	lngt = 159.9728999;
	swprintf(loc, 1023, L"Honiara, Solomon Islands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 70.9822909;
	lngt = 25.9702074;
	swprintf(loc, 1023, L"Honningsvâ€ g, Finnmark, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.3069444;
	lngt = -157.8583333;
	swprintf(loc, 1023, L"Honolulu, Hawaii, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.5348447;
	lngt = -28.6299812;
	swprintf(loc, 1023, L"Horta, Azores, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.7604267;
	lngt = -95.3698028;
	swprintf(loc, 1023, L"Houston, Texas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 16.4498;
	lngt = 107.5623501;
	swprintf(loc, 1023, L"Hu?, Vietnam : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -12.7739761;
	lngt = 15.7468535;
	swprintf(loc, 1023, L"Huambo, Angola : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.3817509;
	lngt = 68.3693897;
	swprintf(loc, 1023, L"Hyderabad, Sindh, Pakistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.385044;
	lngt = 78.486671;
	swprintf(loc, 1023, L"Hyderabad, Telangana, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.3775355;
	lngt = 3.9470396;
	swprintf(loc, 1023, L"Ibadan, Nigeria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.9067339;
	lngt = 1.4205983;
	swprintf(loc, 1023, L"Ibiza, Balearic Islands, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -14.7935051;
	lngt = -39.0463797;
	swprintf(loc, 1023, L"Ilhâ€šus, Bahia, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.7201501;
	lngt = 122.5621063;
	swprintf(loc, 1023, L"Iloilo City, Iloilo, Philippines : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -5.5205508;
	lngt = -47.4718408;
	swprintf(loc, 1023, L"Imperatriz, Maranhao, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.4562557;
	lngt = 126.7052062;
	swprintf(loc, 1023, L"Incheon, South Korea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.768403;
	lngt = -86.158068;
	swprintf(loc, 1023, L"Indianapolis, Indiana, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.2692124;
	lngt = 11.4041024;
	swprintf(loc, 1023, L"Innsbruck, Tyrol, Austria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -46.4131866;
	lngt = 168.3537731;
	swprintf(loc, 1023, L"Invercargill, Southland, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 57.477773;
	lngt = -4.224721;
	swprintf(loc, 1023, L"Inverness, Scotland, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.597479;
	lngt = 101.090106;
	swprintf(loc, 1023, L"Ipoh, Perak, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 63.74669300000001;
	lngt = -68.5169669;
	swprintf(loc, 1023, L"Iqaluit, Nunavut, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.2307033;
	lngt = -70.1356692;
	swprintf(loc, 1023, L"Iquique, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.7436735;
	lngt = -73.25163260000001;
	swprintf(loc, 1023, L"Iquitos, Peru : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.28697409999999;
	lngt = 104.3050183;
	swprintf(loc, 1023, L"Irkutsk, Irkutsk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 66.0611061;
	lngt = -23.1888599;
	swprintf(loc, 1023, L"Isafjâ€rdur, Westfjords, Iceland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.6546275;
	lngt = 51.66798259999999;
	swprintf(loc, 1023, L"Isfahan, Iran : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.7293882;
	lngt = 73.0931461;
	swprintf(loc, 1023, L"Islamabad, Islamabad Capital Territory, Pakistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.0082376;
	lngt = 28.9783589;
	swprintf(loc, 1023, L"Istanbul, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 56.86186009999999;
	lngt = 53.2324285;
	swprintf(loc, 1023, L"Izhevsk, Udmurt Republic, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.423734;
	lngt = 27.142826;
	swprintf(loc, 1023, L"Izmir, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.2987573;
	lngt = -90.1848103;
	swprintf(loc, 1023, L"Jackson, Mississippi, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.3321838;
	lngt = -81.65565099999999;
	swprintf(loc, 1023, L"Jacksonville, Florida, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.661498099999999;
	lngt = 80.02554649999999;
	swprintf(loc, 1023, L"Jaffna, Sri Lanka : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.9124336;
	lngt = 75.7872709;
	swprintf(loc, 1023, L"Jaipur, Rajasthan, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -6.2087634;
	lngt = 106.845599;
	swprintf(loc, 1023, L"Jakarta, Jakarta, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.3973074;
	lngt = -2.641934;
	swprintf(loc, 1023, L"Jamestown, Saint Helena, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -2.5916025;
	lngt = 140.6689995;
	swprintf(loc, 1023, L"Jayapura, Papua, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.2854067;
	lngt = 39.2375507;
	swprintf(loc, 1023, L"Jeddah, Saudi Arabia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.72815749999999;
	lngt = -74.0776417;
	swprintf(loc, 1023, L"Jersey City, New Jersey, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 28.1235459;
	lngt = -15.4362574;
	swprintf(loc, 1023, L"Las Palmas de Gran Canaria, Canary Islands, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.1699412;
	lngt = -115.1398296;
	swprintf(loc, 1023, L"Las Vegas, Nevada, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.5407103;
	lngt = 35.7952667;
	swprintf(loc, 1023, L"Latakia, Syria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.5196535;
	lngt = 6.6322734;
	swprintf(loc, 1023, L"Lausanne, Vaud,  Switzerland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.8007554;
	lngt = -1.5490774;
	swprintf(loc, 1023, L"Leeds, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.6368778;
	lngt = -1.1397592;
	swprintf(loc, 1023, L"Leicester, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.1601144;
	lngt = 4.4970097;
	swprintf(loc, 1023, L"Leiden, South Holland, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.3396955;
	lngt = 12.3730747;
	swprintf(loc, 1023, L"Leipzig, Saxony, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.1250077;
	lngt = -101.6859605;
	swprintf(loc, 1023, L"LeÂ¢n, Guanajuato, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.1529871;
	lngt = -1.1492932;
	swprintf(loc, 1023, L"Lerwick, Shetland, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -29.36321879999999;
	lngt = 27.5143603;
	swprintf(loc, 1023, L"Maseru, Lesotho : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.2604623;
	lngt = 59.6167549;
	swprintf(loc, 1023, L"Mashhad, Iran : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.7605619;
	lngt = -15.5860172;
	swprintf(loc, 1023, L"Maspalomas, Canary Islands, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -13.2659023;
	lngt = -176.1797057;
	swprintf(loc, 1023, L"Mata-Utu, Wallis and Futuna, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.4680595;
	lngt = 133.048375;
	swprintf(loc, 1023, L"Matsue, Shimane, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.8391574;
	lngt = 132.7655752;
	swprintf(loc, 1023, L"Matsuyama, Ehime, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -26.3054482;
	lngt = 31.1366715;
	swprintf(loc, 1023, L"Mbabane, Swaziland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.1515919;
	lngt = -78.43931289999999;
	swprintf(loc, 1023, L"McMurdo, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.3890824;
	lngt = 39.8579118;
	swprintf(loc, 1023, L"Mecca, Saudi Arabia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 3.5951956;
	lngt = 98.67222270000001;
	swprintf(loc, 1023, L"Medan, North Sumatera, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.253040800000001;
	lngt = -75.5645737;
	swprintf(loc, 1023, L"MedellÂ¡n, Colombia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.5246542;
	lngt = 39.5691841;
	swprintf(loc, 1023, L"Medina, Saudi Arabia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -37.8162789;
	lngt = 144.9642459;
	swprintf(loc, 1023, L"Melbourne, Victoria (Australia) Victoria, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.4951158;
	lngt = 134.6336896;
	swprintf(loc, 1023, L"Melekeok, Palau : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.2922775;
	lngt = -2.9380973;
	swprintf(loc, 1023, L"Melilla, Melilla, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.1495343;
	lngt = -90.04898009999999;
	swprintf(loc, 1023, L"Memphis, Tennessee, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -32.8894587;
	lngt = -68.84583859999999;
	swprintf(loc, 1023, L"Mendoza, Mendoza, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 8.5698244;
	lngt = -71.1804988;
	swprintf(loc, 1023, L"Mâ€šrida, Mâ€šrida, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.9673702;
	lngt = -89.5925857;
	swprintf(loc, 1023, L"Mâ€šrida, YucatÂ n, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.8121041;
	lngt = 34.6414811;
	swprintf(loc, 1023, L"Mersin, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.1938137;
	lngt = 15.5540152;
	swprintf(loc, 1023, L"Messina, Sicily, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.6245389;
	lngt = -115.4522623;
	swprintf(loc, 1023, L"Mexicali, Baja California, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 19.4326077;
	lngt = -99.133208;
	swprintf(loc, 1023, L"Mexico City Mexico City, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.7616798;
	lngt = -80.1917902;
	swprintf(loc, 1023, L"Miami, Florida, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.574227;
	lngt = -1.234956;
	swprintf(loc, 1023, L"Middlesbrough, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.4654219;
	lngt = 9.1859243;
	swprintf(loc, 1023, L"Milan, Lombardy, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.0389025;
	lngt = -87.9064736;
	swprintf(loc, 1023, L"Milwaukee, Wisconsin, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.977753;
	lngt = -93.2650108;
	swprintf(loc, 1023, L"Minneapolis, Minnesota, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.90453979999999;
	lngt = 27.5615244;
	swprintf(loc, 1023, L"Minsk, Belarus : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.399493;
	lngt = 113.9913832;
	swprintf(loc, 1023, L"Miri, Sarawak, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.3665027;
	lngt = 140.4709965;
	swprintf(loc, 1023, L"Mito, Ibaraki, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.9076736;
	lngt = 131.4202411;
	swprintf(loc, 1023, L"Miyazaki, Miyazaki, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.6953657;
	lngt = -88.0398912;
	swprintf(loc, 1023, L"Mobile, Alabama, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 2.0469343;
	lngt = 45.3181623;
	swprintf(loc, 1023, L"Mogadishu, Somalia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -4.0434771;
	lngt = 39.6682065;
	swprintf(loc, 1023, L"Mombasa, Kenya : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.73741099999999;
	lngt = 7.420815999999999;
	swprintf(loc, 1023, L"Monaco, Monaco : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.0878165;
	lngt = -64.7782313;
	swprintf(loc, 1023, L"Moncton, New Brunswick, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.2907432;
	lngt = -10.7605239;
	swprintf(loc, 1023, L"Monrovia, Liberia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.6866142;
	lngt = -100.3161126;
	swprintf(loc, 1023, L"Monterrey, Nuevo LeÂ¢n, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -34.9011127;
	lngt = -56.16453139999999;
	swprintf(loc, 1023, L"Montevideo, Uruguay : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.26005929999999;
	lngt = -72.5753869;
	swprintf(loc, 1023, L"Montpelier, Vermont, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.5016889;
	lngt = -73.567256;
	swprintf(loc, 1023, L"Montreal, Quebec, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.702053;
	lngt = 141.1544838;
	swprintf(loc, 1023, L"Morioka, Iwate, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -11.7172157;
	lngt = 43.2473146;
	swprintf(loc, 1023, L"Moroni, Comoros : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.73238749999999;
	lngt = -117.0001651;
	swprintf(loc, 1023, L"Moscow, Idaho, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.755826;
	lngt = 37.6173;
	swprintf(loc, 1023, L"Moscow, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.3566484;
	lngt = 43.1640004;
	swprintf(loc, 1023, L"Mosul, Iraq : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 8.5914775;
	lngt = 16.0757749;
	swprintf(loc, 1023, L"Moundou, Chad : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.215374;
	lngt = 28.363394;
	swprintf(loc, 1023, L"Mugla, Mugla, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.19838069999999;
	lngt = 71.46870280000002;
	swprintf(loc, 1023, L"Multan, Punjab, Pakistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 19.0759837;
	lngt = 72.87765589999999;
	swprintf(loc, 1023, L"Mumbai, Maharashtra, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.1351253;
	lngt = 11.5819806;
	swprintf(loc, 1023, L"Munich, Bavaria, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 68.9585244;
	lngt = 33.0826598;
	swprintf(loc, 1023, L"Murmansk, Murmansk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 23.58589;
	lngt = 58.4059227;
	swprintf(loc, 1023, L"Muscat, Oman : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -18.9757714;
	lngt = 32.650351;
	swprintf(loc, 1023, L"Mutare, Manicaland, Zimbabwe : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -2.5164305;
	lngt = 32.9174517;
	swprintf(loc, 1023, L"Mwanza, Tanzania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.218371;
	lngt = -1.553621;
	swprintf(loc, 1023, L"Nantes, Pays de la Loire, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.8517746;
	lngt = 14.2681244;
	swprintf(loc, 1023, L"Naples, Campania, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.6850869;
	lngt = 135.8050002;
	swprintf(loc, 1023, L"Nara, Nara, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 68.4384984;
	lngt = 17.4272612;
	swprintf(loc, 1023, L"Narvik, Nordland, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.1626638;
	lngt = -86.7816016;
	swprintf(loc, 1023, L"Nashville, Tennessee, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.0479835;
	lngt = -77.355413;
	swprintf(loc, 1023, L"Nassau, Bahamas : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -5.7792569;
	lngt = -35.200916;
	swprintf(loc, 1023, L"Natal, Rio Grande do Norte, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 19.7633057;
	lngt = 96.07851040000001;
	swprintf(loc, 1023, L"Naypyidaw, Myanmar : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -12.9906407;
	lngt = 28.6498144;
	swprintf(loc, 1023, L"Ndola, Zambia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -41.2706319;
	lngt = 173.2839653;
	swprintf(loc, 1023, L"Nelson, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.4752984;
	lngt = 30.9694163;
	swprintf(loc, 1023, L"Nelspruit, Mpumalanga, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.3300759;
	lngt = 145.5827903;
	swprintf(loc, 1023, L"Nemuro, Hokkaido, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -38.9516784;
	lngt = -68.0591888;
	swprintf(loc, 1023, L"Neuquâ€šn, Neuquâ€šn, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 28.6139391;
	lngt = 77.2090212;
	swprintf(loc, 1023, L"New Delhi, Delhi, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.5871702;
	lngt = -62.6451191;
	swprintf(loc, 1023, L"New Glasgow, Nova Scotia, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.95106579999999;
	lngt = -90.0715323;
	swprintf(loc, 1023, L"New Orleans, Louisiana, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.7127837;
	lngt = -74.0059413;
	swprintf(loc, 1023, L"New York City, New York, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.978252;
	lngt = -1.61778;
	swprintf(loc, 1023, L"Newcastle upon Tyne, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -32.92833299999999;
	lngt = 151.781667;
	swprintf(loc, 1023, L"Newcastle, New South Wales, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.5115963;
	lngt = 2.1253854;
	swprintf(loc, 1023, L"Niamey, Niger : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.8138783;
	lngt = -71.2079809;
	swprintf(loc, 1023, L"Quebec City, Quebec, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.8520705;
	lngt = -91.5305465;
	swprintf(loc, 1023, L"Quetzaltenango, Guatemala : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.6760413;
	lngt = 121.0437003;
	swprintf(loc, 1023, L"Quezon City, National Capital Region, Philippines : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -0.1806532;
	lngt = -78.4678382;
	swprintf(loc, 1023, L"Quito, Ecuador : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.9715904;
	lngt = -6.8498129;
	swprintf(loc, 1023, L"Rabat, Morocco : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -16.4994837;
	lngt = -179.9533441;
	swprintf(loc, 1023, L"Rabi Island, Fiji : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.7795897;
	lngt = -78.6381787;
	swprintf(loc, 1023, L"Raleigh, North Carolina, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.4183598;
	lngt = 12.2035294;
	swprintf(loc, 1023, L"Ravenna, Emilia-Romagna, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.598394;
	lngt = 73.0441352;
	swprintf(loc, 1023, L"Rawalpindi, Punjab, Pakistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.0578381;
	lngt = -34.8828969;
	swprintf(loc, 1023, L"Recife, Pernambuco, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.4452112;
	lngt = -104.6188944;
	swprintf(loc, 1023, L"Regina, Saskatchewan, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.5296329;
	lngt = -119.8138027;
	swprintf(loc, 1023, L"Reno, Nevada, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.12652059999999;
	lngt = -21.8174393;
	swprintf(loc, 1023, L"ReykjavÂ¡k, Capital Region, Iceland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -21.1704008;
	lngt = -47.8103238;
	swprintf(loc, 1023, L"Ribeirao Preto, Sao Paulo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 56.9496487;
	lngt = 24.1051864;
	swprintf(loc, 1023, L"Riga, Latvia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -9.975377;
	lngt = -67.82489769999999;
	swprintf(loc, 1023, L"Rio Branco, Acre, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -22.9068467;
	lngt = -43.1728965;
	swprintf(loc, 1023, L"Rio de Janeiro, Rio de Janeiro, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -51.6230485;
	lngt = -69.2168291;
	swprintf(loc, 1023, L"RÂ¡o Gallegos, Santa Cruz, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.9533487;
	lngt = -117.3961564;
	swprintf(loc, 1023, L"Riverside, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.7135517;
	lngt = 46.6752957;
	swprintf(loc, 1023, L"Riyadh, Saudi Arabia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.4286115;
	lngt = -64.6184657;
	swprintf(loc, 1023, L"Road Town, British Virgin Islands, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.16103;
	lngt = -77.61092189999999;
	swprintf(loc, 1023, L"Rochester, New York, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -23.3790772;
	lngt = 150.510016;
	swprintf(loc, 1023, L"Rockhampton, Queensland, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.9027835;
	lngt = 12.4963655;
	swprintf(loc, 1023, L"Rome, Lazio, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -32.9442426;
	lngt = -60.65053880000001;
	swprintf(loc, 1023, L"Rosario, Santa Fe, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 15.3091676;
	lngt = -61.37935539999999;
	swprintf(loc, 1023, L"Roseau, Dominica : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.0924406;
	lngt = 12.0991466;
	swprintf(loc, 1023, L"Rostock, Mecklenburg-Vorpommern, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.2357137;
	lngt = 39.701505;
	swprintf(loc, 1023, L"Rostov-on-Don, Rostov Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.9244201;
	lngt = 4.4777325;
	swprintf(loc, 1023, L"Rotterdam, South Holland, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 66.50394779999999;
	lngt = 25.7293905;
	swprintf(loc, 1023, L"Rovaniemi, Lapland, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.7488612;
	lngt = 19.6907882;
	swprintf(loc, 1023, L"Sabac, Serbia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.0087129;
	lngt = 14.4490398;
	swprintf(loc, 1023, L"Sabha, Libya : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.5815719;
	lngt = -121.4943996;
	swprintf(loc, 1023, L"Sacramento, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.263482;
	lngt = 130.3008576;
	swprintf(loc, 1023, L"Saga, Saga, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.4280529;
	lngt = -71.0684923;
	swprintf(loc, 1023, L"Saguenay, Quebec, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.9244259;
	lngt = 2.512763;
	swprintf(loc, 1023, L"Saint-Denis, Râ€šunion, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.9719337;
	lngt = -1.0604274;
	swprintf(loc, 1023, L"Saint-Pierre, Saint Pierre and Miquelon, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.2733153;
	lngt = -66.0633081;
	swprintf(loc, 1023, L"Saint John, New Brunswick, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 59.9342802;
	lngt = 30.3350986;
	swprintf(loc, 1023, L"Saint Petersburg, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 15.177801;
	lngt = 145.750967;
	swprintf(loc, 1023, L"Saipan, Northern Mariana Islands, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.0506675;
	lngt = 54.1065864;
	swprintf(loc, 1023, L"Salalah, Oman : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.7607793;
	lngt = -111.8910474;
	swprintf(loc, 1023, L"Salt Lake City, Utah, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -24.7821269;
	lngt = -65.42319759999999;
	swprintf(loc, 1023, L"Salta, Salta, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -12.9730401;
	lngt = -38.502304;
	swprintf(loc, 1023, L"Salvador, Bahia, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.80949;
	lngt = 13.05501;
	swprintf(loc, 1023, L"Salzburg, Salzburg, Austria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.2415041;
	lngt = 50.2212463;
	swprintf(loc, 1023, L"Samara, Samara Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.4241219;
	lngt = -98.49362819999999;
	swprintf(loc, 1023, L"San Antonio, Texas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -41.1334722;
	lngt = -71.31027779999999;
	swprintf(loc, 1023, L"San Carlos de Bariloche, RÂ¡o Negro Province RÂ¡o Negro, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.771357200000001;
	lngt = -72.22614659999999;
	swprintf(loc, 1023, L"San CristÂ¢bal, TÂ chira, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.715738;
	lngt = -117.1610838;
	swprintf(loc, 1023, L"San Diego, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.2905853;
	lngt = -61.4493842;
	swprintf(loc, 1023, L"San Fernando, Trinidad and Tobago : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.7749295;
	lngt = -122.4194155;
	swprintf(loc, 1023, L"San Francisco, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.3382082;
	lngt = -121.8863286;
	swprintf(loc, 1023, L"San Jose, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.9280694;
	lngt = -84.0907246;
	swprintf(loc, 1023, L"San Josâ€š, Costa Rica : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.4663338;
	lngt = -66.1057217;
	swprintf(loc, 1023, L"San Juan, Puerto Rico, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.1564699;
	lngt = -100.9855409;
	swprintf(loc, 1023, L"San Luis PotosÂ¡, San Luis PotosÂ¡, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.9355907;
	lngt = 12.4472806;
	swprintf(loc, 1023, L"San Marino, San Marino : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -26.8139041;
	lngt = -65.17884239999999;
	swprintf(loc, 1023, L"San Miguel de TucumÂ n, TucumÂ n, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.6929403;
	lngt = -89.2181911;
	swprintf(loc, 1023, L"San Salvador, El Salvador : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.318334;
	lngt = -1.9812313;
	swprintf(loc, 1023, L"San SebastiÂ n, Basque Country, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.5787726;
	lngt = 91.8932535;
	swprintf(loc, 1023, L"Shillong, Meghalaya, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.1048145;
	lngt = 77.17340329999999;
	swprintf(loc, 1023, L"Shimla, Himachal Pradesh, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.975562;
	lngt = 138.3827596;
	swprintf(loc, 1023, L"Shizuoka, Shizuoka, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.5251516;
	lngt = -93.75017889999999;
	swprintf(loc, 1023, L"Shreveport, Louisiana, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.3670968;
	lngt = 103.8448134;
	swprintf(loc, 1023, L"Siem Reap, Cambodia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.7271012;
	lngt = 88.39528609999999;
	swprintf(loc, 1023, L"Siliguri, West Bengal, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.952117;
	lngt = 34.102417;
	swprintf(loc, 1023, L"Simferopol, Crimea, Ukraine/ Russia (disputed) : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 1.3553794;
	lngt = 103.8677444;
	swprintf(loc, 1023, L"Singapore, Singapore : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -11.8608456;
	lngt = -55.5095451;
	swprintf(loc, 1023, L"Sinop, Mato Grosso, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.5445959;
	lngt = -96.73110340000001;
	swprintf(loc, 1023, L"Sioux Falls, South Dakota, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 57.0530556;
	lngt = -135.33;
	swprintf(loc, 1023, L"Sitka, Alaska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.9973462;
	lngt = 21.4279956;
	swprintf(loc, 1023, L"Skopje, Macedonia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.689511199999999;
	lngt = -40.3485697;
	swprintf(loc, 1023, L"Sobral, CearÂ , Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.60280789999999;
	lngt = 39.7341543;
	swprintf(loc, 1023, L"Sochi, Krasnodar Krai, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.6977082;
	lngt = 23.3218675;
	swprintf(loc, 1023, L"Sofia, Bulgaria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.6576658;
	lngt = 107.680727;
	swprintf(loc, 1023, L"Son My, Vietnam : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 1.3290526;
	lngt = 172.9790528;
	swprintf(loc, 1023, L"South Tarawa, Kiribati : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.90970040000001;
	lngt = -1.4043509;
	swprintf(loc, 1023, L"Southampton, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.5081323;
	lngt = 16.4401935;
	swprintf(loc, 1023, L"Split, Croatia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.2089572;
	lngt = -93.29229889999999;
	swprintf(loc, 1023, L"Springfield, Missouri, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.8940701;
	lngt = 79.90247789999999;
	swprintf(loc, 1023, L"Sri Jayawardenapura-Kotte, Sri Lanka : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.0836708;
	lngt = 74.79728249999999;
	swprintf(loc, 1023, L"Srinagar, Jammu and Kashmir, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.6270025;
	lngt = -90.19940419999999;
	swprintf(loc, 1023, L"St. Louis, Missouri, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -51.6977129;
	lngt = -57.85166269999999;
	swprintf(loc, 1023, L"Stanley, Falkland Islands, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 56.1165227;
	lngt = -3.9369029;
	swprintf(loc, 1023, L"Stirling, Scotland, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 63.46779719999999;
	lngt = 10.917596;
	swprintf(loc, 1023, L"Stjordal, Nord-Trondelag, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 59.32932349999999;
	lngt = 18.0685808;
	swprintf(loc, 1023, L"Stockholm, Stockholm County, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.5734053;
	lngt = 7.752111299999999;
	swprintf(loc, 1023, L"Strasbourg, Alsace, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -19.0195852;
	lngt = -65.2619615;
	swprintf(loc, 1023, L"Sucre, Bolivia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.522099;
	lngt = -80.9530353;
	swprintf(loc, 1023, L"Sudbury, Ontario, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.9668343;
	lngt = 32.5498069;
	swprintf(loc, 1023, L"Suez, Egypt : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.0015252;
	lngt = 41.0234153;
	swprintf(loc, 1023, L"Sukhumi, Abkhazia, Georgia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.906869;
	lngt = -1.383801;
	swprintf(loc, 1023, L"Sunderland, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 62.390811;
	lngt = 17.306927;
	swprintf(loc, 1023, L"Sundsvall, Vâ€žsternorrland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -7.2574719;
	lngt = 112.7520883;
	swprintf(loc, 1023, L"Surabaya, East Java, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.138238899999999;
	lngt = 99.3217483;
	swprintf(loc, 1023, L"Surat Thani, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.1702401;
	lngt = 72.83106070000001;
	swprintf(loc, 1023, L"Surat, Gujarat, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -18.1248086;
	lngt = 178.4500789;
	swprintf(loc, 1023, L"Suva, Fiji : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.62144;
	lngt = -3.943645999999999;
	swprintf(loc, 1023, L"Swansea, Wales, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -33.8688197;
	lngt = 151.2092955;
	swprintf(loc, 1023, L"Sydney, New South Wales, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.096239;
	lngt = 46.2738013;
	swprintf(loc, 1023, L"Tabriz, Iran : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.3613199;
	lngt = 124.7740793;
	swprintf(loc, 1023, L"Tagbilaran, Northern Samar, Philippines : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.1477358;
	lngt = 120.6736482;
	swprintf(loc, 1023, L"Taichung, Republic of China (Taiwan) : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.9998999;
	lngt = 120.2268758;
	swprintf(loc, 1023, L"Tainan, Republic of China (Taiwan) : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.0329694;
	lngt = 121.5654177;
	swprintf(loc, 1023, L"Taipei, Republic of China (Taiwan) : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -54.8019121;
	lngt = -68.3029511;
	swprintf(loc, 1023, L"Ushuaia, Tierra del Fuego, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.09073739999999;
	lngt = 5.1214201;
	swprintf(loc, 1023, L"Utrecht, Utrecht, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 69.9090465;
	lngt = 27.0285297;
	swprintf(loc, 1023, L"Utsjoki, Lapland, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.5551124;
	lngt = 139.8828072;
	swprintf(loc, 1023, L"Utsunomiya, Tochigi, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 63.09508899999999;
	lngt = 21.6164564;
	swprintf(loc, 1023, L"Vaasa, Ostrobothnia, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 70.07450559999999;
	lngt = 29.7481181;
	swprintf(loc, 1023, L"Vadso, Finnmark, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.1410303;
	lngt = 9.5209277;
	swprintf(loc, 1023, L"Vaduz, Liechtenstein : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -39.8173788;
	lngt = -73.24253329999999;
	swprintf(loc, 1023, L"Valdivia, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.4699075;
	lngt = -0.3762881;
	swprintf(loc, 1023, L"Valencia, Valencian Community, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.1579312;
	lngt = -67.9972104;
	swprintf(loc, 1023, L"Valencia, Carabobo, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 57.77708159999999;
	lngt = 26.0315223;
	swprintf(loc, 1023, L"Valga, Valga County, Estonia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.652251;
	lngt = -4.724532099999999;
	swprintf(loc, 1023, L"Valladolid, Castile and LeÂ¢n, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.8989085;
	lngt = 14.5145528;
	swprintf(loc, 1023, L"Valletta, Malta : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -33.047238;
	lngt = -71.61268849999999;
	swprintf(loc, 1023, L"ValparaÂ¡so, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 49.2827291;
	lngt = -123.1207375;
	swprintf(loc, 1023, L"Vancouver, British Columbia, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.29335239999999;
	lngt = 25.0377686;
	swprintf(loc, 1023, L"Vantaa, Uusimaa, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.9021788;
	lngt = 12.4536007;
	swprintf(loc, 1023, L"Vatican City,  Vatican City : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.4408474;
	lngt = 12.3155151;
	swprintf(loc, 1023, L"Venice, Veneto, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 19.173773;
	lngt = -96.1342241;
	swprintf(loc, 1023, L"Veracruz, Veracruz, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 67.55059249999999;
	lngt = 133.3993399;
	swprintf(loc, 1023, L"Verkhoyansk, Sakha Republic, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.4284207;
	lngt = -123.3656444;
	swprintf(loc, 1023, L"Victoria, British Columbia, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -4.619143;
	lngt = 55.4513149;
	swprintf(loc, 1023, L"Victoria, Seychelles : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.2081743;
	lngt = 16.3738189;
	swprintf(loc, 1023, L"Vienna, Vienna, Austria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.9757058;
	lngt = 102.6331035;
	swprintf(loc, 1023, L"Vientiane, Laos : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.24059889999999;
	lngt = -8.7207268;
	swprintf(loc, 1023, L"Vigo, Galicia, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.6871555;
	lngt = 25.2796514;
	swprintf(loc, 1023, L"Vilnius, Lithuania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.8529263;
	lngt = -75.97798499999999;
	swprintf(loc, 1023, L"Virginia Beach, Virginia, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.6868159;
	lngt = 83.2184815;
	swprintf(loc, 1023, L"Visakhapatnam, Andhra Pradesh, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 57.6348;
	lngt = 18.29484;
	swprintf(loc, 1023, L"Visby, Gotland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.8591656;
	lngt = -2.681791800000001;
	swprintf(loc, 1023, L"Vitoria-Gasteiz, Basque Country, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.2976178;
	lngt = -40.2957768;
	swprintf(loc, 1023, L"VitÂ¢ria, EspÂ¡rito Santo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.1737387;
	lngt = 132.0064506;
	swprintf(loc, 1023, L"Vladivostok, Primorsky Krai, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.708048;
	lngt = 44.5133034;
	swprintf(loc, 1023, L"Volgograd, Volgograd Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 59.21806649999999;
	lngt = 39.8978052;
	swprintf(loc, 1023, L"Vologda, Vologda Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.6754966;
	lngt = 39.2088823;
	swprintf(loc, 1023, L"Voronezh, Voronezh Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -43.81;
	lngt = -176.4572222;
	swprintf(loc, 1023, L"Waitangi, Chatham Islands, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.2305113;
	lngt = 135.1708083;
	swprintf(loc, 1023, L"Wakayama, Wakayama, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.4156641;
	lngt = 141.6730822;
	swprintf(loc, 1023, L"Wakkanai, Hokkaido, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.2296756;
	lngt = 21.0122287;
	swprintf(loc, 1023, L"Warsaw, Masovian Voivodship, Poland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.9071923;
	lngt = -77.03687069999999;
	swprintf(loc, 1023, L"Washington, District of Columbia, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -41.2864603;
	lngt = 174.776236;
	swprintf(loc, 1023, L"Wellington, Wellington Region, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.4399983;
	lngt = 151.8584892;
	swprintf(loc, 1023, L"Weno, Federated States of Micronesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.7211871;
	lngt = -135.0568449;
	swprintf(loc, 1023, L"Whitehorse, Yukon, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.68717609999999;
	lngt = -97.33005299999999;
	swprintf(loc, 1023, L"Wichita, Kansas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.1224221;
	lngt = -68.8824233;
	swprintf(loc, 1023, L"Willemstad, Curaâ€¡ao, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.2257255;
	lngt = -77.9447102;
	swprintf(loc, 1023, L"Wilmington, North Carolina, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.059771;
	lngt = -1.310142;
	swprintf(loc, 1023, L"Winchester, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -22.5608807;
	lngt = 17.0657549;
	swprintf(loc, 1023, L"Windhoek, Namibia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.3149367;
	lngt = -83.03636329999999;
	swprintf(loc, 1023, L"Windsor, Ontario, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 49.8997541;
	lngt = -97.13749369999999;
	swprintf(loc, 1023, L"Winnipeg, Manitoba, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -34.4278121;
	lngt = 150.8930607;
	swprintf(loc, 1023, L"Wollongong, New South Wales, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.1538529;
	lngt = 127.4460001;
	swprintf(loc, 1023, L"Wonsan, Kangwon, North Korea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.6635375;
	lngt = -27.2293969;
	swprintf(loc, 1023, L"Angra do Herosmo, Azores, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.6635375;
	lngt = -27.2293969;
	swprintf(loc, 1023, L"Angra do HeroAsmo, Azores, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.2637399;
	lngt = -57.57592599999999;
	swprintf(loc, 1023, L"Asuncin, Paraguay : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.2637399;
	lngt = -57.57592599999999;
	swprintf(loc, 1023, L"AsunciAn, Paraguay : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -38.7183177;
	lngt = -62.2663478;
	swprintf(loc, 1023, L"Baha Blanca, Buenos Aires Province, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -38.7183177;
	lngt = -62.2663478;
	swprintf(loc, 1023, L"BahAa Blanca, Buenos Aires Province, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.9076711;
	lngt = 116.4310998;
	swprintf(loc, 1023, L"Beijing, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.8937913;
	lngt = 35.5017767;
	swprintf(loc, 1023, L"Beirut, Lebanon : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -1.4557549;
	lngt = -48.4901799;
	swprintf(loc, 1023, L"Bel,m, Par, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.59728500000001;
	lngt = -5.93012;
	swprintf(loc, 1023, L"Belfast, Northern Ireland, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.786568;
	lngt = 20.4489216;
	swprintf(loc, 1023, L"Belgrade, Serbia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.5045661;
	lngt = -88.1962133;
	swprintf(loc, 1023, L"Belize City, Belize : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.2510114;
	lngt = -88.7590201;
	swprintf(loc, 1023, L"Belmopan, Belize : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -19.9166813;
	lngt = -43.9344931;
	swprintf(loc, 1023, L"Belo Horizonte, Minas Gerais, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 71.54555599999999;
	lngt = 52.32027799999999;
	swprintf(loc, 1023, L"Belushya Guba, Arkhangelsk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.0947711;
	lngt = 20.1879106;
	swprintf(loc, 1023, L"Benghazi, Libya : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.334986;
	lngt = 5.6037465;
	swprintf(loc, 1023, L"Benin City, Nigeria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.39126279999999;
	lngt = 5.3220544;
	swprintf(loc, 1023, L"Bergen, Hordaland, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.52000659999999;
	lngt = 13.404954;
	swprintf(loc, 1023, L"Berlin, Berlin, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.9479739;
	lngt = 7.4474468;
	swprintf(loc, 1023, L"Bern,  Switzerland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -32.849876;
	lngt = 27.4409557;
	swprintf(loc, 1023, L"Bhisho, Eastern Cape, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.2630126;
	lngt = -2.9349852;
	swprintf(loc, 1023, L"Bilbao, Basque Country, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.8954706;
	lngt = 14.4665072;
	swprintf(loc, 1023, L"Birkirkara, Malta : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.5206608;
	lngt = -86.80248999999999;
	swprintf(loc, 1023, L"Birmingham, Alabama, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.48624299999999;
	lngt = -1.890401;
	swprintf(loc, 1023, L"Birmingham, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.8746212;
	lngt = 74.5697617;
	swprintf(loc, 1023, L"Bishkek, Kyrgyzstan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.8083268;
	lngt = -100.7837392;
	swprintf(loc, 1023, L"Bismarck,  North Dakota, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 11.8816553;
	lngt = -15.6177942;
	swprintf(loc, 1023, L"Bissau, Guinea-Bissau : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -15.7666707;
	lngt = 35.0167866;
	swprintf(loc, 1023, L"Blantyre, Southern Region, Malawi : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -29.085214;
	lngt = 26.1595761;
	swprintf(loc, 1023, L"Bloemfontein, Free State, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 2.8235098;
	lngt = -60.6758331;
	swprintf(loc, 1023, L"Boa Vista, Roraima, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 11.1649219;
	lngt = -4.3051542;
	swprintf(loc, 1023, L"Bobo-Dioulasso, Burkina Faso : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.8251188;
	lngt = 21.6887028;
	swprintf(loc, 1023, L"Boden, Norrbotten, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 67.28035559999999;
	lngt = 14.404916;
	swprintf(loc, 1023, L"Bodo, Nordland, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -6.597146899999999;
	lngt = 106.8060388;
	swprintf(loc, 1023, L"Bogor, West Java, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.710988599999999;
	lngt = -74.072092;
	swprintf(loc, 1023, L"Bogot, Colombia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.6187102;
	lngt = -116.2146068;
	swprintf(loc, 1023, L"Boise, Idaho, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.494887;
	lngt = 11.3426163;
	swprintf(loc, 1023, L"Bologna, Emilia-Romagna, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.837789;
	lngt = -0.57918;
	swprintf(loc, 1023, L"Bordeaux, Aquitaine, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.3600825;
	lngt = -71.0588801;
	swprintf(loc, 1023, L"Boston, Massachusetts, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.0149856;
	lngt = -105.2705456;
	swprintf(loc, 1023, L"Boulder, Colorado, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.795984;
	lngt = -1.759398;
	swprintf(loc, 1023, L"Bradford, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.5454486;
	lngt = -8.426506999999999;
	swprintf(loc, 1023, L"Braga, Braga District, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -15.7942287;
	lngt = -47.8821658;
	swprintf(loc, 1023, L"Braslia, Federal District Brazil Distrito Federal, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.1485965;
	lngt = 17.1077477;
	swprintf(loc, 1023, L"Bratislava, Slovakia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 56.17376609999999;
	lngt = 101.6038976;
	swprintf(loc, 1023, L"Bratsk, Irkutsk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -4.2633597;
	lngt = 15.2428853;
	swprintf(loc, 1023, L"Brazzaville, Republic of the Congo : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.07929619999999;
	lngt = 8.8016937;
	swprintf(loc, 1023, L"Bremen, Bremen, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.1132219;
	lngt = -59.59880889999999;
	swprintf(loc, 1023, L"Bridgetown, Barbados : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.82253000000001;
	lngt = -0.137163;
	swprintf(loc, 1023, L"Brighton and Hove, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.2747943;
	lngt = -16.6409198;
	swprintf(loc, 1023, L"Brikama, Gambia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -27.4697707;
	lngt = 153.0251235;
	swprintf(loc, 1023, L"Brisbane, Queensland, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.454513;
	lngt = -2.58791;
	swprintf(loc, 1023, L"Bristol, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.9017472;
	lngt = -97.4974838;
	swprintf(loc, 1023, L"Brownsville, Texas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.8503396;
	lngt = 4.3517103;
	swprintf(loc, 1023, L"Brussels, Brussels, Belgium : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.4267674;
	lngt = 26.1025384;
	swprintf(loc, 1023, L"Bucharest, Romania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.497912;
	lngt = 19.040235;
	swprintf(loc, 1023, L"Budapest, Hungary : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -34.6036844;
	lngt = -58.3815591;
	swprintf(loc, 1023, L"Buenos Aires, , Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.88644679999999;
	lngt = -78.8783689;
	swprintf(loc, 1023, L"Buffalo, New York, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.361378;
	lngt = 29.3598782;
	swprintf(loc, 1023, L"Bujumbura, Burundi : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.1325066;
	lngt = 28.626479;
	swprintf(loc, 1023, L"Bulawayo, Bulawayo, Zimbabwe : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.1885281;
	lngt = 29.0609636;
	swprintf(loc, 1023, L"Bursa, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.1795543;
	lngt = 129.0756416;
	swprintf(loc, 1023, L"Busan, South Korea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -31.42008329999999;
	lngt = -64.1887761;
	swprintf(loc, 1023, L"Crdoba, Crdoba, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.8890971;
	lngt = -72.4966896;
	swprintf(loc, 1023, L"Ccuta, Colombia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.8905327;
	lngt = -109.9167371;
	swprintf(loc, 1023, L"Cabo San Lucas, Baja California Sur, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.2238411;
	lngt = 9.1216613;
	swprintf(loc, 1023, L"Cagliari, Sardinia, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -16.9185514;
	lngt = 145.7780548;
	swprintf(loc, 1023, L"Cairns, Queensland, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.0444196;
	lngt = 31.2357116;
	swprintf(loc, 1023, L"Cairo, Egypt : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -22.4543923;
	lngt = -68.9293819;
	swprintf(loc, 1023, L"Calama, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.0486151;
	lngt = -114.0708459;
	swprintf(loc, 1023, L"Calgary, Alberta, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.205337;
	lngt = 0.121817;
	swprintf(loc, 1023, L"Cambridge, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -7.2290752;
	lngt = -35.8808337;
	swprintf(loc, 1023, L"Campina Grande, Paraba, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -22.9099384;
	lngt = -47.0626332;
	swprintf(loc, 1023, L"Campinas, Sao Paulo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.4697105;
	lngt = -54.6201211;
	swprintf(loc, 1023, L"Campo Grande, Mato Grosso do Sul, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -35.2809368;
	lngt = 149.1300092;
	swprintf(loc, 1023, L"Canberra, Australian Capital Territory, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.161908;
	lngt = -86.85152789999999;
	swprintf(loc, 1023, L"Cancn, Quintana Roo, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.552847;
	lngt = 7.017369;
	swprintf(loc, 1023, L"Cannes, Provence-Alpes-Cte dAzur, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -33.9248685;
	lngt = 18.4240553;
	swprintf(loc, 1023, L"Cape Town, Western Cape, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.4805937;
	lngt = -66.90360629999999;
	swprintf(loc, 1023, L"Caracas, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.48158100000001;
	lngt = -3.17909;
	swprintf(loc, 1023, L"Cardiff, Wales, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.3910485;
	lngt = -75.47942569999999;
	swprintf(loc, 1023, L"Cartagena, Colombia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.284963899999999;
	lngt = -35.9701874;
	swprintf(loc, 1023, L"Caruaru, Pernambuco, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.5731104;
	lngt = -7.589843399999999;
	swprintf(loc, 1023, L"Casablanca, Morocco : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.0101094;
	lngt = -60.98746869999999;
	swprintf(loc, 1023, L"Castries, Saint Lucia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.5078772;
	lngt = 15.0830304;
	swprintf(loc, 1023, L"Catania, Sicily, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 5.1660547;
	lngt = -52.6441492;
	swprintf(loc, 1023, L"Cayenne, French Guiana, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.3156992;
	lngt = 123.8854366;
	swprintf(loc, 1023, L"Cebu City, Cebu, Philippines : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.5168387;
	lngt = -61.4114482;
	swprintf(loc, 1023, L"Chaguanas, Trinidad and Tobago : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.7333148;
	lngt = 76.7794179;
	swprintf(loc, 1023, L"Chandigarh, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.83738770000001;
	lngt = 125.1908429;
	swprintf(loc, 1023, L"Changchun, Jilin, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.6149311;
	lngt = 104.0677838;
	swprintf(loc, 1023, L"Chengdu, Sichuan, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.0587471;
	lngt = 80.254435;
	swprintf(loc, 1023, L"Chennai Madras, Tamil Nadu, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.1399814;
	lngt = -104.8202462;
	swprintf(loc, 1023, L"Cheyenne, Wyoming, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.7060641;
	lngt = 98.9817163;
	swprintf(loc, 1023, L"Chiang Mai, Chiang Mai Province, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 19.9104798;
	lngt = 99.840576;
	swprintf(loc, 1023, L"Chiang Rai, Chiang Rai Province, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.6072668;
	lngt = 140.1062907;
	swprintf(loc, 1023, L"Chiba, Chiba, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.8781136;
	lngt = -87.6297982;
	swprintf(loc, 1023, L"Chicago, Illinois, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 28.6329957;
	lngt = -106.0691004;
	swprintf(loc, 1023, L"Chihuahua, Chihuahua, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.6234721;
	lngt = -87.1273253;
	swprintf(loc, 1023, L"Chinandega, Nicaragua : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.0104529;
	lngt = 28.8638103;
	swprintf(loc, 1023, L"Chisinau, Moldova : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.3475365;
	lngt = 91.8123324;
	swprintf(loc, 1023, L"Chittagong, Bangladesh : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.7669671;
	lngt = 129.723402;
	swprintf(loc, 1023, L"Chongjin, North Hamgyong, North Korea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.56301;
	lngt = 106.551556;
	swprintf(loc, 1023, L"Chongqing, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -43.5320544;
	lngt = 172.6362254;
	swprintf(loc, 1023, L"Christchurch, Canterbury, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -33.6871306;
	lngt = -53.4599203;
	swprintf(loc, 1023, L"Chu, Rio Grande do Sul, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.1031182;
	lngt = -84.5120196;
	swprintf(loc, 1023, L"Cincinnati, Ohio, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 8.088279100000001;
	lngt = -63.5535552;
	swprintf(loc, 1023, L"Ciudad Bolvar, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.5085286;
	lngt = -54.6753231;
	swprintf(loc, 1023, L"Ciudad del Este, Paraguay : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.6903638;
	lngt = -106.4245478;
	swprintf(loc, 1023, L"Ciudad Jurez, Chihuahua, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.49932;
	lngt = -81.6943605;
	swprintf(loc, 1023, L"Cleveland, Ohio, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.7712101;
	lngt = 23.6236353;
	swprintf(loc, 1023, L"Cluj-Napoca, Cluj County, Romania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.4674584;
	lngt = -71.13891009999999;
	swprintf(loc, 1023, L"Cockburn Town, Turks and Caicos Islands, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -45.5712254;
	lngt = -72.068265;
	swprintf(loc, 1023, L"Coihaique, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.937531;
	lngt = 6.9602786;
	swprintf(loc, 1023, L"Cologne, North Rhine-Westphalia, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.9270786;
	lngt = 79.861243;
	swprintf(loc, 1023, L"Colombo, Sri Lanka : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.0007104;
	lngt = -81.0348144;
	swprintf(loc, 1023, L"Columbia, South Carolina, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.9611755;
	lngt = -82.99879419999999;
	swprintf(loc, 1023, L"Columbus, Ohio, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -45.8656149;
	lngt = -67.4822429;
	swprintf(loc, 1023, L"Comodoro Rivadavia, Chubut, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.641185499999999;
	lngt = -13.5784012;
	swprintf(loc, 1023, L"Conakry, Guinea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -36.8201352;
	lngt = -73.0443904;
	swprintf(loc, 1023, L"Concepcin, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.2081366;
	lngt = -71.53757179999999;
	swprintf(loc, 1023, L"Concord, New Hampshire, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.5708354;
	lngt = -97.6625396;
	swprintf(loc, 1023, L"Concordia,  : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.6760968;
	lngt = 12.5683371;
	swprintf(loc, 1023, L"Copenhagen, Denmark : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -27.3665763;
	lngt = -70.33215869999999;
	swprintf(loc, 1023, L"Copiap, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.8968917;
	lngt = -8.4863157;
	swprintf(loc, 1023, L"Cork, Munster, Ireland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.8005828;
	lngt = -97.39638099999999;
	swprintf(loc, 1023, L"Corpus Christi, Texas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -27.4692131;
	lngt = -58.8306349;
	swprintf(loc, 1023, L"Corrientes, Corrientes, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.3702928;
	lngt = 2.3912362;
	swprintf(loc, 1023, L"Cotonou, Benin : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.406822;
	lngt = -1.519693;
	swprintf(loc, 1023, L"Coventry, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.3301785;
	lngt = 23.7948808;
	swprintf(loc, 1023, L"Craiova, Romania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -15.6014109;
	lngt = -56.0978917;
	swprintf(loc, 1023, L"Cuiab, Mato Grosso, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.8090649;
	lngt = -107.3940117;
	swprintf(loc, 1023, L"Culiacn, Sinaloa, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.4289541;
	lngt = -49.267137;
	swprintf(loc, 1023, L"Curitiba, Paran, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -13.53195;
	lngt = -71.96746259999999;
	swprintf(loc, 1023, L"Cusco, Peru : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.2277411;
	lngt = 6.7734556;
	swprintf(loc, 1023, L"Dsseldorf, North Rhine-Westphalia, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 16.0544068;
	lngt = 108.2021667;
	swprintf(loc, 1023, L"Da Nang, Vietnam : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.8714354;
	lngt = 128.601445;
	swprintf(loc, 1023, L"Daegu, South Korea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.7645042;
	lngt = -17.3660286;
	swprintf(loc, 1023, L"Dakar, Senegal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.8805876;
	lngt = 121.6769218;
	swprintf(loc, 1023, L"Dalian, Liaoning, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 23.020673;
	lngt = 113.7518;
	swprintf(loc, 1023, L"Dongguan, Guangdong, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.0510564;
	lngt = 9.767868699999999;
	swprintf(loc, 1023, L"Douala, Cameroon : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.1523372;
	lngt = -4.4861228;
	swprintf(loc, 1023, L"Douglas, Isle of Man, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.158168;
	lngt = -75.5243682;
	swprintf(loc, 1023, L"Dover, Delaware, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.0504088;
	lngt = 13.7372621;
	swprintf(loc, 1023, L"Dresden, Saxony, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.2048493;
	lngt = 55.2707828;
	swprintf(loc, 1023, L"Dubai, Dubai, United Arab Emirates : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.3498053;
	lngt = -6.2603097;
	swprintf(loc, 1023, L"Dublin, Leinster, Ireland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.78667189999999;
	lngt = -92.10048519999999;
	swprintf(loc, 1023, L"Duluth, Minnesota, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -45.8787605;
	lngt = 170.5027976;
	swprintf(loc, 1023, L"Dunedin, Otago, New Zealand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.0277202;
	lngt = -104.6531759;
	swprintf(loc, 1023, L"Durango, Durango, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -29.85868039999999;
	lngt = 31.0218404;
	swprintf(loc, 1023, L"Durban, KwaZulu-Natal, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.5597722;
	lngt = 68.7870384;
	swprintf(loc, 1023, L"Dushanbe, Tajikistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -37.0680421;
	lngt = -12.3113147;
	swprintf(loc, 1023, L"Edinburgh of the Seven Seas, Tristan da Cunha, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.953252;
	lngt = -3.188267;
	swprintf(loc, 1023, L"Edinburgh, Scotland, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.544389;
	lngt = -113.4909267;
	swprintf(loc, 1023, L"Edmonton, Alberta, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.557669;
	lngt = 34.951925;
	swprintf(loc, 1023, L"Eilat, Israel : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.792;
	lngt = -115.5630514;
	swprintf(loc, 1023, L"El Centro, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.7618778;
	lngt = -106.4850217;
	swprintf(loc, 1023, L"El Paso, Texas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.2215372;
	lngt = 6.8936619;
	swprintf(loc, 1023, L"Enschede, Overijssel, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.8667427;
	lngt = -116.5963713;
	swprintf(loc, 1023, L"Ensenada, Baja California, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 0.0511839;
	lngt = 32.463708;
	swprintf(loc, 1023, L"Entebbe, Uganda : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.4583661;
	lngt = 7.5463885;
	swprintf(loc, 1023, L"Enugu, Nigeria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.98476789999999;
	lngt = 11.0298799;
	swprintf(loc, 1023, L"Erfurt, Thuringia, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.476466;
	lngt = 8.459405;
	swprintf(loc, 1023, L"Esbjerg, Denmark : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.7667061;
	lngt = 30.52563109999999;
	swprintf(loc, 1023, L"Eskisehir, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -54.7967838;
	lngt = -68.29333799999999;
	swprintf(loc, 1023, L"Esperanza, Argentine Antarctica, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.2054911;
	lngt = 24.6559001;
	swprintf(loc, 1023, L"Espoo, Uusimaa, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.8020712;
	lngt = -124.1636729;
	swprintf(loc, 1023, L"Eureka, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 79.9888928;
	lngt = -85.94076969999999;
	swprintf(loc, 1023, L"Eureka, Nunavut, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.718412;
	lngt = -3.533899;
	swprintf(loc, 1023, L"Exeter, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.8377778;
	lngt = -147.7163889;
	swprintf(loc, 1023, L"Fairbanks, Alaska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.4187142;
	lngt = 73.07910729999999;
	swprintf(loc, 1023, L"Faisalabad, Punjab, Pakistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.8576305;
	lngt = -32.4297369;
	swprintf(loc, 1023, L"Fernando de Noronha, Pernambuco, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.7937431;
	lngt = 9.4469964;
	swprintf(loc, 1023, L"Flensburg, Schleswig-Holstein, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.7695604;
	lngt = 11.2558136;
	swprintf(loc, 1023, L"Florence, Tuscany, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.4474713;
	lngt = -31.193945;
	swprintf(loc, 1023, L"Flores Island, Azores, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -27.5953778;
	lngt = -48.5480499;
	swprintf(loc, 1023, L"Florianpolis, Santa Catarina, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.9226887;
	lngt = 10.7593003;
	swprintf(loc, 1023, L"Follonica, Tuscany, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.6160647;
	lngt = -61.0587804;
	swprintf(loc, 1023, L"Fort-de-France, Martinique, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 56.72637959999999;
	lngt = -111.3803407;
	swprintf(loc, 1023, L"Fort McMurray, Alberta, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.079273;
	lngt = -85.1393513;
	swprintf(loc, 1023, L"Fort Wayne, Indiana, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.7318616;
	lngt = -38.5266704;
	swprintf(loc, 1023, L"Fortaleza, Cear, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -21.1661005;
	lngt = 27.5143603;
	swprintf(loc, 1023, L"Francistown, Botswana : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.1109221;
	lngt = 8.6821267;
	swprintf(loc, 1023, L"Frankfurt am Main, Hesse, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.9635895;
	lngt = -66.6431151;
	swprintf(loc, 1023, L"Fredericton, New Brunswick, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 8.465676500000001;
	lngt = -13.2317225;
	swprintf(loc, 1023, L"Freetown, Sierra Leone : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.0640669;
	lngt = 136.2194938;
	swprintf(loc, 1023, L"Fukui, Fukui, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.5903547;
	lngt = 130.4017155;
	swprintf(loc, 1023, L"Fukuoka, Fukuoka, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.7608337;
	lngt = 140.4747282;
	swprintf(loc, 1023, L"Fukushima, Fukushima, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.5200657;
	lngt = 179.198128;
	swprintf(loc, 1023, L"Funafuti, Tuvalu : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.6669328;
	lngt = -16.9240554;
	swprintf(loc, 1023, L"Funchal, Madeira, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 67.1379;
	lngt = 20.6593618;
	swprintf(loc, 1023, L"G,llivare, Norrbotten, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -24.6282079;
	lngt = 25.9231471;
	swprintf(loc, 1023, L"Gaborone, Botswana : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.3389356;
	lngt = 88.6065035;
	swprintf(loc, 1023, L"Gangtok, Sikkim, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.882855100000002;
	lngt = -36.4968966;
	swprintf(loc, 1023, L"Garanhuns, Pernambuco, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.5016951;
	lngt = 34.4668445;
	swprintf(loc, 1023, L"Gaza, Gaza Strip, Palestine : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.065953;
	lngt = 37.37811;
	swprintf(loc, 1023, L"Gaziantep, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.35202520000001;
	lngt = 18.6466384;
	swprintf(loc, 1023, L"Gdansk, Pomeranian Voivodeship, Poland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.5188898;
	lngt = 18.5305409;
	swprintf(loc, 1023, L"Gdynia, Pomeranian Voivodeship, Poland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -38.1499181;
	lngt = 144.3617186;
	swprintf(loc, 1023, L"Geelong, Victoria, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.2043907;
	lngt = 6.1431577;
	swprintf(loc, 1023, L"Geneva,  Switzerland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.4056499;
	lngt = 8.946256;
	swprintf(loc, 1023, L"Genoa, Liguria, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 19.2869323;
	lngt = -81.3674389;
	swprintf(loc, 1023, L"George Town, Cayman Islands, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 5.4163033;
	lngt = 100.3233734;
	swprintf(loc, 1023, L"George Town, Penang, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.8012793;
	lngt = -58.1551255;
	swprintf(loc, 1023, L"Georgetown, Guyana : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.0543422;
	lngt = 3.7174243;
	swprintf(loc, 1023, L"Ghent, Flanders, Belgium : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.3864739;
	lngt = -1.4715647;
	swprintf(loc, 1023, L"Gibraltar, Gibraltar, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.4232984;
	lngt = 136.7606537;
	swprintf(loc, 1023, L"Gifu, Gifu, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.5322015;
	lngt = -5.6611195;
	swprintf(loc, 1023, L"Gijn, Principado de Asturias, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.864237;
	lngt = -4.251806;
	swprintf(loc, 1023, L"Glasgow, Scotland, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.8642449;
	lngt = -2.238156;
	swprintf(loc, 1023, L"Gloucester, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -16.6868912;
	lngt = -49.2647943;
	swprintf(loc, 1023, L"Goinia, Gois, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -28.016667;
	lngt = 153.4;
	swprintf(loc, 1023, L"Gold Coast, Queensland, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.4411761;
	lngt = 30.9878462;
	swprintf(loc, 1023, L"Gomel, Gomel Voblast, Belarus : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -18.8549317;
	lngt = -41.95592329999999;
	swprintf(loc, 1023, L"Governador Valadares, Minas Gerais, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.1699396;
	lngt = -118.7986152;
	swprintf(loc, 1023, L"Grande Prairie, Alberta, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.070714;
	lngt = 15.439504;
	swprintf(loc, 1023, L"Graz, Styria, Austria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 76.4189856;
	lngt = -82.9016082;
	swprintf(loc, 1023, L"Grise Fiord, Nunavut, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.2193835;
	lngt = 6.566501799999999;
	swprintf(loc, 1023, L"Groningen, Groningen, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -54.281149;
	lngt = -36.5087385;
	swprintf(loc, 1023, L"Grytviken, South Georgia and the South Sandwich Islands, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.6596988;
	lngt = -103.3496092;
	swprintf(loc, 1023, L"Guadalajara, Jalisco, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 23.1156622;
	lngt = 113.319882;
	swprintf(loc, 1023, L"Guangzhou, Guangdong, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.6349149;
	lngt = -90.50688239999999;
	swprintf(loc, 1023, L"Guatemala City, Guatemala : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -2.1709979;
	lngt = -79.9223592;
	swprintf(loc, 1023, L"Guayaquil, Ecuador : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.1445169;
	lngt = 91.7362365;
	swprintf(loc, 1023, L"Guwahati, Assam, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -19.468531;
	lngt = 29.8120795;
	swprintf(loc, 1023, L"Gweru, Midlands, Zimbabwe : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.3873878;
	lngt = 4.6462194;
	swprintf(loc, 1023, L"Haarlem, North Holland, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.8449115;
	lngt = 106.6880841;
	swprintf(loc, 1023, L"Hai Phong, Vietnam : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.044002;
	lngt = 110.198293;
	swprintf(loc, 1023, L"Haikou, Hainan, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.625657;
	lngt = 114.538962;
	swprintf(loc, 1023, L"Handan, Hebei, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -27.15;
	lngt = -109.4333;
	swprintf(loc, 1023, L"Hanga Roa, Easter Island, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.2899847;
	lngt = 120.1628544;
	swprintf(loc, 1023, L"Hangzhou, Zhejiang, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.3758916;
	lngt = 9.732010400000002;
	swprintf(loc, 1023, L"Hannover, Lower Saxony, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.0277644;
	lngt = 105.8341598;
	swprintf(loc, 1023, L"Hanoi, Vietnam : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.8417085;
	lngt = 24.1276643;
	swprintf(loc, 1023, L"Haparanda, Norrbotten, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -17.8251657;
	lngt = 31.03351;
	swprintf(loc, 1023, L"Harare, Harare, Zimbabwe : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.80377499999999;
	lngt = 126.534967;
	swprintf(loc, 1023, L"Harbin, Heilongjiang, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.2783151;
	lngt = 114.174695;
	swprintf(loc, 1023, L"Hong Kong, Hong Kong, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 70.9822909;
	lngt = 25.9702074;
	swprintf(loc, 1023, L"Honningsvg, Finnmark, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 70.9822909;
	lngt = 25.9702074;
	swprintf(loc, 1023, L"Honningsvg, Finnmark, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -14.7935051;
	lngt = -39.0463797;
	swprintf(loc, 1023, L"Ilh,us, Bahia, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -14.7935051;
	lngt = -39.0463797;
	swprintf(loc, 1023, L"Ilhsus, Bahia, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 66.0611061;
	lngt = -23.1888599;
	swprintf(loc, 1023, L"Isafjrdur, Westfjords, Iceland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 66.0611061;
	lngt = -23.1888599;
	swprintf(loc, 1023, L"Isafjrdur, Westfjords, Iceland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.651216;
	lngt = 117.12;
	swprintf(loc, 1023, L"Jinan, Shandong, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -7.119495799999999;
	lngt = -34.8450118;
	swprintf(loc, 1023, L"Joao Pessoa, Paraba, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -26.2041028;
	lngt = 28.0473051;
	swprintf(loc, 1023, L"Johannesburg, Gauteng, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 1.492659;
	lngt = 103.7413591;
	swprintf(loc, 1023, L"Johor Bahru, Johor, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -7.229036499999999;
	lngt = -39.3124461;
	swprintf(loc, 1023, L"Juazeiro do Norte, Cear, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.859363;
	lngt = 31.57125;
	swprintf(loc, 1023, L"Juba, South Sudan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -21.7624237;
	lngt = -43.3433999;
	swprintf(loc, 1023, L"Juiz de Fora, Minas Gerais, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 58.3019444;
	lngt = -134.4197222;
	swprintf(loc, 1023, L"Juneau, Alaska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 62.5666743;
	lngt = 25.5549445;
	swprintf(loc, 1023, L"Jyv,skyl,, Central Finland, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.5553494;
	lngt = 69.207486;
	swprintf(loc, 1023, L"Kabul, Afghanistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.9381943;
	lngt = 126.5877948;
	swprintf(loc, 1023, L"Kaesong, North Hwanghae, North Korea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.5965535;
	lngt = 130.5571158;
	swprintf(loc, 1023, L"Kagoshima, Kagoshima, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.7104264;
	lngt = 20.4522144;
	swprintf(loc, 1023, L"Kaliningrad, Kaliningrad Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.674522;
	lngt = -120.3272674;
	swprintf(loc, 1023, L"Kamloops, British Columbia, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 0.3475964;
	lngt = 32.5825197;
	swprintf(loc, 1023, L"Kampala, Uganda : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.56132540000001;
	lngt = 136.6562051;
	swprintf(loc, 1023, L"Kanazawa, Ishikawa, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.628871;
	lngt = 65.7371749;
	swprintf(loc, 1023, L"Kandahar, Afghanistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.2905715;
	lngt = 80.6337262;
	swprintf(loc, 1023, L"Kandy, Sri Lanka : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.0021794;
	lngt = 8.591956099999999;
	swprintf(loc, 1023, L"Kano, Nigeria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.449923;
	lngt = 80.33187359999999;
	swprintf(loc, 1023, L"Kanpur, Uttar Pradesh, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.0997265;
	lngt = -94.5785667;
	swprintf(loc, 1023, L"Kansas City, Missouri, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.6350591;
	lngt = 120.3355193;
	swprintf(loc, 1023, L"Kaohsiung, Republic of China Taiwan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.8614622;
	lngt = 67.0099388;
	swprintf(loc, 1023, L"Karachi, Sindh, Pakistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.6068464;
	lngt = 44.0103922;
	swprintf(loc, 1023, L"Karbala, Iraq : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.7172453;
	lngt = 85.3239605;
	swprintf(loc, 1023, L"Kathmandu,  Nepal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.5309058;
	lngt = 139.7030511;
	swprintf(loc, 1023, L"Kawasaki, Kanagawa, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.8304307;
	lngt = 49.06608060000001;
	swprintf(loc, 1023, L"Kazan, Tatarstan, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 49.8879519;
	lngt = -119.4960106;
	swprintf(loc, 1023, L"Kelowna, British Columbia, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.73556789999999;
	lngt = 24.5657427;
	swprintf(loc, 1023, L"Kemi, Lapland, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 66.7136282;
	lngt = 27.4292062;
	swprintf(loc, 1023, L"Kemij,rvi, Lapland, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.5550593;
	lngt = -81.7799871;
	swprintf(loc, 1023, L"Key West, Florida, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 49.9935;
	lngt = 36.230383;
	swprintf(loc, 1023, L"Kharkiv, Kharkiv Oblast, Ukraine : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 15.5006544;
	lngt = 32.5598994;
	swprintf(loc, 1023, L"Khartoum, Sudan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 16.4321938;
	lngt = 102.8236214;
	swprintf(loc, 1023, L"Khon Kaen, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.3232927;
	lngt = 10.1227652;
	swprintf(loc, 1023, L"Kiel, Schleswig-Holstein, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.1381207;
	lngt = 30.7373521;
	swprintf(loc, 1023, L"Kiev, Kiev Oblast, Ukraine : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -1.9705786;
	lngt = 30.1044288;
	swprintf(loc, 1023, L"Kigali, Rwanda : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -28.7282384;
	lngt = 24.7499112;
	swprintf(loc, 1023, L"Kimberley, Northern Cape, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.0178743;
	lngt = -76.8099041;
	swprintf(loc, 1023, L"Kingston, Jamaica : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -29.0563937;
	lngt = 167.959588;
	swprintf(loc, 1023, L"Kingston, Norfolk Island, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.1600249;
	lngt = -61.2248157;
	swprintf(loc, 1023, L"Kingstown, Saint Vincent and the Grenadines : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -4.4419311;
	lngt = 15.2662931;
	swprintf(loc, 1023, L"Kinshasa, Democratic Republic of the Congo : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 69.7269192;
	lngt = 30.0450432;
	swprintf(loc, 1023, L"Kirkenes, Finnmark, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.4655761;
	lngt = 44.38039209999999;
	swprintf(loc, 1023, L"Kirkuk, Iraq : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 67.8557995;
	lngt = 20.2252821;
	swprintf(loc, 1023, L"Kiruna, Norrbotten, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -0.3560455;
	lngt = 42.5460573;
	swprintf(loc, 1023, L"Kismayo, Somalia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.9606384;
	lngt = -83.9207392;
	swprintf(loc, 1023, L"Knoxville, Tennessee, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.690083;
	lngt = 135.1955112;
	swprintf(loc, 1023, L"Kobe, Hyogo, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.9312328;
	lngt = 76.26730409999999;
	swprintf(loc, 1023, L"Kochi, Kerala, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.5595867;
	lngt = 133.5292788;
	swprintf(loc, 1023, L"Kochi, Kochi, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.66228;
	lngt = 138.5682015;
	swprintf(loc, 1023, L"Kofu, Yamanashi, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.5402602;
	lngt = 88.38219889999999;
	swprintf(loc, 1023, L"Kolkata Calcutta, West Bengal, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.8746429;
	lngt = 32.4931554;
	swprintf(loc, 1023, L"Konya, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.3419444;
	lngt = 134.4791667;
	swprintf(loc, 1023, L"Koror, Palau : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.1167855;
	lngt = 102.2776838;
	swprintf(loc, 1023, L"Kota Bharu, Kelantan, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 5.980408;
	lngt = 116.0734568;
	swprintf(loc, 1023, L"Kota Kinabalu, Sabah, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.8662046;
	lngt = -7.5599321;
	swprintf(loc, 1023, L"Koulikoro, Mali : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.03926740000001;
	lngt = 38.987221;
	swprintf(loc, 1023, L"Krasnodar, Krasnodar Krai, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 56.01528339999999;
	lngt = 92.8932476;
	swprintf(loc, 1023, L"Krasnoyarsk, Krasnoyarsk Krai, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 58.15991189999999;
	lngt = 8.0182064;
	swprintf(loc, 1023, L"Kristiansand, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 3.1569486;
	lngt = 101.712303;
	swprintf(loc, 1023, L"Kuala Lumpur, Federal Territory Malaysia Federal Territory, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 1.6076812;
	lngt = 110.3785438;
	swprintf(loc, 1023, L"Kuching, Sarawak, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.3087385;
	lngt = 79.63898209999999;
	swprintf(loc, 1023, L"Kulpahar, Uttar Pradesh, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.8031004;
	lngt = 130.7078911;
	swprintf(loc, 1023, L"Kumamoto, Kumamoto, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.6666004;
	lngt = -1.6162709;
	swprintf(loc, 1023, L"Kumasi, Ghana : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 24.880095;
	lngt = 102.832892;
	swprintf(loc, 1023, L"Kunming, Yunnan, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 62.89796999999999;
	lngt = 27.6781725;
	swprintf(loc, 1023, L"Kuopio, Northern Savonia, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.9848542;
	lngt = 144.3813556;
	swprintf(loc, 1023, L"Kushiro, Hokkaido, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.9645876;
	lngt = 29.1886652;
	swprintf(loc, 1023, L"Kuusamo, Northern Ostrobothnia, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.375859;
	lngt = 47.9774052;
	swprintf(loc, 1023, L"Kuwait City, Kuwait : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -16.489689;
	lngt = -68.11929359999999;
	swprintf(loc, 1023, L"La Paz, Bolivia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -29.9026691;
	lngt = -71.2519374;
	swprintf(loc, 1023, L"La Serena, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -16.4307926;
	lngt = 179.3629995;
	swprintf(loc, 1023, L"Labasa, Fiji : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.5243793;
	lngt = 3.3792057;
	swprintf(loc, 1023, L"Lagos, Nigeria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.55460609999999;
	lngt = 74.35715810000001;
	swprintf(loc, 1023, L"Lahore, Punjab, Pakistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.98267490000001;
	lngt = 25.6612096;
	swprintf(loc, 1023, L"Lahti, P,ij,nne Tavastia, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.046575;
	lngt = -2.8007399;
	swprintf(loc, 1023, L"Lancaster, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.061089;
	lngt = 103.834304;
	swprintf(loc, 1023, L"Lanzhou, Gansu, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.1250077;
	lngt = -101.6859605;
	swprintf(loc, 1023, L"Len, Guanajuato, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.1250077;
	lngt = -101.6859605;
	swprintf(loc, 1023, L"LeAn, Guanajuato, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.652491;
	lngt = 91.17210999999999;
	swprintf(loc, 1023, L"Lhasa, Tibet, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.6345964;
	lngt = -85.4406747;
	swprintf(loc, 1023, L"Liberia, Costa Rica : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 0.4161976;
	lngt = 9.4672676;
	swprintf(loc, 1023, L"Libreville, Gabon : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.62925;
	lngt = 3.057256;
	swprintf(loc, 1023, L"Lille, Nord-Pas-de-Calais, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 61.1152713;
	lngt = 10.4662306;
	swprintf(loc, 1023, L"Lillehammer, Oppland, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -13.9626121;
	lngt = 33.7741195;
	swprintf(loc, 1023, L"Lilongwe, Malawi : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -12.046374;
	lngt = -77.04279339999999;
	swprintf(loc, 1023, L"Lima, Lima Province, Peru : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.8257625;
	lngt = -96.6851982;
	swprintf(loc, 1023, L"Lincoln, Nebraska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 58.41080700000001;
	lngt = 15.6213727;
	swprintf(loc, 1023, L"Linkping, Tstergtland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.30694;
	lngt = 14.28583;
	swprintf(loc, 1023, L"Linz, Upper Austria, Austria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.7222524;
	lngt = -9.1393366;
	swprintf(loc, 1023, L"Lisbon, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.7464809;
	lngt = -92.28959479999999;
	swprintf(loc, 1023, L"Little Rock, Arkansas, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.4083714;
	lngt = -2.9915726;
	swprintf(loc, 1023, L"Liverpool, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -17.8519791;
	lngt = 25.8285153;
	swprintf(loc, 1023, L"Livingstone, Zambia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.0569465;
	lngt = 14.5057515;
	swprintf(loc, 1023, L"Ljubljana, Slovenia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -26.400429;
	lngt = 31.1824925;
	swprintf(loc, 1023, L"Lobamba, Swaziland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.1724969;
	lngt = 1.2313618;
	swprintf(loc, 1023, L"Lom,, Togo : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.5073509;
	lngt = -0.1277583;
	swprintf(loc, 1023, L"London, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 78.22317220000001;
	lngt = 15.626723;
	swprintf(loc, 1023, L"Longyearbyen, Svalbard, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.0522342;
	lngt = -118.2436849;
	swprintf(loc, 1023, L"Los Angeles, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.2526647;
	lngt = -85.7584557;
	swprintf(loc, 1023, L"Louisville, Kentucky, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.839987599999999;
	lngt = 13.2894368;
	swprintf(loc, 1023, L"Luanda, Angola : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -11.6876026;
	lngt = 27.5026174;
	swprintf(loc, 1023, L"Lubumbashi, Democratic Republic of the Congo : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.8466937;
	lngt = 80.94616599999999;
	swprintf(loc, 1023, L"Lucknow, Uttar Pradesh, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.900965;
	lngt = 75.8572758;
	swprintf(loc, 1023, L"Ludhiana, Punjab, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.584819;
	lngt = 22.1567026;
	swprintf(loc, 1023, L"Lule, Norrbotten, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -15.3875259;
	lngt = 28.3228165;
	swprintf(loc, 1023, L"Lusaka, Zambia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 49.61162100000001;
	lngt = 6.1319346;
	swprintf(loc, 1023, L"Luxembourg, Luxembourg : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.6872431;
	lngt = 32.6396357;
	swprintf(loc, 1023, L"Luxor, Egypt : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 49.839683;
	lngt = 24.029717;
	swprintf(loc, 1023, L"Lviv, Lviv Oblast, Ukraine : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.764043;
	lngt = 4.835659;
	swprintf(loc, 1023, L"Lyon, Rhne-Alpes, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.721261;
	lngt = -4.4212655;
	swprintf(loc, 1023, L"Mlaga, Andalusia, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 8.5698244;
	lngt = -71.1804988;
	swprintf(loc, 1023, L"M,rida, M,rida, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.9673702;
	lngt = -89.5925857;
	swprintf(loc, 1023, L"M,rida, Yucatn, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.9606649;
	lngt = 7.6261347;
	swprintf(loc, 1023, L"Mnster, North Rhine-Westphalia, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.9606649;
	lngt = 7.6261347;
	swprintf(loc, 1023, L"MAnster, North Rhine-Westphalia, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 8.5698244;
	lngt = -71.1804988;
	swprintf(loc, 1023, L"Msrida, Msrida, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.9673702;
	lngt = -89.5925857;
	swprintf(loc, 1023, L"Msrida, YucatAn, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.8513682;
	lngt = 5.6909725;
	swprintf(loc, 1023, L"Maastricht, Limburg Netherlands, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.2047465;
	lngt = 113.5552031;
	swprintf(loc, 1023, L"Macau, Macau, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -9.6498487;
	lngt = -35.7089492;
	swprintf(loc, 1023, L"Macei, Alagoas, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.4167754;
	lngt = -3.7037902;
	swprintf(loc, 1023, L"Madrid, Madrid, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.3894816;
	lngt = 139.0634281;
	swprintf(loc, 1023, L"Maebashi, Gunma, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.855978;
	lngt = 25.64031;
	swprintf(loc, 1023, L"Mafikeng, North West, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 59.5611525;
	lngt = 150.8301413;
	swprintf(loc, 1023, L"Magadan, Magadan Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.0921515;
	lngt = 171.3825582;
	swprintf(loc, 1023, L"Majuro, Marshall Islands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -5.147665099999999;
	lngt = 119.4327314;
	swprintf(loc, 1023, L"Makassar, South Sulawesi, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.554729;
	lngt = 121.0244452;
	swprintf(loc, 1023, L"Makati, National Capital Region, Philippines : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.1754959;
	lngt = 73.5093474;
	swprintf(loc, 1023, L"Mal,, Maldives : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 3.7504118;
	lngt = 8.737103899999999;
	swprintf(loc, 1023, L"Malabo, Equatorial Guinea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 2.189594;
	lngt = 102.2500868;
	swprintf(loc, 1023, L"Malacca Town, Malacca, Malaysia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -7.9666204;
	lngt = 112.6326321;
	swprintf(loc, 1023, L"Malang, East Java, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -12.7809488;
	lngt = 45.227872;
	swprintf(loc, 1023, L"Mamoudzou, Mayotte, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.1149926;
	lngt = -86.2361744;
	swprintf(loc, 1023, L"Managua, Nicaragua : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.2285161;
	lngt = 50.5860497;
	swprintf(loc, 1023, L"Manama, Bahrain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.1190275;
	lngt = -60.0217314;
	swprintf(loc, 1023, L"Manaus, Amazonas, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.4807593;
	lngt = -2.2426305;
	swprintf(loc, 1023, L"Manchester, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -32.529;
	lngt = 115.723;
	swprintf(loc, 1023, L"Mandurah, Western Australia, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -26.644588;
	lngt = 31.3541631;
	swprintf(loc, 1023, L"Manzini, Swaziland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.891968;
	lngt = 32.6051351;
	swprintf(loc, 1023, L"Maputo, Mozambique : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.6544509;
	lngt = -71.7147951;
	swprintf(loc, 1023, L"Maracaibo, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.2441931;
	lngt = -67.60661640000001;
	swprintf(loc, 1023, L"Maracay, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.6294723;
	lngt = -7.981084500000001;
	swprintf(loc, 1023, L"Marrakech, Morocco : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.296482;
	lngt = 5.36978;
	swprintf(loc, 1023, L"Marseille, Provence-Alpes-Cte dAzur, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 0.0265717;
	lngt = 18.2970692;
	swprintf(loc, 1023, L"Mbandaka, quateur, Democratic Republic of the Congo : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 0.0265717;
	lngt = 18.2970692;
	swprintf(loc, 1023, L"Mbandaka, Aquateur, Democratic Republic of the Congo : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.253040800000001;
	lngt = -75.5645737;
	swprintf(loc, 1023, L"Medelln, Colombia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.253040800000001;
	lngt = -75.5645737;
	swprintf(loc, 1023, L"MedellAn, Colombia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.6866142;
	lngt = -100.3161126;
	swprintf(loc, 1023, L"Monterrey, Nuevo Len, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.6866142;
	lngt = -100.3161126;
	swprintf(loc, 1023, L"Monterrey, Nuevo LeAn, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.1348457;
	lngt = 15.0557415;
	swprintf(loc, 1023, L"NDjamena, Chad : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.6485496;
	lngt = 138.1942432;
	swprintf(loc, 1023, L"Nagano, Nagano, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.7502856;
	lngt = 129.877667;
	swprintf(loc, 1023, L"Nagasaki, Nagasaki, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.1814464;
	lngt = 136.906398;
	swprintf(loc, 1023, L"Nagoya, Aichi, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 21.1458004;
	lngt = 79.0881546;
	swprintf(loc, 1023, L"Nagpur, Maharashtra, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.2123124;
	lngt = 127.6791568;
	swprintf(loc, 1023, L"Naha, Okinawa, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -1.2920659;
	lngt = 36.8219462;
	swprintf(loc, 1023, L"Nairobi, Kenya : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.027376;
	lngt = 44.3331165;
	swprintf(loc, 1023, L"Najaf, Iraq : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.9798997;
	lngt = 102.0977693;
	swprintf(loc, 1023, L"Nakhon Ratchasima, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.0057729;
	lngt = 71.6436028;
	swprintf(loc, 1023, L"Namangan, Uzbekistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.060255;
	lngt = 118.796877;
	swprintf(loc, 1023, L"Nanjing, Jiangsu, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.817002;
	lngt = 108.366543;
	swprintf(loc, 1023, L"Nanning, Guangxi, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -38.9516784;
	lngt = -68.0591888;
	swprintf(loc, 1023, L"Neuqu,n, Neuqu,n, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -38.9516784;
	lngt = -68.0591888;
	swprintf(loc, 1023, L"Neuqusn, Neuqusn, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.7101728;
	lngt = 7.261953200000001;
	swprintf(loc, 1023, L"Nice, Provence-Alpes-Cte dAzur, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.1855659;
	lngt = 33.38227639999999;
	swprintf(loc, 1023, L"Nicosia, Cyprus : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.9161924;
	lngt = 139.0364126;
	swprintf(loc, 1023, L"Niigata, Niigata, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 56.2965039;
	lngt = 43.9360589;
	swprintf(loc, 1023, L"Nizhny Novgorod, Nizhny Novgorod Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.5011111;
	lngt = -165.4063889;
	swprintf(loc, 1023, L"Nome, Alaska, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 69.35579;
	lngt = 88.18929380000002;
	swprintf(loc, 1023, L"Norilsk, Krasnoyarsk Krai, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 58.587745;
	lngt = 16.192421;
	swprintf(loc, 1023, L"Norrkping, Tstergtland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.3091152;
	lngt = -79.4608204;
	swprintf(loc, 1023, L"North Bay, Ontario, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.6308859;
	lngt = 1.297355;
	swprintf(loc, 1023, L"Norwich, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.95478319999999;
	lngt = -1.1581086;
	swprintf(loc, 1023, L"Nottingham, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.0735299;
	lngt = -15.9582372;
	swprintf(loc, 1023, L"Nouakchott, Mauritania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -22.2716119;
	lngt = 166.4409846;
	swprintf(loc, 1023, L"Noum,a, New Caledonia, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.2671352;
	lngt = 19.8335496;
	swprintf(loc, 1023, L"Novi Sad, Vojvodina, Serbia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.00835259999999;
	lngt = 82.9357327;
	swprintf(loc, 1023, L"Novosibirsk, Novosibirsk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -21.1393418;
	lngt = -175.204947;
	swprintf(loc, 1023, L"Nukualofa, Tonga : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -9.381110999999999;
	lngt = 179.852222;
	swprintf(loc, 1023, L"Nukulaelae, Tuvalu : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.461891;
	lngt = 59.6166312;
	swprintf(loc, 1023, L"Nukus, Karakalpakstan, Uzbekistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 70.08208999999999;
	lngt = 27.8717746;
	swprintf(loc, 1023, L"Nuorgam, Lapland, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 49.45203;
	lngt = 11.07675;
	swprintf(loc, 1023, L"Nuremberg, Bavaria, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.18140989999999;
	lngt = -51.694138;
	swprintf(loc, 1023, L"Nuuk Godthb, Greenland, Denmark : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.7127837;
	lngt = -74.0059413;
	swprintf(loc, 1023, L"Ny-lesund, Svalbard, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.8043637;
	lngt = -122.2711137;
	swprintf(loc, 1023, L"Oakland, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.9238989;
	lngt = 143.1961031;
	swprintf(loc, 1023, L"Obihiro, Hokkaido, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 55.40375599999999;
	lngt = 10.40237;
	swprintf(loc, 1023, L"Odense, Denmark : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.482526;
	lngt = 30.7233095;
	swprintf(loc, 1023, L"Odessa, Odessa Oblast, Ukraine : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.2395578;
	lngt = 131.609272;
	swprintf(loc, 1023, L"Oita, Oita, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.6551456;
	lngt = 133.9195019;
	swprintf(loc, 1023, L"Okayama, Okayama, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.4675602;
	lngt = -97.5164276;
	swprintf(loc, 1023, L"Oklahoma City, Oklahoma, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 15.6475782;
	lngt = 32.4806894;
	swprintf(loc, 1023, L"Omdurman, Sudan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.9884804;
	lngt = 73.32423620000002;
	swprintf(loc, 1023, L"Omsk, Omsk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.5092044;
	lngt = -70.0086306;
	swprintf(loc, 1023, L"Oranjestad, Aruba, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 28.5383355;
	lngt = -81.3792365;
	swprintf(loc, 1023, L"Orlando, Florida, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.6937378;
	lngt = 135.5021651;
	swprintf(loc, 1023, L"Osaka, Osaka, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 59.9138688;
	lngt = 10.7522454;
	swprintf(loc, 1023, L"Oslo, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.0178929;
	lngt = 135.8546074;
	swprintf(loc, 1023, L"Otsu, Shiga, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.4215296;
	lngt = -75.69719309999999;
	swprintf(loc, 1023, L"Ottawa, Ontario, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.3714277;
	lngt = -1.5196603;
	swprintf(loc, 1023, L"Ouagadougou, Burkina Faso : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.0120888;
	lngt = 25.4650773;
	swprintf(loc, 1023, L"Oulu, Northern Ostrobothnia, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.7520209;
	lngt = -1.2577263;
	swprintf(loc, 1023, L"Oxford, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -0.9470831999999999;
	lngt = 100.417181;
	swprintf(loc, 1023, L"Padang, West Sumatera, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -14.33166;
	lngt = -170.711503;
	swprintf(loc, 1023, L"Pago Pago, American Samoa, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -2.9760735;
	lngt = 104.7754307;
	swprintf(loc, 1023, L"Palembang, South Sumatera, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.1156879;
	lngt = 13.3612671;
	swprintf(loc, 1023, L"Palermo, Sicily, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.9147118;
	lngt = 158.1610274;
	swprintf(loc, 1023, L"Palikir, Federated States of Micronesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.5696005;
	lngt = 2.6501603;
	swprintf(loc, 1023, L"Palma, Balearic Islands, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -10.249091;
	lngt = -48.32428580000001;
	swprintf(loc, 1023, L"Palmas, Tocantins, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.1011785;
	lngt = -79.4028639;
	swprintf(loc, 1023, L"Panama City, Panama : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -17.5516251;
	lngt = -149.5584758;
	swprintf(loc, 1023, L"Papeete, French Polynesia, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 5.8520355;
	lngt = -55.2038278;
	swprintf(loc, 1023, L"Paramaribo, Suriname : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.856614;
	lngt = 2.3522219;
	swprintf(loc, 1023, L"Paris, Ile-de-France, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.5940947;
	lngt = 85.1375645;
	swprintf(loc, 1023, L"Patna, Bihar, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.9276082;
	lngt = 100.8770813;
	swprintf(loc, 1023, L"Pattaya, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 0.5070677;
	lngt = 101.4477793;
	swprintf(loc, 1023, L"Pekanbaru, Riau, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -31.7653989;
	lngt = -52.3375886;
	swprintf(loc, 1023, L"Pelotas, Rio Grande do Sul, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 58.02968129999999;
	lngt = 56.2667916;
	swprintf(loc, 1023, L"Perm, Perm Krai, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -31.9505269;
	lngt = 115.8604572;
	swprintf(loc, 1023, L"Perth, Western Australia, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.0149748;
	lngt = 71.5804899;
	swprintf(loc, 1023, L"Peshawar, Khyber Pakhtunkhwa, Pakistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.56949849999999;
	lngt = -0.2405299;
	swprintf(loc, 1023, L"Peterborough, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -9.389082999999999;
	lngt = -40.5030961;
	swprintf(loc, 1023, L"Petrolina, Pernambuco, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.8732209;
	lngt = 69.1505478;
	swprintf(loc, 1023, L"Petropavl, North Kazakhstan, Kazakhstan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.0409109;
	lngt = 158.6777259;
	swprintf(loc, 1023, L"Petropavlovsk-Kamchatsky, Kamchatka Krai, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.9525839;
	lngt = -75.1652215;
	swprintf(loc, 1023, L"Philadelphia, Pennsylvania, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 11.5448729;
	lngt = 104.8921668;
	swprintf(loc, 1023, L"Phnom Penh, Cambodia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 33.4483771;
	lngt = -112.0740373;
	swprintf(loc, 1023, L"Phoenix, Arizona, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.9519331;
	lngt = 98.33808839999999;
	swprintf(loc, 1023, L"Phuket, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 44.3683156;
	lngt = -100.3509665;
	swprintf(loc, 1023, L"Pierre, South Dakota, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -29.6006068;
	lngt = 30.3794118;
	swprintf(loc, 1023, L"Pietermaritzburg, KwaZulu-Natal, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.316698;
	lngt = 21.4800364;
	swprintf(loc, 1023, L"Pite, Norrbotten, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.44062479999999;
	lngt = -79.9958864;
	swprintf(loc, 1023, L"Pittsburgh, Pennsylvania, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.3754565;
	lngt = -4.1426565;
	swprintf(loc, 1023, L"Plymouth, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -21.7853787;
	lngt = -46.5619303;
	swprintf(loc, 1023, L"Poos de Caldas, Minas Gerais, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.4304196;
	lngt = 19.2593642;
	swprintf(loc, 1023, L"Podgorica, Montenegro : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -23.8961708;
	lngt = 29.4486263;
	swprintf(loc, 1023, L"Polokwane, Limpopo, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.7428301;
	lngt = -25.6805868;
	swprintf(loc, 1023, L"Ponta Delgada, Azores, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -0.0263303;
	lngt = 109.3425039;
	swprintf(loc, 1023, L"Pontianak, West Kalimantan, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.594395;
	lngt = -72.3074326;
	swprintf(loc, 1023, L"Port-au-Prince, Haiti : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 11.6233774;
	lngt = 92.7264828;
	swprintf(loc, 1023, L"Port Blair, Andaman and Nicobar Islands, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -33.7139247;
	lngt = 25.5207358;
	swprintf(loc, 1023, L"Port Elizabeth, Eastern Cape, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.815554;
	lngt = 7.0498442;
	swprintf(loc, 1023, L"Port Harcourt, Nigeria : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.3106621;
	lngt = 118.5878223;
	swprintf(loc, 1023, L"Port Hedland, Western Australia, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.1608912;
	lngt = 57.5012222;
	swprintf(loc, 1023, L"Port Louis, Mauritius : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -9.443800399999999;
	lngt = 147.1802671;
	swprintf(loc, 1023, L"Port Moresby, Papua New Guinea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 10.6549013;
	lngt = -61.50192559999999;
	swprintf(loc, 1023, L"Port of Spain, Trinidad and Tobago : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.2652893;
	lngt = 32.3018661;
	swprintf(loc, 1023, L"Port Said, Egypt : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -17.7332512;
	lngt = 168.3273245;
	swprintf(loc, 1023, L"Port Vila, Vanuatu : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.5230622;
	lngt = -122.6764816;
	swprintf(loc, 1023, L"Portland, Oregon, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.4968574;
	lngt = 2.6288523;
	swprintf(loc, 1023, L"Porto-Novo, Benin : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -30.0346471;
	lngt = -51.2176584;
	swprintf(loc, 1023, L"Porto Alegre, Rio Grande do Sul, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.761160499999999;
	lngt = -63.9004303;
	swprintf(loc, 1023, L"Porto Velho, Rondnia, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.1579438;
	lngt = -8.629105299999999;
	swprintf(loc, 1023, L"Porto, Portugal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.8197675;
	lngt = -1.0879769;
	swprintf(loc, 1023, L"Portsmouth, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.406374;
	lngt = 16.9251681;
	swprintf(loc, 1023, L"Poznan, Greater Poland, Poland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.0755381;
	lngt = 14.4378005;
	swprintf(loc, 1023, L"Prague, Czech Republic : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.93305;
	lngt = -23.5133267;
	swprintf(loc, 1023, L"Praia, Cape Verde : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.7478676;
	lngt = 28.2292712;
	swprintf(loc, 1023, L"Pretoria, Gauteng, South Africa : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.8239891;
	lngt = -71.4128343;
	swprintf(loc, 1023, L"Providence, Rhode Island, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.36185329999999;
	lngt = 26.985855;
	swprintf(loc, 1023, L"Pudasj,rvi, Northern Ostrobothnia, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 19.0412967;
	lngt = -98.20619959999999;
	swprintf(loc, 1023, L"Puebla, Puebla, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -45.4035437;
	lngt = -72.6864155;
	swprintf(loc, 1023, L"Puerto Ais,n, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 5.6614718;
	lngt = -67.58277439999999;
	swprintf(loc, 1023, L"Puerto Ayacucho, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -41.468917;
	lngt = -72.94113639999999;
	swprintf(loc, 1023, L"Puerto Montt, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -25.2083381;
	lngt = -69.8432231;
	swprintf(loc, 1023, L"Puerto Toro, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.653407;
	lngt = -105.2253316;
	swprintf(loc, 1023, L"Puerto Vallarta, Jalisco, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -54.9352098;
	lngt = -67.6058537;
	swprintf(loc, 1023, L"Puerto Williams, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.5204303;
	lngt = 73.8567437;
	swprintf(loc, 1023, L"Pune, Maharashtra, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -53.1638329;
	lngt = -70.9170683;
	swprintf(loc, 1023, L"Punta Arenas, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.2169531;
	lngt = -83.33618799999999;
	swprintf(loc, 1023, L"Puntarenas, Costa Rica : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.0392193;
	lngt = 125.7625241;
	swprintf(loc, 1023, L"Pyongyang, North Korea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 77.46704339999999;
	lngt = -69.22848279999999;
	swprintf(loc, 1023, L"Qaanaaq, Greenland, Denmark : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.71898640000001;
	lngt = -46.03534579999999;
	swprintf(loc, 1023, L"Qaqortoq, Greenland, Denmark : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.0569723;
	lngt = 120.4229373;
	swprintf(loc, 1023, L"Qingdao, Shandong, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.35434799999999;
	lngt = 123.918186;
	swprintf(loc, 1023, L"Qiqihar, Heilongjiang, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.5887932;
	lngt = -100.3898881;
	swprintf(loc, 1023, L"Querstaro, Querstaro, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -51.6230485;
	lngt = -69.2168291;
	swprintf(loc, 1023, L"Ro Gallegos, Santa Cruz, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -51.6230485;
	lngt = -69.2168291;
	swprintf(loc, 1023, L"RAo Gallegos, Santa Cruz, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.12652059999999;
	lngt = -21.8174393;
	swprintf(loc, 1023, L"Reykjavk, Capital Region, Iceland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.12652059999999;
	lngt = -21.8174393;
	swprintf(loc, 1023, L"ReykjavAk, Capital Region, Iceland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.9244259;
	lngt = 2.512763;
	swprintf(loc, 1023, L"Saint-Denis, R,union, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.88554;
	lngt = 55.45723899999999;
	swprintf(loc, 1023, L"Saint-Denis, Rsunion, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -41.1334722;
	lngt = -71.31027779999999;
	swprintf(loc, 1023, L"San Carlos de Bariloche, Ro Negro Province Ro Negro, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -41.1334722;
	lngt = -71.31027779999999;
	swprintf(loc, 1023, L"San Carlos de Bariloche, RAo Negro Province RAo Negro, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.771357200000001;
	lngt = -72.22614659999999;
	swprintf(loc, 1023, L"San Cristbal, Tchira, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.771357200000001;
	lngt = -72.22614659999999;
	swprintf(loc, 1023, L"San CristAbal, TAchira, Venezuela : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.9280694;
	lngt = -84.0907246;
	swprintf(loc, 1023, L"San Jos,, Costa Rica : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.9280694;
	lngt = -84.0907246;
	swprintf(loc, 1023, L"San Joss, Costa Rica : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.1564699;
	lngt = -100.9855409;
	swprintf(loc, 1023, L"San Luis Potos, San Luis Potos, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.1564699;
	lngt = -100.9855409;
	swprintf(loc, 1023, L"San Luis PotosA, San Luis PotosA, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -26.8139041;
	lngt = -65.17884239999999;
	swprintf(loc, 1023, L"San Miguel de Tucumn, Tucumn, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -26.8082848;
	lngt = -65.2175903;
	swprintf(loc, 1023, L"San Miguel de TucumAn, TucumAn, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.318334;
	lngt = -1.9812313;
	swprintf(loc, 1023, L"San Sebastin, Basque Country, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.318334;
	lngt = -1.9812313;
	swprintf(loc, 1023, L"San SebastiAn, Basque Country, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 15.3694451;
	lngt = 44.1910066;
	swprintf(loc, 1023, L"Sanaa, Yemen : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.4208305;
	lngt = -119.6981901;
	swprintf(loc, 1023, L"Santa Barbara, California, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -17.8145819;
	lngt = -63.1560853;
	swprintf(loc, 1023, L"Santa Cruz de la Sierra, Bolivia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 28.4636296;
	lngt = -16.2518467;
	swprintf(loc, 1023, L"Santa Cruz de Tenerife, Canary Islands, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.6869752;
	lngt = -105.937799;
	swprintf(loc, 1023, L"Santa Fe, New Mexico, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -31.6106578;
	lngt = -60.697294;
	swprintf(loc, 1023, L"Santa Fe, Santa Fe, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 3.4516467;
	lngt = -76.5319854;
	swprintf(loc, 1023, L"Santiago de Cali, Colombia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.8782132;
	lngt = -8.5448445;
	swprintf(loc, 1023, L"Santiago de Compostela, Galicia, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.01693;
	lngt = -75.8301537;
	swprintf(loc, 1023, L"Santiago de Cuba, Cuba : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -33.4488897;
	lngt = -70.66926549999999;
	swprintf(loc, 1023, L"Santiago, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 18.4860575;
	lngt = -69.93121169999999;
	swprintf(loc, 1023, L"Santo Domingo, Dominican Republic : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.811761;
	lngt = -49.3762272;
	swprintf(loc, 1023, L"Sao Jos, do Rio Preto, Sao Paulo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -23.223701;
	lngt = -45.9009074;
	swprintf(loc, 1023, L"Sao Jos, dos Campos, Sao Paulo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -2.5391099;
	lngt = -44.28290459999999;
	swprintf(loc, 1023, L"Sao Lus, Maranhao, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -23.5505199;
	lngt = -46.63330939999999;
	swprintf(loc, 1023, L"Sao Paulo, Sao Paulo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 0.3301924;
	lngt = 6.733343;
	swprintf(loc, 1023, L"Sao Tom,, Sao Tom, and Prncipe : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.0620958;
	lngt = 141.3543763;
	swprintf(loc, 1023, L"Sapporo, Hokkaido, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.8562586;
	lngt = 18.4130763;
	swprintf(loc, 1023, L"Sarajevo, Bosnia and Herzegovina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 51.55637890000001;
	lngt = 45.9798167;
	swprintf(loc, 1023, L"Saratov, Saratov Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 59.28407290000001;
	lngt = 11.1094028;
	swprintf(loc, 1023, L"Sarpsborg, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.1332144;
	lngt = -106.6700458;
	swprintf(loc, 1023, L"Saskatoon, Saskatchewan, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.52185799999999;
	lngt = -84.3460896;
	swprintf(loc, 1023, L"Sault Ste Marie, Ontario, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.6062095;
	lngt = -122.3320708;
	swprintf(loc, 1023, L"Seattle, Washington, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 4.9536104;
	lngt = -1.7344155;
	swprintf(loc, 1023, L"Sekondi-Takoradi, Ghana : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -7.0051453;
	lngt = 110.4381254;
	swprintf(loc, 1023, L"Semarang, Central Java, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.268215;
	lngt = 140.8693558;
	swprintf(loc, 1023, L"Sendai, Miyagi, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.566535;
	lngt = 126.9779692;
	swprintf(loc, 1023, L"Seoul, South Korea : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 13.4502991;
	lngt = -16.6880841;
	swprintf(loc, 1023, L"Serekunda, Gambia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.3890924;
	lngt = -5.9844589;
	swprintf(loc, 1023, L"Seville, Andalusia, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.7478469;
	lngt = 10.766163;
	swprintf(loc, 1023, L"Sfax, Tunisia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 31.2462665;
	lngt = 121.4927237;
	swprintf(loc, 1023, L"Shanghai, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.38112899999999;
	lngt = -1.470085;
	swprintf(loc, 1023, L"Sheffield, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.805699;
	lngt = 123.431472;
	swprintf(loc, 1023, L"Shenyang, Liaoning, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.543096;
	lngt = 114.057865;
	swprintf(loc, 1023, L"Shenzhen, Guangdong, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 29.26686999999999;
	lngt = 88.880583;
	swprintf(loc, 1023, L"Shigatse, Tibet, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.042307;
	lngt = 114.51486;
	swprintf(loc, 1023, L"Shijiazhuang, Hebei, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 64.750244;
	lngt = 20.950917;
	swprintf(loc, 1023, L"Skellefte, Vzsterbotten, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.689511199999999;
	lngt = -40.3485697;
	swprintf(loc, 1023, L"Sobral, Cear, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -3.689511199999999;
	lngt = -40.3485697;
	swprintf(loc, 1023, L"Sobral, CearA, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.0560975;
	lngt = -61.7487996;
	swprintf(loc, 1023, L"St Georges, Grenada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.1274104;
	lngt = -61.84677199999999;
	swprintf(loc, 1023, L"St Johns, Antigua and Barbuda : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.5605413;
	lngt = -52.71283150000001;
	swprintf(loc, 1023, L"St Johns, Newfoundland and Labrador, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.7758459;
	lngt = 9.1829321;
	swprintf(loc, 1023, L"Stuttgart, Baden-Wrttemberg, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.7758459;
	lngt = 9.1829321;
	swprintf(loc, 1023, L"Stuttgart, Baden-WArttemberg, Germany : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 62.390811;
	lngt = 17.306927;
	swprintf(loc, 1023, L"Sundsvall, V,sternorrland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 62.390811;
	lngt = 17.306927;
	swprintf(loc, 1023, L"Sundsvall, Vzsternorrland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 37.87059;
	lngt = 112.548879;
	swprintf(loc, 1023, L"Taiyuan, Shanxi, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.3427879;
	lngt = 134.046574;
	swprintf(loc, 1023, L"Takamatsu, Kagawa, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 59.43696079999999;
	lngt = 24.7535746;
	swprintf(loc, 1023, L"Tallinn, Harju County, Estonia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 9.432918599999999;
	lngt = -0.8484524;
	swprintf(loc, 1023, L"Tamale, Ghana : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.950575;
	lngt = -82.45717759999999;
	swprintf(loc, 1023, L"Tampa, Florida, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 61.4977524;
	lngt = 23.7609535;
	swprintf(loc, 1023, L"Tampere, Pirkanmaa, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 22.2331041;
	lngt = -97.861099;
	swprintf(loc, 1023, L"Tampico, Tamaulipas, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.7594651;
	lngt = -5.833954299999999;
	swprintf(loc, 1023, L"Tanger, Tangier-Assilah, Morocco : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.9055567;
	lngt = -92.26341359999999;
	swprintf(loc, 1023, L"Tapachula, Chiapas, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 58.3776252;
	lngt = 26.7290063;
	swprintf(loc, 1023, L"Tartu, Tartu County, Estonia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.2994958;
	lngt = 69.2400734;
	swprintf(loc, 1023, L"Tashkent, Uzbekistan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.7151377;
	lngt = 44.827096;
	swprintf(loc, 1023, L"Tbilisi, Georgia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.0722751;
	lngt = -87.19213599999999;
	swprintf(loc, 1023, L"Tegucigalpa, Honduras : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.6891975;
	lngt = 51.3889736;
	swprintf(loc, 1023, L"Tehran, Tehran, Iran : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.0852999;
	lngt = 34.78176759999999;
	swprintf(loc, 1023, L"Tel Aviv, Israel : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -38.7359018;
	lngt = -72.5903739;
	swprintf(loc, 1023, L"Temuco, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -5.044685299999999;
	lngt = -42.7662325;
	swprintf(loc, 1023, L"Teresina, Piau, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 26.6528495;
	lngt = 92.7925592;
	swprintf(loc, 1023, L"Tezpur, Assam, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 52.0704978;
	lngt = 4.3006999;
	swprintf(loc, 1023, L"The Hague, South Holland, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 50.7874529;
	lngt = 0.3288754;
	swprintf(loc, 1023, L"The Valley, Anguilla, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.6400629;
	lngt = 22.9444191;
	swprintf(loc, 1023, L"Thessaloniki, Greece : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 27.4727924;
	lngt = 89.63928629999999;
	swprintf(loc, 1023, L"Thimphu, Bhutan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 14.7910052;
	lngt = -16.9358604;
	swprintf(loc, 1023, L"ThiSs, Senegal : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 48.3808951;
	lngt = -89.24768229999999;
	swprintf(loc, 1023, L"Thunder Bay, Ontario, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 39.1548454;
	lngt = 117.1785399;
	swprintf(loc, 1023, L"Tianjin, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.5149469;
	lngt = -117.0382471;
	swprintf(loc, 1023, L"Tijuana, Baja California, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 71.6374819;
	lngt = 128.8644716;
	swprintf(loc, 1023, L"Tiksi, Sakha Republic, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 16.7665887;
	lngt = -3.0025615;
	swprintf(loc, 1023, L"Timbuktu, Mali : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.3275459;
	lngt = 19.8186982;
	swprintf(loc, 1023, L"Tirana, Albania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 46.84818500000001;
	lngt = 29.596805;
	swprintf(loc, 1023, L"Tiraspol, Transnistria, Moldova : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.0702703;
	lngt = 134.5548438;
	swprintf(loc, 1023, L"Tokushima, Tokushima, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.7090259;
	lngt = 139.7319925;
	swprintf(loc, 1023, L"Tokyo, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.5086002;
	lngt = 49.4198344;
	swprintf(loc, 1023, L"Tolyatti, Samara Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 65.8444927;
	lngt = 24.1527255;
	swprintf(loc, 1023, L"Tornio, Lapland, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.653226;
	lngt = -79.3831843;
	swprintf(loc, 1023, L"Toronto, Ontario, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 25.5428443;
	lngt = -103.4067861;
	swprintf(loc, 1023, L"Torren, Coahuila, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.5011326;
	lngt = 134.2350914;
	swprintf(loc, 1023, L"Tottori, Tottori, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.604652;
	lngt = 1.444209;
	swprintf(loc, 1023, L"Toulouse, Midi-Pyr,n,es, France : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -19.2589635;
	lngt = 146.8169483;
	swprintf(loc, 1023, L"Townsville, Queensland, Australia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.6959518;
	lngt = 137.2136768;
	swprintf(loc, 1023, L"Toyama, Toyama, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.0026969;
	lngt = 39.7167633;
	swprintf(loc, 1023, L"Trabzon, Trabzon Province, Turkey : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.0176177;
	lngt = 12.537202;
	swprintf(loc, 1023, L"Trapani, Sicily, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -43.2493016;
	lngt = -65.30763510000001;
	swprintf(loc, 1023, L"Trelew, Chubut, Argentina : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.2170534;
	lngt = -74.7429384;
	swprintf(loc, 1023, L"Trenton, New Jersey, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.8872094;
	lngt = 13.1913383;
	swprintf(loc, 1023, L"Tripoli, Libya : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 8.524139099999999;
	lngt = 76.9366376;
	swprintf(loc, 1023, L"Trivandrum, Kerala, India : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 63.29004740000001;
	lngt = 18.7166166;
	swprintf(loc, 1023, L"Trnskldsvik, V,sternorrland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 69.6492047;
	lngt = 18.9553238;
	swprintf(loc, 1023, L"Tromso, Troms, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 63.4305149;
	lngt = 10.3950528;
	swprintf(loc, 1023, L"Trondheim, Sor-Trondelag, Norway : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -8.109052399999999;
	lngt = -79.0215336;
	swprintf(loc, 1023, L"Trujillo, Peru : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 42.2214597;
	lngt = 43.9644051;
	swprintf(loc, 1023, L"Tskhinvali, South Ossetia, Georgia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 63.1766832;
	lngt = 14.6360681;
	swprintf(loc, 1023, L"Tstersund, J,mtland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.718596;
	lngt = 136.5056975;
	swprintf(loc, 1023, L"Tsu, Mie, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 32.2217429;
	lngt = -110.926479;
	swprintf(loc, 1023, L"Tucson, Arizona, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 69.445358;
	lngt = -133.034181;
	swprintf(loc, 1023, L"Tuktoyaktuk, Northwest Territories, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.1539816;
	lngt = -95.99277500000001;
	swprintf(loc, 1023, L"Tulsa, Oklahoma, United States : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.8064948;
	lngt = 10.1815316;
	swprintf(loc, 1023, L"Tunis, Tunisia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.070312;
	lngt = 7.686856499999999;
	swprintf(loc, 1023, L"Turin, Piedmont, Italy : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 60.4518126;
	lngt = 22.2666303;
	swprintf(loc, 1023, L"Turku, Southwest Finland, Finland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -18.9146078;
	lngt = -48.2753801;
	swprintf(loc, 1023, L"Uberlndia, Minas Gerais, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 17.3646969;
	lngt = 102.8158924;
	swprintf(loc, 1023, L"Udon Thani, Thailand : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 54.7387621;
	lngt = 55.9720554;
	swprintf(loc, 1023, L"Ufa, Republic of Bashkortostan, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.88639879999999;
	lngt = 106.9057439;
	swprintf(loc, 1023, L"Ulan Bator, Mongolia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 63.8258471;
	lngt = 20.2630354;
	swprintf(loc, 1023, L"Ume, V,sterbotten, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 72.78628809999999;
	lngt = -56.1375527;
	swprintf(loc, 1023, L"Upernavik, Greenland, Denmark : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 59.6063917;
	lngt = 17.6023696;
	swprintf(loc, 1023, L"Uppsala, Uppland, Sweden : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.652251;
	lngt = -4.724532099999999;
	swprintf(loc, 1023, L"Valladolid, Castile and Len, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.652251;
	lngt = -4.724532099999999;
	swprintf(loc, 1023, L"Valladolid, Castile and LeAn, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -33.047238;
	lngt = -71.61268849999999;
	swprintf(loc, 1023, L"Valparaso, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -33.047238;
	lngt = -71.61268849999999;
	swprintf(loc, 1023, L"ValparaAso, Chile : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.2976178;
	lngt = -40.2957768;
	swprintf(loc, 1023, L"Vitria, Esprito Santo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -20.2976178;
	lngt = -40.2957768;
	swprintf(loc, 1023, L"VitAria, EspArito Santo, Brazil : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.1224221;
	lngt = -68.8824233;
	swprintf(loc, 1023, L"Willemstad, Curaao, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 12.1224221;
	lngt = -68.8824233;
	swprintf(loc, 1023, L"Willemstad, Curaao, Netherlands : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 30.593099;
	lngt = 114.305393;
	swprintf(loc, 1023, L"Wuhan, Hubei, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.341575;
	lngt = 108.93977;
	swprintf(loc, 1023, L"Xian, Shaanxi, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 36.617134;
	lngt = 101.778224;
	swprintf(loc, 1023, L"Xining, Qinghai, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 62.0354523;
	lngt = 129.6754745;
	swprintf(loc, 1023, L"Yakutsk, Sakha Republic, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 38.2554388;
	lngt = 140.3396017;
	swprintf(loc, 1023, L"Yamagata, Yamagata, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.178496;
	lngt = 131.4737269;
	swprintf(loc, 1023, L"Yamaguchi, Yamaguchi, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 6.827622799999999;
	lngt = -5.2893433;
	swprintf(loc, 1023, L"Yamoussoukro, Ivory Coast : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 16.8660694;
	lngt = 96.19513200000002;
	swprintf(loc, 1023, L"Yangon, Myanmar : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 3.8480325;
	lngt = 11.5020752;
	swprintf(loc, 1023, L"Yaound,, Cameroon : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -0.5466856999999999;
	lngt = 166.9210913;
	swprintf(loc, 1023, L"Yaren District, Nauru : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 43.8374576;
	lngt = -66.11738199999999;
	swprintf(loc, 1023, L"Yarmouth, Nova Scotia, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 57.62607440000001;
	lngt = 39.8844708;
	swprintf(loc, 1023, L"Yaroslavl, Yaroslavl Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 56.83892609999999;
	lngt = 60.6057025;
	swprintf(loc, 1023, L"Yekaterinburg, Sverdlovsk Oblast, Russia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 62.4539717;
	lngt = -114.3717886;
	swprintf(loc, 1023, L"Yellowknife, Northwest Territories, Canada : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 40.1791857;
	lngt = 44.4991029;
	swprintf(loc, 1023, L"Yerevan, Armenia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -7.7955798;
	lngt = 110.3694896;
	swprintf(loc, 1023, L"Yogyakarta, Special Region of Yogyakarta, Indonesia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 35.4437078;
	lngt = 139.6380256;
	swprintf(loc, 1023, L"Yokohama, Kanagawa, Japan : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 53.95996510000001;
	lngt = -1.0872979;
	swprintf(loc, 1023, L"York, England, United Kingdom : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.3768866;
	lngt = 8.541694;
	swprintf(loc, 1023, L"Zrich,  Switzerland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 47.3768866;
	lngt = 8.541694;
	swprintf(loc, 1023, L"ZArich,  Switzerland : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 45.8150108;
	lngt = 15.981919;
	swprintf(loc, 1023, L"Zagreb, Croatia : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 7.0210845;
	lngt = 121.9195839;
	swprintf(loc, 1023, L"Zamboanga City, Zamboanga del Sur, Philippines : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = -6.165916999999999;
	lngt = 39.202641;
	swprintf(loc, 1023, L"Zanzibar City, Tanzania : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 20.6719563;
	lngt = -103.416501;
	swprintf(loc, 1023, L"Zapopan, Jalisco, Mexico : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 41.6488226;
	lngt = -0.8890853;
	swprintf(loc, 1023, L"Zaragoza, Aragon, Spain : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

	latt = 34.7617826;
	lngt = 113.7137748;
	swprintf(loc, 1023, L"Zhengzhou, Henan, Peoples Republic of China : %g, %g", latt, lngt);
	this->comboBox1->Items->Add( gcnew String(loc));

		}
#pragma endregion
	private: System::Void CitySelector_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 wchar_t x[1024];
				 pin_ptr<const wchar_t> wch = PtrToStringChars(this->comboBox1->Text);
				 swprintf(x, 1023, L"%s", wch);

				 bool found1 = false;
				 bool found2 = false;

				 wchar_t* y = x;
				 for (wchar_t* n = x; *n != (wchar_t)0x00; n++) {
					 if (*n == (wchar_t)(':')) {
						y = n+2;
						found1 = true;
						break;
					 }
				 }

				 if (!found1) {
					 MessageBoxA(0, "Please select an item from the list!", "Error", 0);
					 return;
				 }
				 wchar_t* z = y;
				 for (wchar_t* n = y; *n != (wchar_t)0x00; n++) {
					 if (*n == (wchar_t)(',')) {
						 *n = '\0';
						 z = n + 2;
						 found2 = true;
						 break;
					 }
				 }

				 if (!found2) {
					 MessageBoxA(0, "Please select an item from the list!", "Error", 0);
					 return;
				 }

				 //y is lat
				 //z is lng
				 
				 long double lat = 0;
				 long double lng = 0;
				 if (swscanf(y, L"%Lg", &lat) == 1 && swscanf(z, L"%Lg", &lng) == 1) {



				 setreg(L"lat", lat);
				 setreg(L"lng", lng);

				 this->Close();
				 	 
				 } else {
					 MessageBoxA(0, "There was an error reading the input. Please select an item from the list!", "Error", 0);
					 return;
				 }
			
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
