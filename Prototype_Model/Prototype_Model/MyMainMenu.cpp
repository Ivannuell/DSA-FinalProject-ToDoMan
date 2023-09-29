#include "MyMainMenu.h"
#include "DatabaseHandler.h"
#include "EditTask.h"
#include <msclr/marshal_cppstd.h>
#include "individual_Task.h"

using namespace msclr::interop;
DatabaseHandler task_file{ ".\\Database\\Task.txt" };

System::Void Prototype_Model::MyMainMenu::Initial_Conditions()
{
	panel2->Hide();
	panel4->Hide();
	panel6->Hide();
	panel7->Hide();
	button3->Hide();
	button9->Hide();
	refreshData_Overview_Table();
}

inline System::Void Prototype_Model::MyMainMenu::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

inline System::Void Prototype_Model::MyMainMenu::MyMainMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}

inline System::Void Prototype_Model::MyMainMenu::button6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (panel2->Visible) {
		flowLayoutPanel1->Controls->Clear();
		panel2->Hide();
	}
	else {
		panel2->Show();
		refreshData_Visual_Chart();
	}
}

inline System::Void Prototype_Model::MyMainMenu::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();

	if (panel6->Visible) {
		panel6->Hide();
		button9->Hide();
		button3->Hide();
	}
	else {
		panel6->BringToFront();
		panel6->Show();
		button9->BringToFront();
		button9->Show();
		button3->BringToFront();
		button3->Show();
	}

	button9->Enabled = false;
	button3->Enabled = false;
	refreshData_Overview_Table();
	refreshData_editremove_list();
}

inline System::Void Prototype_Model::MyMainMenu::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == -1) {
		button9->Enabled = false;
		button3->Enabled = false;
	}
	else {
		button9->Enabled = true;
		button3->Enabled = true;
	}
}

inline System::Void Prototype_Model::MyMainMenu::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel7->Visible) {
		panel7->Hide();
	}
	else {
		panel5->Enabled = false;
		panel7->Show();
		panel7->BringToFront();
	}

	//TODO: Get the value of index selected in listbox
	// Take the index of that to getFromFile
	textBox3->Text = marshal_as<String^>(task_file.getParsedFromFile('|', (listBox1->SelectedIndex * 4) + 2));
	textBox4->Text = marshal_as<String^>(task_file.getParsedFromFile('|', (listBox1->SelectedIndex * 4) + 3));
}

inline System::Void Prototype_Model::MyMainMenu::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = textBox3->Text;
	String^ des = textBox4->Text;
	String^ start = dateTimePicker4->Value.ToString("MMMM dd, hh:mm:tt");
	String^ end = dateTimePicker5->Value.ToString("MMMM dd, hh:mm:tt");
	std::string data = marshal_as<std::string>(System::String::Concat(start, "|", end, "|", title, "|", des, "|"));

	task_file.insertToFile(data, listBox1->SelectedIndex);
	panel5->Enabled = true;

	refreshData_editremove_list();
	refreshData_Overview_Table();
	refreshData_Visual_Chart();

	panel7->Hide();
}

inline System::Void Prototype_Model::MyMainMenu::button10_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Enabled = true;
	panel7->Hide();
}

inline System::Void Prototype_Model::MyMainMenu::button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->RemoveAt(listBox1->SelectedIndex);
	task_file.removeFromFile(listBox1->SelectedIndex + 1);

	refreshData_editremove_list();
	refreshData_Overview_Table();
	refreshData_Visual_Chart();
}

inline System::Void Prototype_Model::MyMainMenu::button7_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ title = textBox1->Text;
	String^ descrip = textBox2->Text;
	String^ timeEnd = dateTimePicker1->Value.ToString("MMMM dd, hh:mm:tt");
	String^ timeStart = dateTimePicker2->Value.ToString("MMMM dd, hh:mm:tt");
	std::string data = marshal_as<std::string>(System::String::Concat(timeStart, "|", timeEnd, "|", title, "|", descrip, "|", "\n"));

	if (
		!task_file.addToFile(data)
		) {
		MessageBox::Show("Something went wrong while writing to file.");
	}
	panel5->Enabled = true;
	panel4->Hide();

	refreshData_Visual_Chart();
	refreshData_Overview_Table();
}

inline System::Void Prototype_Model::MyMainMenu::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Enabled = true;
	panel4->Hide();
}

inline System::Void Prototype_Model::MyMainMenu::dateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData_Visual_Chart();
}

inline System::Void Prototype_Model::MyMainMenu::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!panel4->Visible) {
		panel4->BringToFront();
		panel4->Show();
		panel6->Hide();
		panel5->Enabled = false;
		button2->Enabled = true;
	}
}

inline System::Void Prototype_Model::MyMainMenu::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	tableLayoutPanel1->Controls->Clear();

	for (int i = 0; i < (task_file.getLineNum() * 4) - 4; i++) {
		tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
		System::Windows::Forms::Label^ display_output = gcnew System::Windows::Forms::Label();
		String^ var1 = marshal_as<String^>(task_file.getParsedFromFile('|', i));

		display_output->Text = (var1->Trim());
		display_output->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		display_output->Font = gcnew System::Drawing::Font("Arial", 10);
		display_output->Anchor = AnchorStyles::Left;
		display_output->AutoSize = true;

		tableLayoutPanel1->Controls->Add(display_output);
	}
}

// Utility Functions
inline System::Void Prototype_Model::MyMainMenu::refreshData_Visual_Chart() {
	flowLayoutPanel1->Controls->Clear();

	flowLayoutPanel1->Controls->Add(panel3);  //Container of hours
	String^ h_num;
	//Hour labels being added
	for (int i = 0; i < 24; i++) {
		Label^ hour = gcnew Label();
		hour->AutoSize = false;
		hour->Margin = System::Windows::Forms::Padding(0);
		hour->Size = System::Drawing::Size(80, 40);
		hour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		hour->Location = System::Drawing::Point(80 * i, 4);
		if (i < 12)
			h_num = System::String::Concat((i + 1), ":00", " AM");
		else
			h_num = System::String::Concat((i - 11), ":00", " PM");


		hour->Text = h_num;
		hour->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
		panel3->Controls->Add(hour);
	}

	// Adding the custom task gant chart item.
	for (int i = 2; i < (task_file.getLineNum() * 4) - 4; i += 4) {
		individual_Task^ userControl = gcnew individual_Task();
		userControl->setTitle(task_file.getParsedFromFile('|', i)); // third value - Title
		std::string deadline = task_file.getParsedFromFile('|', i - 1); // Second value - Deadline
		std::string timeSetted = task_file.getParsedFromFile('|', i - 2); // first value - Started

		//Chart desegnated date value
		String^ value_M = dateTimePicker3->Value.ToString("MMMM");
		String^ value_D = dateTimePicker3->Value.ToString("dd");

		//Date value - This value will determine which date to put the item.
		int pos_M = timeSetted.find(' ');
		int pos_D = timeSetted.find(',');
		String^ month = marshal_as<String^>(timeSetted.substr(0, pos_M))->Trim();
		String^ day = marshal_as<String^>(timeSetted.substr(pos_M + 1, pos_D - (pos_M + 1)));

		//SettedTime - The hour where the task is going to start.
		int pos11 = timeSetted.find(',');
		int pos22 = timeSetted.find(':');
		int pos33 = timeSetted.find('|');
		String^ final1 = marshal_as<String^>(timeSetted.substr((pos11)+1, pos22 - (pos11 + 1)))->Trim();
		String^ final2 = marshal_as<String^>(timeSetted.substr((pos22)+1, pos33 - (pos22 + 1)))->Trim();
		int timeS = Convert::ToInt16(final1);
		if (final2 == "pm")
			timeS += 12;

		//Deadline - The hour where the task will end
		int pos1 = deadline.find(',');
		int pos2 = deadline.find(':');
		int pos3 = deadline.find('|');
		String^ final = marshal_as<String^>(deadline.substr(pos1 + 1, pos2 - (pos1 + 1)))->Trim();
		String^ final3 = marshal_as<String^>(deadline.substr(pos2 + 1, pos3 - (pos2 + 1)))->Trim();
		int timeF = Convert::ToInt16(final);
		if (final3 == "pm")
			timeF += 12;

		int duration;
		bool isSettedPM = (timeS >= 12);
		bool isEndPM = (timeF >= 12);

		if (isSettedPM && !isEndPM) {
			duration = (timeF + 12) - timeS;
		}
		else if (!isSettedPM && isEndPM) {
			duration = (timeF + 12) - timeS;
		}
		else {
			duration = timeF - timeS;
		}

		if (duration < 0) {
			duration += 24;
		}


		userControl->setTime(timeS - 1);
		userControl->setDuration(duration);

		if (month == value_M && day == value_D)
			flowLayoutPanel1->Controls->Add(userControl);
	}
}

inline System::Void Prototype_Model::MyMainMenu::refreshData_Overview_Table() {
	tableLayoutPanel1->Controls->Clear();

	for (int i = 0; i < (task_file.getLineNum() * 4) - 4; i++) {
		tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
		System::Windows::Forms::Label^ display_output = gcnew System::Windows::Forms::Label();

		String^ var1 = marshal_as<String^>(task_file.getParsedFromFile('|', i));

		display_output->Text = (var1->Trim());
		display_output->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		display_output->Font = gcnew System::Drawing::Font("Arial", 10);
		display_output->Anchor = AnchorStyles::Left;
		display_output->AutoSize = true;

		tableLayoutPanel1->Controls->Add(display_output);
	}
}

inline System::Void Prototype_Model::MyMainMenu::refreshData_editremove_list() {
	listBox1->Items->Clear();
	for (int i = 1; i < task_file.getLineNum(); i++) {
		String^ task = marshal_as<String^>(task_file.getFromFile(i))->Replace("|", "\t\t\t");
		listBox1->Items->Add(task);
	}
}
