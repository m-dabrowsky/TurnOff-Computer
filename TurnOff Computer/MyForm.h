#pragma once
#include <ctime>

namespace TurnOffComputer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ startButton;
	protected:


	private: System::Windows::Forms::Label^ turnOff;
	private: System::Windows::Forms::Label^ lblHour;
	private: System::Windows::Forms::Label^ lblMinutes;
	private: System::Windows::Forms::Label^ points;







	private: System::Windows::Forms::PictureBox^ upHour;
	private: System::Windows::Forms::PictureBox^ downHour;
	private: System::Windows::Forms::PictureBox^ downMinut;



	private: System::Windows::Forms::PictureBox^ upMinut;

	private: System::Windows::Forms::Label^ chooseOption;
	private: System::Windows::Forms::PictureBox^ picOptions;


	private: System::Windows::Forms::PictureBox^ picPower;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::RadioButton^ specificButton;
	private: System::Windows::Forms::RadioButton^ periodButton;



	private: System::ComponentModel::IContainer^ components;








	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->turnOff = (gcnew System::Windows::Forms::Label());
			this->lblHour = (gcnew System::Windows::Forms::Label());
			this->lblMinutes = (gcnew System::Windows::Forms::Label());
			this->points = (gcnew System::Windows::Forms::Label());
			this->upHour = (gcnew System::Windows::Forms::PictureBox());
			this->downHour = (gcnew System::Windows::Forms::PictureBox());
			this->downMinut = (gcnew System::Windows::Forms::PictureBox());
			this->upMinut = (gcnew System::Windows::Forms::PictureBox());
			this->chooseOption = (gcnew System::Windows::Forms::Label());
			this->picOptions = (gcnew System::Windows::Forms::PictureBox());
			this->picPower = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->specificButton = (gcnew System::Windows::Forms::RadioButton());
			this->periodButton = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upHour))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->downHour))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->downMinut))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upMinut))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picOptions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPower))->BeginInit();
			this->SuspendLayout();
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->startButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startButton->FlatAppearance->BorderSize = 0;
			this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10, System::Drawing::FontStyle::Bold));
			this->startButton->ForeColor = System::Drawing::Color::White;
			this->startButton->Location = System::Drawing::Point(0, 389);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(287, 56);
			this->startButton->TabIndex = 1;
			this->startButton->Text = L"START";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// turnOff
			// 
			this->turnOff->AutoSize = true;
			this->turnOff->BackColor = System::Drawing::Color::Transparent;
			this->turnOff->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 5, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(238)));
			this->turnOff->ForeColor = System::Drawing::Color::White;
			this->turnOff->Location = System::Drawing::Point(14, 157);
			this->turnOff->Name = L"turnOff";
			this->turnOff->Size = System::Drawing::Size(112, 25);
			this->turnOff->TabIndex = 2;
			this->turnOff->Text = L"TURN OFF:";
			// 
			// lblHour
			// 
			this->lblHour->AutoSize = true;
			this->lblHour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblHour->ForeColor = System::Drawing::Color::White;
			this->lblHour->Location = System::Drawing::Point(39, 268);
			this->lblHour->Name = L"lblHour";
			this->lblHour->Size = System::Drawing::Size(87, 63);
			this->lblHour->TabIndex = 5;
			this->lblHour->Text = L"00";
			// 
			// lblMinutes
			// 
			this->lblMinutes->AutoSize = true;
			this->lblMinutes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblMinutes->ForeColor = System::Drawing::Color::White;
			this->lblMinutes->Location = System::Drawing::Point(160, 268);
			this->lblMinutes->Name = L"lblMinutes";
			this->lblMinutes->Size = System::Drawing::Size(87, 63);
			this->lblMinutes->TabIndex = 6;
			this->lblMinutes->Text = L"00";
			// 
			// points
			// 
			this->points->AutoSize = true;
			this->points->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->points->ForeColor = System::Drawing::Color::White;
			this->points->Location = System::Drawing::Point(121, 266);
			this->points->Name = L"points";
			this->points->Size = System::Drawing::Size(42, 63);
			this->points->TabIndex = 7;
			this->points->Text = L":";
			// 
			// upHour
			// 
			this->upHour->Cursor = System::Windows::Forms::Cursors::Hand;
			this->upHour->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"upHour.Image")));
			this->upHour->Location = System::Drawing::Point(64, 238);
			this->upHour->Name = L"upHour";
			this->upHour->Size = System::Drawing::Size(35, 27);
			this->upHour->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->upHour->TabIndex = 8;
			this->upHour->TabStop = false;
			this->upHour->Tag = L"zwiekszGodzina";
			this->upHour->Click += gcnew System::EventHandler(this, &MyForm::upTime_Click);
			// 
			// downHour
			// 
			this->downHour->Cursor = System::Windows::Forms::Cursors::Hand;
			this->downHour->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downHour.Image")));
			this->downHour->Location = System::Drawing::Point(64, 334);
			this->downHour->Name = L"downHour";
			this->downHour->Size = System::Drawing::Size(35, 27);
			this->downHour->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->downHour->TabIndex = 9;
			this->downHour->TabStop = false;
			this->downHour->Tag = L"zmniejszGodzina";
			this->downHour->Click += gcnew System::EventHandler(this, &MyForm::downTime_Click);
			// 
			// downMinut
			// 
			this->downMinut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->downMinut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downMinut.Image")));
			this->downMinut->Location = System::Drawing::Point(185, 334);
			this->downMinut->Name = L"downMinut";
			this->downMinut->Size = System::Drawing::Size(35, 27);
			this->downMinut->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->downMinut->TabIndex = 11;
			this->downMinut->TabStop = false;
			this->downMinut->Tag = L"zmniejszMinuta";
			this->downMinut->Click += gcnew System::EventHandler(this, &MyForm::downTime_Click);
			// 
			// upMinut
			// 
			this->upMinut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->upMinut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"upMinut.Image")));
			this->upMinut->Location = System::Drawing::Point(185, 238);
			this->upMinut->Name = L"upMinut";
			this->upMinut->Size = System::Drawing::Size(35, 27);
			this->upMinut->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->upMinut->TabIndex = 10;
			this->upMinut->TabStop = false;
			this->upMinut->Tag = L"zwiekszMinuta";
			this->upMinut->Click += gcnew System::EventHandler(this, &MyForm::upTime_Click);
			// 
			// chooseOption
			// 
			this->chooseOption->AutoSize = true;
			this->chooseOption->BackColor = System::Drawing::Color::Transparent;
			this->chooseOption->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 5, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(238)));
			this->chooseOption->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->chooseOption->Location = System::Drawing::Point(14, 182);
			this->chooseOption->Name = L"chooseOption";
			this->chooseOption->Size = System::Drawing::Size(182, 25);
			this->chooseOption->TabIndex = 13;
			this->chooseOption->Text = L"CHOOSE OPTIONS";
			// 
			// picOptions
			// 
			this->picOptions->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picOptions->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picOptions.Image")));
			this->picOptions->Location = System::Drawing::Point(222, 152);
			this->picOptions->Name = L"picOptions";
			this->picOptions->Size = System::Drawing::Size(25, 55);
			this->picOptions->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picOptions->TabIndex = 14;
			this->picOptions->TabStop = false;
			this->picOptions->Click += gcnew System::EventHandler(this, &MyForm::choose_options);
			// 
			// picPower
			// 
			this->picPower->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picPower.Image")));
			this->picPower->Location = System::Drawing::Point(84, 12);
			this->picPower->Name = L"picPower";
			this->picPower->Size = System::Drawing::Size(123, 117);
			this->picPower->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picPower->TabIndex = 15;
			this->picPower->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kropki szare.png");
			this->imageList1->Images->SetKeyName(1, L"kropki niebieskie.png");
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"ArrowSmall1.png");
			this->imageList2->Images->SetKeyName(1, L"ArrowSmall.png");
			this->imageList2->Images->SetKeyName(2, L"ArrowSmallDown1.png");
			this->imageList2->Images->SetKeyName(3, L"ArrowSmallDown.png");
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// specificButton
			// 
			this->specificButton->AutoSize = true;
			this->specificButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 8.25F));
			this->specificButton->ForeColor = System::Drawing::Color::White;
			this->specificButton->Location = System::Drawing::Point(84, 266);
			this->specificButton->Name = L"specificButton";
			this->specificButton->Size = System::Drawing::Size(121, 17);
			this->specificButton->TabIndex = 16;
			this->specificButton->TabStop = true;
			this->specificButton->Text = L"AT SPECIFIC TIME";
			this->specificButton->UseVisualStyleBackColor = true;
			this->specificButton->Visible = false;
			// 
			// periodButton
			// 
			this->periodButton->AutoSize = true;
			this->periodButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 8.25F));
			this->periodButton->ForeColor = System::Drawing::Color::White;
			this->periodButton->Location = System::Drawing::Point(84, 314);
			this->periodButton->Name = L"periodButton";
			this->periodButton->Size = System::Drawing::Size(152, 17);
			this->periodButton->TabIndex = 17;
			this->periodButton->TabStop = true;
			this->periodButton->Text = L"AFTER PERIOD OF TIME";
			this->periodButton->UseVisualStyleBackColor = true;
			this->periodButton->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(288, 446);
			this->Controls->Add(this->periodButton);
			this->Controls->Add(this->specificButton);
			this->Controls->Add(this->picPower);
			this->Controls->Add(this->picOptions);
			this->Controls->Add(this->chooseOption);
			this->Controls->Add(this->downMinut);
			this->Controls->Add(this->upMinut);
			this->Controls->Add(this->downHour);
			this->Controls->Add(this->upHour);
			this->Controls->Add(this->points);
			this->Controls->Add(this->lblMinutes);
			this->Controls->Add(this->lblHour);
			this->Controls->Add(this->turnOff);
			this->Controls->Add(this->startButton);
			this->Name = L"MyForm";
			this->Text = L"TurnOff App";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upHour))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->downHour))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->downMinut))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upMinut))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picOptions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPower))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		int minuty, godzina, m, h;
		bool wcisniety=true;
		bool wcisnietyUp = true;
		bool wcisnietyDown = true;
		int now_hour, now_minutes;

	private: Void visible_options(bool x) {
		upHour->Visible = x;
		downHour->Visible = x;
		upMinut->Visible = x;
		downMinut->Visible = x;
		lblHour->Visible = x;
		lblMinutes->Visible = x;
		points->Visible = x;
		specificButton->Visible =! x;
		periodButton->Visible =! x;
	}

private: System::Void choose_options(System::Object^ sender, System::EventArgs^ e) {
	
		// TODO: pocz¹tkowo cos sie jebie
		picOptions->Image = imageList1->Images[1];
		visible_options(false);
		if (wcisniety) {
			picOptions->Image = imageList1->Images[0];
			visible_options(true);
		}
		wcisniety =! wcisniety;	
}
	// Sposób wyœwietlania czasu przy zwiêkszaniu
	private: Void displayUp() {
		if (godzina > 9) {
			lblHour->Text = Convert::ToString(godzina);
			if (godzina > 12) {
				godzina = 0;
				lblHour->Text = Convert::ToString(godzina) + "0";
			}
		}
		else {
			lblHour->Text = "0" + Convert::ToString(godzina);
		}

		if (minuty > 9) {
			lblMinutes->Text = Convert::ToString(minuty);
			if (minuty > 60) {
				minuty = 0;
				lblMinutes->Text = Convert::ToString(minuty) + "0";
			}
		}
		else {
			lblMinutes->Text = "0" + Convert::ToString(minuty);
		}

	}

	// Sposób wyœwietlania czasu przy zmniejszaniu
	private: Void displayDown() {
		if (godzina > 9) {
			lblHour->Text = Convert::ToString(godzina);
		}
		else {
			lblHour->Text = "0" + Convert::ToString(godzina);
			if (godzina < 0) {
				godzina = 12;
				lblHour->Text = Convert::ToString(godzina);
			}
		}

		if (minuty > 9) {
			lblMinutes->Text = Convert::ToString(minuty);
		}
		else {
			lblMinutes->Text = "0" + Convert::ToString(minuty);
			if (minuty < 0) {
				minuty = 60;
				lblMinutes->Text = Convert::ToString(minuty);
			}
		}
	
	}

// Zwiêkszanie czasu
private: System::Void upTime_Click(System::Object^ sender, System::EventArgs^ e) {
	
	PictureBox^ obrazek = (PictureBox^)sender; // umo¿liwia ->Tag = ..

	// zwiêkszanie godzin jeœli strza³ka jest wciœniêta
	if ((wcisnietyUp == true) && (obrazek->Tag == "zwiekszGodzina")) {
		godzina++;
		displayUp();
	}
	// zwiêkszanie minut jeœli strza³ka jest wciœniêta
	else if ((wcisnietyUp == true) && (obrazek->Tag == "zwiekszMinuta")) {
		minuty++;
		displayUp();
	}
}



// Zmniejszanie czasu
private: System::Void downTime_Click(System::Object^ sender, System::EventArgs^ e) {

	PictureBox^ obrazek = (PictureBox^)sender;
	
	if ((wcisnietyDown == true) && (obrazek->Tag == "zmniejszGodzina")) {
		godzina--;
		displayDown();
	}
	else if ((wcisnietyDown == true) && (obrazek->Tag == "zmniejszMinuta")) {
		minuty--;
		displayDown();
	}
}


// Akcja po wciœniêciu przycisku START
private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Start();
	
}



private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	// declaring argument of time()
	time_t now = time(0);
	tm* ltm = localtime(&now);

	if (specificButton->Checked) {
		now_hour = ltm->tm_hour;
		now_minutes = ltm->tm_min;

		upHour->Visible = false;
		downHour->Visible = false;
		upMinut->Visible = false;
		downMinut->Visible = false;

		lblHour->Text = Convert::ToString(now_hour);
		lblMinutes->Text = Convert::ToString(now_minutes);


		if (now_hour == godzina && now_minutes == minuty) MessageBox::Show("Komputer siê wy³¹cza", "TurnOff", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
	else if (periodButton->Checked) {

		upHour->Visible = false;
		downHour->Visible = false;
		upMinut->Visible = false;
		downMinut->Visible = false;


		if (godzina > 0 && minuty==0) {
			godzina--;
			displayUp();
		}
		minuty--;
		displayDown();
		if (godzina == 0 && minuty == 0) {
			timer1->Stop();
			MessageBox::Show("Komputer siê wy³¹cza", "TurnOff", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	

}
};
}
