#pragma once

namespace DietPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for DietPlanner
	/// </summary>
	public ref class DietPlanner : public System::Windows::Forms::Form
	{
	public:
		DietPlanner(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DietPlanner()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private:
		String^ oConnectionString;
		MySqlConnection^ oConnectMySqlConnection;
		bool bSQLSucces = false;
	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ TXT_RECEPIE_NAME;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TXT_PROTEINS;

	private: System::Windows::Forms::TextBox^ TXT_FATS;

	private: System::Windows::Forms::TextBox^ TXT_CARBS;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ BTN_CONNECT;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TXT_PASSWORD;
	private: System::Windows::Forms::TextBox^ TXT_LOGIN;
	private: System::Windows::Forms::Button^ BTN_SEND;
	private: System::Windows::Forms::TextBox^ TXT_DESCRIPTION;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->TXT_RECEPIE_NAME = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->BTN_SEND = (gcnew System::Windows::Forms::Button());
			this->BTN_CONNECT = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TXT_PASSWORD = (gcnew System::Windows::Forms::TextBox());
			this->TXT_LOGIN = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TXT_PROTEINS = (gcnew System::Windows::Forms::TextBox());
			this->TXT_FATS = (gcnew System::Windows::Forms::TextBox());
			this->TXT_CARBS = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->TXT_DESCRIPTION = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(231, 375);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Zapisz";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// TXT_RECEPIE_NAME
			// 
			this->TXT_RECEPIE_NAME->Location = System::Drawing::Point(6, 28);
			this->TXT_RECEPIE_NAME->Name = L"TXT_RECEPIE_NAME";
			this->TXT_RECEPIE_NAME->Size = System::Drawing::Size(315, 20);
			this->TXT_RECEPIE_NAME->TabIndex = 3;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 30);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(600, 430);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->TXT_DESCRIPTION);
			this->tabPage2->Controls->Add(this->BTN_SEND);
			this->tabPage2->Controls->Add(this->BTN_CONNECT);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->TXT_PASSWORD);
			this->tabPage2->Controls->Add(this->TXT_LOGIN);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->TXT_PROTEINS);
			this->tabPage2->Controls->Add(this->TXT_FATS);
			this->tabPage2->Controls->Add(this->TXT_CARBS);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->TXT_RECEPIE_NAME);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(592, 404);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Informacje podstawowe";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &DietPlanner::tabPage2_Click);
			// 
			// BTN_SEND
			// 
			this->BTN_SEND->Location = System::Drawing::Point(4, 203);
			this->BTN_SEND->Name = L"BTN_SEND";
			this->BTN_SEND->Size = System::Drawing::Size(315, 23);
			this->BTN_SEND->TabIndex = 20;
			this->BTN_SEND->Text = L"Wyœlij";
			this->BTN_SEND->UseVisualStyleBackColor = true;
			this->BTN_SEND->Click += gcnew System::EventHandler(this, &DietPlanner::BTN_SEND_Click);
			// 
			// BTN_CONNECT
			// 
			this->BTN_CONNECT->Location = System::Drawing::Point(457, 147);
			this->BTN_CONNECT->Name = L"BTN_CONNECT";
			this->BTN_CONNECT->Size = System::Drawing::Size(100, 23);
			this->BTN_CONNECT->TabIndex = 19;
			this->BTN_CONNECT->Text = L"Connect";
			this->BTN_CONNECT->UseVisualStyleBackColor = true;
			this->BTN_CONNECT->Click += gcnew System::EventHandler(this, &DietPlanner::OnConnectionButtonClick);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(398, 123);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Password";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(418, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Login";
			// 
			// TXT_PASSWORD
			// 
			this->TXT_PASSWORD->Location = System::Drawing::Point(457, 120);
			this->TXT_PASSWORD->Name = L"TXT_PASSWORD";
			this->TXT_PASSWORD->PasswordChar = '*';
			this->TXT_PASSWORD->Size = System::Drawing::Size(100, 20);
			this->TXT_PASSWORD->TabIndex = 16;
			// 
			// TXT_LOGIN
			// 
			this->TXT_LOGIN->Location = System::Drawing::Point(457, 91);
			this->TXT_LOGIN->Name = L"TXT_LOGIN";
			this->TXT_LOGIN->Size = System::Drawing::Size(100, 20);
			this->TXT_LOGIN->TabIndex = 15;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(457, 375);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(129, 23);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Nastêpny krok";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(85, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Liczba kalorii:";
			this->label5->Click += gcnew System::EventHandler(this, &DietPlanner::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(220, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Bia³ka";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(113, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"T³uszcze";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Weglowodany";
			// 
			// TXT_PROTEINS
			// 
			this->TXT_PROTEINS->Location = System::Drawing::Point(220, 77);
			this->TXT_PROTEINS->Name = L"TXT_PROTEINS";
			this->TXT_PROTEINS->Size = System::Drawing::Size(100, 20);
			this->TXT_PROTEINS->TabIndex = 7;
			// 
			// TXT_FATS
			// 
			this->TXT_FATS->Location = System::Drawing::Point(113, 77);
			this->TXT_FATS->Name = L"TXT_FATS";
			this->TXT_FATS->Size = System::Drawing::Size(100, 20);
			this->TXT_FATS->TabIndex = 6;
			// 
			// TXT_CARBS
			// 
			this->TXT_CARBS->Location = System::Drawing::Point(6, 77);
			this->TXT_CARBS->Name = L"TXT_CARBS";
			this->TXT_CARBS->Size = System::Drawing::Size(100, 20);
			this->TXT_CARBS->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nazwa przepisu";
			this->label1->Click += gcnew System::EventHandler(this, &DietPlanner::label1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(592, 404);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Sk³adniki";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(6, 375);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 23);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Poprzedni krok";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &DietPlanner::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(451, 375);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(135, 23);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Natêpny krok";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(104, 51);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Dodaj sk³adnik";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pomidor", L"Szynka", L"Dodaj nowy..." });
			this->comboBox1->Location = System::Drawing::Point(10, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(309, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Sk³adnik numer 1:";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(592, 404);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Instrukcje";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 375);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Poprzedni krok";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(451, 375);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(135, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Natêpny krok";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(102, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Dodaj krok";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(7, 24);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(265, 72);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"Dodaj krok";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Krok 1:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->button3);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(592, 404);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"Podsumowanie";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(6, 375);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 23);
			this->button10->TabIndex = 6;
			this->button10->Text = L"Poprzedni krok";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(451, 375);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(135, 23);
			this->button12->TabIndex = 7;
			this->button12->Text = L"Natêpny krok";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(247, 466);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 32);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(294, 466);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(41, 32);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(341, 466);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 32);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// TXT_DESCRIPTION
			// 
			this->TXT_DESCRIPTION->Location = System::Drawing::Point(7, 123);
			this->TXT_DESCRIPTION->Name = L"TXT_DESCRIPTION";
			this->TXT_DESCRIPTION->Size = System::Drawing::Size(314, 20);
			this->TXT_DESCRIPTION->TabIndex = 21;
			// 
			// DietPlanner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 510);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"DietPlanner";
			this->Text = L"DietPlanner";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bindingSource1_CurrentChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OnConnectionButtonClick(System::Object^ sender, System::EventArgs^ e) 
{
	oConnectionString = L"datasource=localhost;port=3306;username=" + TXT_LOGIN->Text + ";password=" + TXT_PASSWORD->Text;
	try
	{
		oConnectMySqlConnection = gcnew MySqlConnection(oConnectionString);
		oConnectMySqlConnection->Open();
		bSQLSucces = true;
	}
	catch (Exception^ oException)
	{
		MessageBox::Show(oException->Message);
	}
	if (bSQLSucces)
	{
		MessageBox::Show(L"Po³¹czenie z baz¹ nawi¹zane");
	}
}
private: System::Void BTN_SEND_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		MySqlCommand oAddMySqlCommand(L"insert into dietplanner.recipie_table (name, disscription, macro_protein, macro_carbs, macro_fats) values ('" + TXT_RECEPIE_NAME->Text
			+ "', '" + TXT_DESCRIPTION->Text + "', '" + TXT_PROTEINS->Text + "', '" + TXT_CARBS->Text + "', '" + TXT_FATS->Text + "')", oConnectMySqlConnection);
		oAddMySqlCommand.ExecuteReader();
	}
	catch (Exception^ oException)
	{
		MessageBox::Show(oException->Message);
	}

}
};
}
