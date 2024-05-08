#include "MyForm1.h"

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ UserName;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Password;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ LoginBtn;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->LoginBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// UserName
			// 
			this->UserName->BackColor = System::Drawing::SystemColors::MenuText;
			this->UserName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName->ForeColor = System::Drawing::Color::Gold;
			this->UserName->Location = System::Drawing::Point(112, 183);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(181, 15);
			this->UserName->TabIndex = 0;
			this->UserName->Text = L"User name";
			this->UserName->MouseEnter += gcnew System::EventHandler(this, &MyForm::UserName_MouseEnter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(148, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 64);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(51, 185);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(24, 24);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(51, 250);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(24, 26);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(60, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Library Management System";
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::SystemColors::MenuText;
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->ForeColor = System::Drawing::Color::Gold;
			this->Password->Location = System::Drawing::Point(112, 252);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(181, 15);
			this->Password->TabIndex = 6;
			this->Password->Text = L"Password";
			this->Password->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Password_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(112, 203);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(181, 4);
			this->panel1->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(112, 274);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(181, 4);
			this->panel2->TabIndex = 8;
			// 
			// LoginBtn
			// 
			this->LoginBtn->BackColor = System::Drawing::Color::Gold;
			this->LoginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LoginBtn->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LoginBtn->Location = System::Drawing::Point(106, 311);
			this->LoginBtn->Name = L"LoginBtn";
			this->LoginBtn->Size = System::Drawing::Size(144, 32);
			this->LoginBtn->TabIndex = 9;
			this->LoginBtn->Text = L"Login";
			this->LoginBtn->UseVisualStyleBackColor = false;
			this->LoginBtn->Click += gcnew System::EventHandler(this, &MyForm::LoginBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(359, 399);
			this->Controls->Add(this->LoginBtn);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->UserName);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->TransparencyKey = System::Drawing::Color::DimGray;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserName_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void UserName_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (UserName->Text == "User name") {
		UserName->Clear();
	}
}
private: System::Void Password_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (Password->Text == "Password") {
		Password->Clear();
	}
}
private: System::Void LoginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (UserName->Text == "Admin" && Password->Text == "Pass") {
		MyForm::Hide();
		MyForm1^ newForm = gcnew MyForm1; 
		newForm->Show();
	}
	else {
		MessageBox::Show("Wrong Login Credentials", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
