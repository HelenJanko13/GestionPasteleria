#include "Pasteleria.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GestionPasteleriaVentana::Pasteleria form;
	Application::Run(% form);
}


