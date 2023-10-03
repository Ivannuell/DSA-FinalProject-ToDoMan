#include "EditTask.h"
#include <string>


inline System::Void Prototype_Model::EditTask::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (doneFunc()) {
		
	}
}

bool Prototype_Model::EditTask::doneFunc() {
	if (textBox1->Text == "") {
		return false;
	}
	else {
		return true;
	}
}

std::string Prototype_Model::EditTask::getText() {
	return "s";
}