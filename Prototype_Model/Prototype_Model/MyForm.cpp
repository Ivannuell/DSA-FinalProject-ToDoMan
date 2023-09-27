#include "MyForm.h"
#include "MyMainMenu.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Prototype_Model;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	$safeprojectname$::MyForm form;
	Application::Run(% form);
}


inline System::Void $safeprojectname$::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyMainMenu^ main_Menu = gcnew MyMainMenu;
	main_Menu->Show();
	this->Hide();
}
