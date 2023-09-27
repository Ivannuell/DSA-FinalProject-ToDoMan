#pragma once


namespace Prototype_Model {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyMainMenu
	/// </summary>
	public ref class MyMainMenu : public System::Windows::Forms::Form
	{
	public:
		MyMainMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel2->Hide();
			panel4->Hide(); 
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(13, 560);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyMainMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add Task";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyMainMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 46);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 28);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Show All";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyMainMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 80);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 28);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Remove Task";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyMainMenu::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(9, 114);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(188, 28);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Edit Task";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyMainMenu::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(188, 28);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Visualize";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyMainMenu::button6_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoSize = true;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Location = System::Drawing::Point(217, 226);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1130, 344);
			this->panel2->TabIndex = 4;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 39);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1122, 300);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(514, 34);
			this->panel3->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(135, 11);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"10:00 AM";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(90, 11);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 23);
			this->label4->TabIndex = 0;
			this->label4->Text = L"9:00 AM";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(45, 11);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 23);
			this->label3->TabIndex = 0;
			this->label3->Text = L"8:00 AM";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 11);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 23);
			this->label5->TabIndex = 0;
			this->label5->Text = L"7:00 AM";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 10);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"7:00 AM";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(373, -1);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(201, 36);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Visualizinator";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(619, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Overview";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Controls->Add(this->dateTimePicker1);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Location = System::Drawing::Point(9, 43);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(348, 164);
			this->panel4->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->AllowDrop = true;
			this->dateTimePicker1->CustomFormat = L"MMMM dd, hh:mm:tt";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(76, 84);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(155, 20);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(156, 131);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Cancel";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyMainMenu::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(75, 131);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Add";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyMainMenu::button7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 84);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Deadline";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Description";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 20);
			this->textBox2->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Title";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 20);
			this->textBox1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->Controls->Add(this->tableLayoutPanel1);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->panel2);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1370, 595);
			this->panel5->TabIndex = 5;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				48.47397F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				51.52603F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				568)));
			this->tableLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tableLayoutPanel1->Location = System::Drawing::Point(217, 43);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.15337F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 23.92638F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1126, 164);
			this->tableLayoutPanel1->TabIndex = 4;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyMainMenu::tableLayoutPanel1_Paint);
			// 
			// MyMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 595);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Name = L"MyMainMenu";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyMainMenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyMainMenu::MyMainMenu_FormClosing);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Collections::Generic::List<bool>^ originalEnabledStates = gcnew System::Collections::Generic::List<bool>();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyMainMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
