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
			Initial_Conditions();
			dateTimePicker2->MinDate = DateTime::Now;

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



	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox5;










	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton18;
	private: System::Windows::Forms::RadioButton^ radioButton19;
	private: System::Windows::Forms::RadioButton^ radioButton20;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button16;







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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel13->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(13, 716);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyMainMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 46);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(188, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add Task";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyMainMenu::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(14, 80);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(188, 28);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Edit Task";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyMainMenu::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(31, 292);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(173, 28);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Visualize";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyMainMenu::button6_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->flowLayoutPanel2);
			this->panel2->Controls->Add(this->dateTimePicker3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Location = System::Drawing::Point(217, 261);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1150, 383);
			this->panel2->TabIndex = 4;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->AutoScrollMargin = System::Drawing::Size(10, 0);
			this->flowLayoutPanel2->Location = System::Drawing::Point(2, 42);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(1138, 339);
			this->flowLayoutPanel2->TabIndex = 9;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L"MMMM dd,  dddd";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(6, 9);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(167, 20);
			this->dateTimePicker3->TabIndex = 3;
			this->dateTimePicker3->ValueChanged += gcnew System::EventHandler(this, &MyMainMenu::dateTimePicker3_ValueChanged);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 31);
			this->label3->TabIndex = 2;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->AutoScrollMargin = System::Drawing::Size(10, 0);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 42);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1137, 339);
			this->flowLayoutPanel1->TabIndex = 1;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyMainMenu::flowLayoutPanel1_Paint);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1920, 45);
			this->panel3->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(609, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Overview";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Controls->Add(this->label28);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label26);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label25);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->panel10);
			this->panel4->Controls->Add(this->panel9);
			this->panel4->Controls->Add(this->dateTimePicker2);
			this->panel4->Controls->Add(this->dateTimePicker1);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->textBox5);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Location = System::Drawing::Point(217, 43);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(951, 299);
			this->panel4->TabIndex = 3;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(797, 171);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(13, 13);
			this->label28->TabIndex = 6;
			this->label28->Text = L"5";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(797, 131);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 6;
			this->label23->Text = L"5";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(767, 171);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 13);
			this->label27->TabIndex = 6;
			this->label27->Text = L"4";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(767, 131);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(13, 13);
			this->label22->TabIndex = 6;
			this->label22->Text = L"4";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(737, 171);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(13, 13);
			this->label26->TabIndex = 6;
			this->label26->Text = L"3";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(737, 131);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 13);
			this->label21->TabIndex = 6;
			this->label21->Text = L"3";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(707, 171);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(13, 13);
			this->label25->TabIndex = 6;
			this->label25->Text = L"2";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(707, 131);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"2";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(677, 171);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(13, 13);
			this->label24->TabIndex = 6;
			this->label24->Text = L"1";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(677, 131);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 6;
			this->label18->Text = L"1";
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->radioButton6);
			this->panel10->Controls->Add(this->radioButton7);
			this->panel10->Controls->Add(this->radioButton8);
			this->panel10->Controls->Add(this->radioButton9);
			this->panel10->Controls->Add(this->radioButton10);
			this->panel10->Location = System::Drawing::Point(676, 150);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(141, 23);
			this->panel10->TabIndex = 5;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(120, 5);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(14, 13);
			this->radioButton6->TabIndex = 4;
			this->radioButton6->TabStop = true;
			this->radioButton6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(90, 5);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(14, 13);
			this->radioButton7->TabIndex = 4;
			this->radioButton7->TabStop = true;
			this->radioButton7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton8->Location = System::Drawing::Point(60, 5);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(14, 13);
			this->radioButton8->TabIndex = 4;
			this->radioButton8->TabStop = true;
			this->radioButton8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton9->Location = System::Drawing::Point(30, 5);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(14, 13);
			this->radioButton9->TabIndex = 4;
			this->radioButton9->TabStop = true;
			this->radioButton9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton10->Location = System::Drawing::Point(0, 5);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(14, 13);
			this->radioButton10->TabIndex = 4;
			this->radioButton10->TabStop = true;
			this->radioButton10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->radioButton5);
			this->panel9->Controls->Add(this->radioButton4);
			this->panel9->Controls->Add(this->radioButton3);
			this->panel9->Controls->Add(this->radioButton2);
			this->panel9->Controls->Add(this->radioButton1);
			this->panel9->Location = System::Drawing::Point(676, 110);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(141, 23);
			this->panel9->TabIndex = 5;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(120, 5);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(14, 13);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(90, 5);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(60, 5);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(30, 5);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(0, 5);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->AllowDrop = true;
			this->dateTimePicker2->CustomFormat = L"MMMM dd, hh:mm:tt";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(170, 108);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(226, 26);
			this->dateTimePicker2->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->AllowDrop = true;
			this->dateTimePicker1->CustomFormat = L"MMMM dd, hh:mm:tt";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(169, 143);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(226, 26);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyMainMenu::dateTimePicker1_ValueChanged);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(250, 202);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 33);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Cancel";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyMainMenu::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(169, 202);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 33);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Add";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyMainMenu::button7_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(599, 153);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(71, 20);
			this->label19->TabIndex = 1;
			this->label19->Text = L"DIfficulty";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(119, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Start";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(91, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 20);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Deadline";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(582, 113);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(90, 20);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Importance";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(75, 79);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Description";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(607, 73);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 20);
			this->label16->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(170, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(349, 26);
			this->textBox2->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(126, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Title";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(957, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(118, 26);
			this->textBox5->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(170, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 26);
			this->textBox1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->panel13);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->panel1);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->panel2);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1370, 749);
			this->panel5->TabIndex = 5;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(38, 421);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(150, 28);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Arrange";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyMainMenu::button11_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(125, 116);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 7;
			this->button9->Text = L"Edit Task";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyMainMenu::button9_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(125, 145);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Delete Task";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyMainMenu::button3_Click_1);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(799, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(537, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Description";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(601, 46);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(205, 25);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Title";
			this->label11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(403, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"End";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(214, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Start";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoScrollMargin = System::Drawing::Size(0, 10);
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(217, 71);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1150, 177);
			this->panel1->TabIndex = 5;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoScrollMargin = System::Drawing::Size(0, 10);
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.92157F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.84314F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.23529F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				553)));
			this->tableLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1127, 44);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(23, 12);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(137, 26);
			this->button12->TabIndex = 9;
			this->button12->Text = L"Sort By Time";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyMainMenu::button12_Click);
			// 
			// panel6
			// 
			this->panel6->AutoScroll = true;
			this->panel6->BackColor = System::Drawing::Color::Gainsboro;
			this->panel6->Controls->Add(this->listBox1);
			this->panel6->Location = System::Drawing::Point(217, 71);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1150, 184);
			this->panel6->TabIndex = 6;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1150, 184);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyMainMenu::listBox1_SelectedIndexChanged);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Info;
			this->panel7->Controls->Add(this->label29);
			this->panel7->Controls->Add(this->label30);
			this->panel7->Controls->Add(this->label31);
			this->panel7->Controls->Add(this->label32);
			this->panel7->Controls->Add(this->label33);
			this->panel7->Controls->Add(this->label34);
			this->panel7->Controls->Add(this->label35);
			this->panel7->Controls->Add(this->label36);
			this->panel7->Controls->Add(this->label37);
			this->panel7->Controls->Add(this->label38);
			this->panel7->Controls->Add(this->panel11);
			this->panel7->Controls->Add(this->panel12);
			this->panel7->Controls->Add(this->label39);
			this->panel7->Controls->Add(this->label40);
			this->panel7->Controls->Add(this->label41);
			this->panel7->Controls->Add(this->textBox6);
			this->panel7->Controls->Add(this->dateTimePicker5);
			this->panel7->Controls->Add(this->dateTimePicker4);
			this->panel7->Controls->Add(this->textBox4);
			this->panel7->Controls->Add(this->textBox3);
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Controls->Add(this->button4);
			this->panel7->Location = System::Drawing::Point(217, 71);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(951, 207);
			this->panel7->TabIndex = 7;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(828, 129);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(13, 13);
			this->label29->TabIndex = 13;
			this->label29->Text = L"5";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(828, 89);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 13);
			this->label30->TabIndex = 14;
			this->label30->Text = L"5";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(798, 129);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(13, 13);
			this->label31->TabIndex = 15;
			this->label31->Text = L"4";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(798, 89);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(13, 13);
			this->label32->TabIndex = 16;
			this->label32->Text = L"4";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(768, 129);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(13, 13);
			this->label33->TabIndex = 17;
			this->label33->Text = L"3";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(768, 89);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(13, 13);
			this->label34->TabIndex = 18;
			this->label34->Text = L"3";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(738, 129);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(13, 13);
			this->label35->TabIndex = 19;
			this->label35->Text = L"2";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(738, 89);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(13, 13);
			this->label36->TabIndex = 20;
			this->label36->Text = L"2";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(708, 129);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(13, 13);
			this->label37->TabIndex = 21;
			this->label37->Text = L"1";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(708, 89);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(13, 13);
			this->label38->TabIndex = 22;
			this->label38->Text = L"1";
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->radioButton11);
			this->panel11->Controls->Add(this->radioButton12);
			this->panel11->Controls->Add(this->radioButton13);
			this->panel11->Controls->Add(this->radioButton14);
			this->panel11->Controls->Add(this->radioButton15);
			this->panel11->Location = System::Drawing::Point(707, 108);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(141, 23);
			this->panel11->TabIndex = 11;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton11->Location = System::Drawing::Point(120, 5);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(14, 13);
			this->radioButton11->TabIndex = 4;
			this->radioButton11->TabStop = true;
			this->radioButton11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton12->Location = System::Drawing::Point(90, 5);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(14, 13);
			this->radioButton12->TabIndex = 4;
			this->radioButton12->TabStop = true;
			this->radioButton12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton13->Location = System::Drawing::Point(60, 5);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(14, 13);
			this->radioButton13->TabIndex = 4;
			this->radioButton13->TabStop = true;
			this->radioButton13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton14->Location = System::Drawing::Point(30, 5);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(14, 13);
			this->radioButton14->TabIndex = 4;
			this->radioButton14->TabStop = true;
			this->radioButton14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton15->Location = System::Drawing::Point(0, 5);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(14, 13);
			this->radioButton15->TabIndex = 4;
			this->radioButton15->TabStop = true;
			this->radioButton15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->radioButton16);
			this->panel12->Controls->Add(this->radioButton17);
			this->panel12->Controls->Add(this->radioButton18);
			this->panel12->Controls->Add(this->radioButton19);
			this->panel12->Controls->Add(this->radioButton20);
			this->panel12->Location = System::Drawing::Point(707, 68);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(141, 23);
			this->panel12->TabIndex = 12;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton16->Location = System::Drawing::Point(120, 5);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(14, 13);
			this->radioButton16->TabIndex = 4;
			this->radioButton16->TabStop = true;
			this->radioButton16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton17->Location = System::Drawing::Point(90, 5);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(14, 13);
			this->radioButton17->TabIndex = 4;
			this->radioButton17->TabStop = true;
			this->radioButton17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton18->Location = System::Drawing::Point(60, 5);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(14, 13);
			this->radioButton18->TabIndex = 4;
			this->radioButton18->TabStop = true;
			this->radioButton18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton19->Location = System::Drawing::Point(30, 5);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(14, 13);
			this->radioButton19->TabIndex = 4;
			this->radioButton19->TabStop = true;
			this->radioButton19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton20->Location = System::Drawing::Point(0, 5);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(14, 13);
			this->radioButton20->TabIndex = 4;
			this->radioButton20->TabStop = true;
			this->radioButton20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(630, 111);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(71, 20);
			this->label39->TabIndex = 8;
			this->label39->Text = L"DIfficulty";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(613, 71);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(90, 20);
			this->label40->TabIndex = 9;
			this->label40->Text = L"Importance";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(638, 31);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(63, 20);
			this->label41->TabIndex = 10;
			this->label41->Text = L"Subject";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(707, 29);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(184, 26);
			this->textBox6->TabIndex = 7;
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->AllowDrop = true;
			this->dateTimePicker5->CustomFormat = L"MMMM dd, hh:mm:tt";
			this->dateTimePicker5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker5->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker5->Location = System::Drawing::Point(130, 114);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->ShowUpDown = true;
			this->dateTimePicker5->Size = System::Drawing::Size(226, 26);
			this->dateTimePicker5->TabIndex = 4;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->AllowDrop = true;
			this->dateTimePicker4->CustomFormat = L"MMMM dd, hh:mm:tt";
			this->dateTimePicker4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker4->Location = System::Drawing::Point(132, 86);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->ShowUpDown = true;
			this->dateTimePicker4->Size = System::Drawing::Size(226, 26);
			this->dateTimePicker4->TabIndex = 3;
			this->dateTimePicker4->ValueChanged += gcnew System::EventHandler(this, &MyMainMenu::dateTimePicker4_ValueChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(130, 54);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(389, 26);
			this->textBox4->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(130, 25);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(226, 26);
			this->textBox3->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(27, 114);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(98, 23);
			this->label15->TabIndex = 1;
			this->label15->Text = L"End";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(27, 82);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 23);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Start";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(26, 52);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(98, 23);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Description";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(26, 23);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 23);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Title";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(92, 164);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(77, 30);
			this->button10->TabIndex = 6;
			this->button10->Text = L"Cancel";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyMainMenu::button10_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(7, 164);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 30);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Done";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyMainMenu::button4_Click);
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->button16);
			this->panel8->Controls->Add(this->button13);
			this->panel8->Controls->Add(this->button12);
			this->panel8->Location = System::Drawing::Point(31, 455);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(171, 114);
			this->panel8->TabIndex = 8;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(24, 74);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(137, 26);
			this->button16->TabIndex = 9;
			this->button16->Text = L"Sort By Importance";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyMainMenu::button16_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(24, 44);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(137, 26);
			this->button13->TabIndex = 9;
			this->button13->Text = L"Sort By Difficultness";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyMainMenu::button13_Click);
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->button15);
			this->panel13->Controls->Add(this->button14);
			this->panel13->Location = System::Drawing::Point(31, 326);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(171, 79);
			this->panel13->TabIndex = 9;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(27, 43);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(130, 23);
			this->button15->TabIndex = 0;
			this->button15->Text = L"Priority meter";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyMainMenu::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(27, 14);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(130, 23);
			this->button14->TabIndex = 0;
			this->button14->Text = L"Timeline";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyMainMenu::button14_Click_1);
			// 
			// MyMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Name = L"MyMainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyMainMenu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyMainMenu::MyMainMenu_FormClosing);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


		//Custom Functions
	private:
		System::Void Initial_Conditions();
		System::Void refreshData_Visual_Chart();
		System::Void refreshData_Visual_summary();
		System::Void refreshData_Overview_Table();
		System::Void refreshData_editremove_list();
		int getValue_Importance();
		int getValue_Difficulty();

		int getValue_Importance_edit();

		int getValue_Difficulty_edit();


		//Control Functions
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyMainMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dateTimePicker4_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);

	};
}
