#include "Form1.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	dblab::form1 form;
	Application::Run( %form);
	return 0;
}


//#include "form1.h"
//
//using namespace System;
//using namespace System::Windows::Forms;
//
//[STAThreadAttribute]
//void main(array<String^>^ args) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	dblab::form1 form;
//	Application::Run(%form);
//	
//}
