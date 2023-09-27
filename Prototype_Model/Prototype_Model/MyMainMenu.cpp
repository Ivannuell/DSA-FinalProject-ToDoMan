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

	panel1->Show();
	panel1->Controls->Add(edit_Task);
	edit_Task->*/
	panel1->Show();
	panel1->Controls->Add(edit_Task);
	edit_Task->*/
}

inline System::Void Prototype_Model::MyMainMenu::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel2->Visible) {
		flowLayoutPanel1->Controls->Clear();
		panel2->Hide();
	}
	else {
		panel2->Show();
		std::string tasks[] = { "First Title", "Second Title", "Third Title","First Title", "Second Title", "Third Title", "First Title", "Second Title", "Third Title" };
		for (int i = 0; i < 9; i++) {
			individual_Task^ userControl = gcnew individual_Task();
			userControl->setTitle(tasks[i]);
			userControl->setTime(i);
			flowLayoutPanel1->Controls->Add(userControl);
		}
	}
}

inline System::Void Prototype_Model::MyMainMenu::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = textBox1->Text;
	String^ descrip = textBox2->Text;
	std::string data = marshal_as<std::string>(System::String::Concat(title, ":", descrip, ":", "\r\n"));

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

inline System::Void Prototype_Model::MyMainMenu::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!panel4->Visible) {
		panel4->Show();
		panel5->Enabled = false;
		button2->Enabled = true;
	}
}

inline System::Void Prototype_Model::MyMainMenu::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	tableLayoutPanel1->Controls->Clear();

	for (int i = 0; i < task_file.getLineNum() * 2; i++) {
		System::Windows::Forms::Label^ display_output = gcnew System::Windows::Forms::Label();
		String^ var1 = marshal_as<String^>(task_file.getParsedFromFile(':', i));
		display_output->Text = (var1->Trim());
		display_output->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		display_output->Font = gcnew System::Drawing::Font("Arial", 10);
		display_output->BorderStyle = BorderStyle::FixedSingle;
		display_output->Anchor = AnchorStyles::Left;
		display_output->AutoSize = true;

		tableLayoutPanel1->Controls->Add(display_output);
	}
}

// Utility Functions


