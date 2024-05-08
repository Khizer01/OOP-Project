#pragma once

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ booksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewListOfBooksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ issueBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ returnBookToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ completeRecordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ Publication;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ price;



	private: System::Windows::Forms::TextBox^ bookName;
	private: System::Windows::Forms::TextBox^ authName;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ quantity;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ datePurchase;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->booksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewListOfBooksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issueBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->returnBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->completeRecordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->datePurchase = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->quantity = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::TextBox());
			this->bookName = (gcnew System::Windows::Forms::TextBox());
			this->authName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Publication = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Gold;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 6, 0, 6);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(25, 25);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->booksToolStripMenuItem,
					this->issueBookToolStripMenuItem, this->returnBookToolStripMenuItem, this->completeRecordToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(135, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(834, 55);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"Menu";
			// 
			// booksToolStripMenuItem
			// 
			this->booksToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->viewListOfBooksToolStripMenuItem,
					this->toolStripMenuItem1
			});
			this->booksToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"booksToolStripMenuItem.Image")));
			this->booksToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->booksToolStripMenuItem->Name = L"booksToolStripMenuItem";
			this->booksToolStripMenuItem->Padding = System::Windows::Forms::Padding(20, 10, 20, 10);
			this->booksToolStripMenuItem->Size = System::Drawing::Size(108, 49);
			this->booksToolStripMenuItem->Text = L"Books";
			// 
			// viewListOfBooksToolStripMenuItem
			// 
			this->viewListOfBooksToolStripMenuItem->Name = L"viewListOfBooksToolStripMenuItem";
			this->viewListOfBooksToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->viewListOfBooksToolStripMenuItem->Text = L"Add New Book";
			this->viewListOfBooksToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::viewListOfBooksToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem1->Text = L"View All Books";
			// 
			// issueBookToolStripMenuItem
			// 
			this->issueBookToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"issueBookToolStripMenuItem.Image")));
			this->issueBookToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->issueBookToolStripMenuItem->Name = L"issueBookToolStripMenuItem";
			this->issueBookToolStripMenuItem->Size = System::Drawing::Size(100, 49);
			this->issueBookToolStripMenuItem->Text = L"Issue Book";
			// 
			// returnBookToolStripMenuItem
			// 
			this->returnBookToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"returnBookToolStripMenuItem.Image")));
			this->returnBookToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->returnBookToolStripMenuItem->Name = L"returnBookToolStripMenuItem";
			this->returnBookToolStripMenuItem->Size = System::Drawing::Size(109, 49);
			this->returnBookToolStripMenuItem->Text = L"Return Book";
			// 
			// completeRecordToolStripMenuItem
			// 
			this->completeRecordToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"completeRecordToolStripMenuItem.Image")));
			this->completeRecordToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->completeRecordToolStripMenuItem->Name = L"completeRecordToolStripMenuItem";
			this->completeRecordToolStripMenuItem->Size = System::Drawing::Size(136, 49);
			this->completeRecordToolStripMenuItem->Text = L"Complete Record";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(63, 49);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::exitToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gold;
			this->panel1->Controls->Add(this->datePurchase);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->quantity);
			this->panel1->Controls->Add(this->price);
			this->panel1->Controls->Add(this->bookName);
			this->panel1->Controls->Add(this->authName);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Publication);
			this->panel1->Location = System::Drawing::Point(52, 76);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(727, 358);
			this->panel1->TabIndex = 2;
			// 
			// datePurchase
			// 
			this->datePurchase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePurchase->Location = System::Drawing::Point(320, 208);
			this->datePurchase->Name = L"datePurchase";
			this->datePurchase->Size = System::Drawing::Size(217, 21);
			this->datePurchase->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(585, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 30);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(585, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 30);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(37, 255);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Price";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Author Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(317, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(317, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Date of Purchase";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(317, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Publication";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Book Name";
			// 
			// quantity
			// 
			this->quantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantity->Location = System::Drawing::Point(320, 292);
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(217, 22);
			this->quantity->TabIndex = 6;
			// 
			// price
			// 
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->Location = System::Drawing::Point(40, 292);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(217, 22);
			this->price->TabIndex = 5;
			// 
			// bookName
			// 
			this->bookName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookName->Location = System::Drawing::Point(40, 122);
			this->bookName->Name = L"bookName";
			this->bookName->Size = System::Drawing::Size(217, 22);
			this->bookName->TabIndex = 3;
			// 
			// authName
			// 
			this->authName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->authName->Location = System::Drawing::Point(40, 208);
			this->authName->Name = L"authName";
			this->authName->Size = System::Drawing::Size(217, 22);
			this->authName->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(277, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Add New Book";
			// 
			// Publication
			// 
			this->Publication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Publication->Location = System::Drawing::Point(320, 122);
			this->Publication->Name = L"Publication";
			this->Publication->Size = System::Drawing::Size(217, 22);
			this->Publication->TabIndex = 0;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(834, 461);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to Exit?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
private: System::Void viewListOfBooksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Show();
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
}
};
}
