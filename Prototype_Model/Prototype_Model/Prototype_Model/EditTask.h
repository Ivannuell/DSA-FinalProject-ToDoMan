#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace msclr::interop;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Prototype_Model {

	/// <summary>
	/// Summary for EditTask
	/// </summary>
	public ref class EditTask : public System::Windows::Forms::UserControl
	{
	public:
		EditTask(void)
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
		~EditTask()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// EditTask
			// 
			this->Name = L"EditTask";
			this->Size = System::Drawing::Size(467, 122);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	public: bool doneFunc();
	public: std::string getText();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
