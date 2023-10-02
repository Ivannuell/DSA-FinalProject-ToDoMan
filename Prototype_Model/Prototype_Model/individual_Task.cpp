#include <string>
#include <msclr/marshal_cppstd.h>
#include "individual_Task.h"

using namespace msclr::interop;

void Prototype_Model::individual_Task::setTitle(std::string title) {
	label1->Text = marshal_as<String^>(title);
}

void Prototype_Model::individual_Task::setTime(int hour){
	panel2->Left += hour * 45;
}
