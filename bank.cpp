#include "bank.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;

[STAThread]//leave this as is
int main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew BankingSystem::bank);

	
}