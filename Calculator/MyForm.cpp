#include "MyForm.h"

using namespace System;
using namespace::Windows::Forms;
 [STAThreadAttribute]
	 void main(array<String^>^ args) {
	 Application::EnableVisualStyles;
	 Application::SetCompatibleTextRenderingDefault;
	 Calculator::MyForm form;
	 Application::Run(% form);
 }

