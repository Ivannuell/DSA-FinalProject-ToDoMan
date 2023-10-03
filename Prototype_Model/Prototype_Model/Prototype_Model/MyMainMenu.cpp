#include "MyMainMenu.h"
#include "DatabaseHandler.h"
#include "EditTask.h"
#include <msclr/marshal_cppstd.h>
#include "individual_Task.h"
#include "Sort_File.h"
#include "Task_summary.h"

using namespace msclr::interop;

DatabaseHandler task_file{ ".\\Database\\Task.txt" };
DatabaseHandler task_parameter_file{ ".\\Database\\TaskParameters.txt" };
Sort_File task_sort_file{ ".\\Database\\Task.txt" };
Sort_File task_sort_parameter_file{ ".\\Database\\TaskParameters.txt" };

System::Void Prototype_Model::MyMainMenu::Initial_Conditions()
{
	panel2->Hide();
	panel4->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel13->Hide();
	button9->Hide();
	button3->Hide();
	button11->Hide();
	refreshData_Overview_Table();
}

inline System::Void Prototype_Model::MyMainMenu::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
}

inline System::Void Prototype_Model::MyMainMenu::MyMainMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}

inline System::Void Prototype_Model::MyMainMenu::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel2->Visible) {
		flowLayoutPanel1->Controls->Clear();
		panel2->Hide();
		panel13->Hide();
		button11->Hide();
	}
	else {
		panel13->Show();
		panel2->Show();
		button11->Show();
		refreshData_Visual_Chart();
		refreshData_Visual_summary();
	}
}

inline System::Void Prototype_Model::MyMainMenu::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	panel8->Hide();

	if (panel6->Visible) {
		panel6->Hide();
		button9->Hide();
		button3->Hide();
		button5->Text = "Edit Task";
	}
	else {
		button5->Text = "Overview";
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
		panel8->Hide();
	}
	else {
		panel5->Enabled = false;
		panel7->Show();
		panel7->BringToFront();
	}

	// Take the index of that to getFromFile
	textBox3->Text = marshal_as<String^>(task_file.getParsedFromFile('|', (listBox1->SelectedIndex * 4) + 2));
	textBox4->Text = marshal_as<String^>(task_file.getParsedFromFile('|', (listBox1->SelectedIndex * 4) + 3));
}

inline System::Void Prototype_Model::MyMainMenu::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = textBox3->Text;
	String^ des = textBox4->Text;
	String^ start = dateTimePicker4->Value.ToString("MMMM dd, hh:mm:tt");
	String^ end = dateTimePicker5->Value.ToString("MMMM dd, hh:mm:tt");

	String^ Subject = textBox6->Text;
	int Importance = getValue_Importance_edit();
	int Difficulty = getValue_Difficulty_edit();


	std::string data = marshal_as<std::string>(System::String::Concat(start, "|", end, "|", title, "|", des, "|"));
	std::string parameter = marshal_as<std::string>(System::String::Concat(start, "|", end, "|", title, "|", des, "|", Subject, "|", Importance, "|", Difficulty, "|"));

	task_file.insertToFile(data, listBox1->SelectedIndex);
	task_parameter_file.insertToFile(parameter, listBox1->SelectedIndex);
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

inline System::Void Prototype_Model::MyMainMenu::dateTimePicker4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

}

inline System::Void Prototype_Model::MyMainMenu::dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	System::DateTime startDateTime = dateTimePicker1->Value;

	System::DateTime endDateTime = dateTimePicker1->Value;

	if (endDateTime <= startDateTime)
	{
		dateTimePicker1->Value = endDateTime;
	}
}

inline System::Void Prototype_Model::MyMainMenu::button11_Click(System::Object^ sender, System::EventArgs^ e) {
	panel8->Show();
	panel8->BringToFront();
}

inline System::Void Prototype_Model::MyMainMenu::button12_Click(System::Object^ sender, System::EventArgs^ e) {
	task_sort_file.sortByDate_pa();
	refreshData_Visual_summary();
	refreshData_Overview_Table();
	refreshData_editremove_list();
}

inline System::Void Prototype_Model::MyMainMenu::button14_Click(System::Object^ sender, System::EventArgs^ e) {
}

inline System::Void Prototype_Model::MyMainMenu::button13_Click(System::Object^ sender, System::EventArgs^ e) {
	task_sort_file.sortByDifficulty();
	refreshData_Visual_summary();
}

inline System::Void Prototype_Model::MyMainMenu::button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel1->BringToFront();
	panel8->Hide();
	button11->Hide();
}

inline System::Void Prototype_Model::MyMainMenu::button15_Click(System::Object^ sender, System::EventArgs^ e) {
	refreshData_Visual_summary();
	flowLayoutPanel2->BringToFront();
	button11->Show();
	panel8->Hide();
}

inline System::Void Prototype_Model::MyMainMenu::button16_Click(System::Object^ sender, System::EventArgs^ e) {
	task_sort_file.sortByImportance();
	refreshData_Visual_summary();
}

inline System::Void Prototype_Model::MyMainMenu::button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

	task_file.removeFromFile(listBox1->SelectedIndex);
	task_parameter_file.removeFromFile(listBox1->SelectedIndex);
	listBox1->Items->RemoveAt(listBox1->SelectedIndex);

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

	String^ subject = textBox5->Text;
	String^ Importance = Convert::ToString(getValue_Importance());
	String^ Difficulty = Convert::ToString(getValue_Difficulty());
	std::string parameter = marshal_as<std::string>(System::String::Concat(timeStart, "|", timeEnd, "|", title, "|", descrip, "|", subject, "|", Importance, "|", Difficulty, "|", "\n"));

	if (
		!task_file.addToFile(data)
		)
		MessageBox::Show("Something went wrong while writing to file.");

	if (
		!task_parameter_file.addToFile(parameter)
		)
		MessageBox::Show("Something went wrong while writing to file.");

	panel5->Enabled = true;
	panel4->Hide();

	refreshData_Visual_Chart();
	refreshData_Overview_Table();
}

inline System::Void Prototype_Model::MyMainMenu::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Enabled = true;
	panel4->Hide();
	refreshData_Overview_Table();
}

inline System::Void Prototype_Model::MyMainMenu::dateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData_Visual_Chart();
}

inline System::Void Prototype_Model::MyMainMenu::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!panel4->Visible) {
		panel4->BringToFront();
		panel4->Show();
		panel6->Hide();
		panel8->Hide();
		button9->Hide();
		button3->Hide();
		panel5->Enabled = false;
		button2->Enabled = true;
	}


}

inline System::Void Prototype_Model::MyMainMenu::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	tableLayoutPanel1->Controls->Clear();

	for (int i = 0; i < (task_file.getLineNum() * 4) - 4; i++) {
		System::Windows::Forms::Label^ display_output = gcnew System::Windows::Forms::Label();
		tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
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
	int j = 0;
	for (int i = 12; j < 24; i = (i % 12) + 1) {
		Label^ hour = gcnew Label();
		hour->AutoSize = false;
		hour->Margin = System::Windows::Forms::Padding(0);
		hour->Size = System::Drawing::Size(80, 40);
		hour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		hour->Location = System::Drawing::Point(80 * j, 4);

		if (j < 12)
			h_num = System::String::Concat(i, ":00", " AM");
		else
			h_num = System::String::Concat(i, ":00", " PM");

		hour->Text = h_num;
		hour->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
		panel3->Controls->Add(hour);
		j++;
	}

	// Adding the custom task gant chart item.
	String^ debug = "";

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
		String^ final2 = marshal_as<String^>(timeSetted.substr((pos22)+4, pos33 - (pos22 + 1)))->Trim();
		int timeS = Convert::ToInt16(final1);
		if (final2 == "pm")
			timeS += 12;

		String^ debug1 = String::Concat("final2 (287): ", Convert::ToString(final2));
		String^ debug2 = String::Concat("timeS (288): ", Convert::ToString(timeS));


		//Deadline - The hour where the task will end
		int pos1 = deadline.find(',');
		int pos2 = deadline.find(':');
		int pos3 = deadline.find('|');
		String^ final = marshal_as<String^>(deadline.substr(pos1 + 1, pos2 - (pos1 + 1)))->Trim();
		String^ final3 = marshal_as<String^>(deadline.substr(pos2 + 4, pos3 - (pos2 + 1)))->Trim();
		int timeF = Convert::ToInt16(final);
		if (final3 == "pm")
			timeF += 12;

		String^ debug3 = String::Concat("final3 (301): ", Convert::ToString(final3));
		String^ debug4 = String::Concat("timeF (302): ", Convert::ToString(timeF - 1));


		int jj = 1;
		for (int i = 12; jj < 13; i = (i % 12) + 1) // Loop from 12 to 1
		{
			if (timeS == i && final2 == "am" && final3 == "am")
			{
				timeS = jj - 1;
				break;
			}
			if (timeS == i && final2 == "am" && final3 == "pm")
			{
				timeS = jj + 12; // Adjust for PM
				break;
			}
			if (timeS == i && final2 == "pm" && final3 == "pm")
			{
				timeS = jj + 12; // Adjust for PM
				break;
			}
			jj++;
		}
		if (timeS == 12 && final2 == "am" && final3 == "pm")
		{
			timeS = 0;
		}

		if (timeS == 12 && final2 == "pm" && final3 == "pm")
		{
			timeS = 12;
		}

		int duration = timeF - timeS;

		String^ debug5 = String::Concat("timeS if(311): ", Convert::ToString(timeS));
		String^ debug6 = String::Concat("duration (324): ", Convert::ToString(duration));

		userControl->setTime(timeS);
		userControl->setDuration(duration);

		if (month == value_M && day == value_D)
			flowLayoutPanel1->Controls->Add(userControl);
	}
}

System::Void Prototype_Model::MyMainMenu::refreshData_Visual_summary()
{
	flowLayoutPanel2->Controls->Clear();

	for (int i = 0; i < (task_parameter_file.getLineNum() * 7) - 7; i += 7) {
		Task_summary^ taskSum = gcnew Task_summary;

		taskSum->setTitle(marshal_as<String^>(task_parameter_file.getParsedFromFile('|', i + 2))->Trim());
		taskSum->setDescri(marshal_as<String^>(task_parameter_file.getParsedFromFile('|', i + 3))->Trim());
		taskSum->setStart(marshal_as<String^>(task_parameter_file.getParsedFromFile('|', i + 0))->Trim());
		taskSum->setEnt(marshal_as<String^>(task_parameter_file.getParsedFromFile('|', i + 1))->Trim());
		taskSum->setDif(Convert::ToInt32(marshal_as<String^>(task_parameter_file.getParsedFromFile('|', i + 5))->Trim()));
		taskSum->setImportance(Convert::ToInt32(marshal_as<String^>(task_parameter_file.getParsedFromFile('|', i + 6))->Trim()));

		flowLayoutPanel2->Controls->Add(taskSum);
	}
}

inline System::Void Prototype_Model::MyMainMenu::refreshData_Overview_Table() {
	tableLayoutPanel1->Controls->Clear();

	for (int i = 0; i < (task_file.getLineNum() * 4) - 4; i++) {
		tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
		String^ var1 = marshal_as<String^>(task_file.getParsedFromFile('|', i));

		System::Windows::Forms::Label^ display_output = gcnew System::Windows::Forms::Label();
		display_output->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		display_output->Font = gcnew System::Drawing::Font("Arial", 10);
		display_output->Anchor = AnchorStyles::Left;
		display_output->AutoSize = true;
		display_output->Text = (var1->Trim());

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

int Prototype_Model::MyMainMenu::getValue_Importance()
{
	if (radioButton1->Checked) return 1;
	else if (radioButton2->Checked) return 2;
	else if (radioButton3->Checked) return 3;
	else if (radioButton4->Checked) return 4;
	else if (radioButton5->Checked) return 5;
	else return 0;
}

int Prototype_Model::MyMainMenu::getValue_Difficulty()
{
	if (radioButton10->Checked) return 1;
	else if (radioButton9->Checked) return 2;
	else if (radioButton8->Checked) return 3;
	else if (radioButton7->Checked) return 4;
	else if (radioButton6->Checked) return 5;
	else return 0;
}

int Prototype_Model::MyMainMenu::getValue_Importance_edit()
{
	if (radioButton20->Checked) return 1;
	else if (radioButton19->Checked) return 2;
	else if (radioButton18->Checked) return 3;
	else if (radioButton17->Checked) return 4;
	else if (radioButton16->Checked) return 5;
	else return 0;
}

int Prototype_Model::MyMainMenu::getValue_Difficulty_edit()
{
	if (radioButton15->Checked) return 1;
	else if (radioButton14->Checked) return 2;
	else if (radioButton13->Checked) return 3;
	else if (radioButton12->Checked) return 4;
	else if (radioButton11->Checked) return 5;
	else return 0;
}


