#include "MyMainMenu.h"
#include "DatabaseHandler.h"
#include "EditTask.h"
#include <msclr/marshal_cppstd.h>
#include "individual_Task.h"

using namespace msclr::interop;

DatabaseHandler task_file{ ".\\Database\\Task.txt" };

inline System::Void Prototype_Model::MyMainMenu::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

inline System::Void Prototype_Model::MyMainMenu::MyMainMenu_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}

inline System::Void Prototype_Model::MyMainMenu::button4_Click(System::Object^ sender, System::EventArgs^ e) {

}

inline System::Void Prototype_Model::MyMainMenu::button5_Click(System::Object^ sender, System::EventArgs^ e) {

}

inline System::Void Prototype_Model::MyMainMenu::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel2->Visible) {
		flowLayoutPanel1->Controls->Clear();
		panel2->Hide();
	}
	else {
		panel2->Show();
		flowLayoutPanel1->Controls->Add(panel3);
		String^ h_num;
		for (int i = 0; i < 24; i++) {
			Label^ hour = gcnew Label();
			hour->AutoSize = false;
			hour->Margin = System::Windows::Forms::Padding(0);
			hour->Size = System::Drawing::Size(80, 20);
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

		for (int i = 2; i < (task_file.getLineNum() * 4) - 4; i += 4) {
			individual_Task^ userControl = gcnew individual_Task();
			userControl->setTitle(task_file.getParsedFromFile('|', i));

			//SettedTime - The hour where the task is going to start
			std::string timeSetted = task_file.getParsedFromFile('|', i - 2);
			int pos11 = timeSetted.find(',');
			int pos22 = timeSetted.find(':');
			int pos33 = timeSetted.find('|');
			String^ final1 = marshal_as<String^>(timeSetted.substr(pos11 + 1, pos22 - (pos11 + 1)))->Trim();
			String^ final2 = marshal_as<String^>(timeSetted.substr(pos22 + 1, pos33 - (pos22 + 1)))->Trim();
			int timeS = Convert::ToInt16(final1);
			if (final2 == "pm")
				timeS += 12;

			//Deadline - The hour where the task will end
			std::string deadline = task_file.getParsedFromFile('|', i - 1);
			int pos1 = deadline.find(',');
			int pos2 = deadline.find(':');
			int pos3 = deadline.find('|');
			String^ final = marshal_as<String^>(deadline.substr(pos1 + 1, pos2 - (pos1 + 1)))->Trim();
			String^ final3 = marshal_as<String^>(deadline.substr(pos2 + 1, pos3 - (pos2 + 1)))->Trim();
			int timeF = Convert::ToInt16(final);
			if (final3 == "pm")
				timeF += 12;

			int duration;

			// Check if timeSetted is in the AM or PM period
			bool isSettedPM = (timeS >= 12);

			// Check if timeEnd is in the AM or PM period
			bool isEndPM = (timeF >= 12);

			// Calculate the duration in hours (taking into account AM/PM)
			if (isSettedPM && !isEndPM) {
				// If timeSetted is PM and timeEnd is AM, add 12 hours to timeEnd
				duration = (timeF + 12) - timeS;
			}
			else if (!isSettedPM && isEndPM) {
				// If timeSetted is AM and timeEnd is PM, add 12 hours to timeEnd
				duration = (timeF + 12) - timeS;
			}
			else {
				// Both times are in the same period (either both AM or both PM)
				duration = timeF - timeS;
			}

			// Ensure the duration is non-negative
			if (duration < 0) {
				duration += 24; // Add 24 hours to handle cases like timeSetted=11 AM and timeEnd=1 AM
			}

			userControl->setTime(timeS-1);
			userControl->setDuration(duration);
			flowLayoutPanel1->Controls->Add(userControl);
		}
	}
}

inline System::Void Prototype_Model::MyMainMenu::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = textBox1->Text;
	String^ descrip = textBox2->Text;
	String^ timeEnd = dateTimePicker1->Value.ToString("MMMM dd, hh:mm:tt");
	String^ timeStart = dateTimePicker2->Value.ToString("MMMM dd, hh:mm:tt");
	std::string data = marshal_as<std::string>(System::String::Concat(timeStart, "|", timeEnd, "|", title, "|", descrip, "|", "\r\n"));

	if (
		!task_file.addToFile(data)
		) {
		MessageBox::Show("Something went wrong while writing to file.");
	}
	panel5->Enabled = true;
	panel4->Hide();
}

inline System::Void Prototype_Model::MyMainMenu::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Enabled = true;
	panel4->Hide();
}

inline System::Void Prototype_Model::MyMainMenu::button9_Click(System::Object^ sender, System::EventArgs^ e) {


}

inline System::Void Prototype_Model::MyMainMenu::button9_Click_1(System::Object^ sender, System::EventArgs^ e) {

}

inline System::Void Prototype_Model::MyMainMenu::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!panel4->Visible) {
		panel4->Show();
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


