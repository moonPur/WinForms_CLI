#include "MainWindow.h"
#include "Data.h"
// ���������� ��������� ����� ������� 
#include "InputForm.h"
using namespace System::IO;


using namespace System; //
using namespace System::Windows::Forms;//


[System::STAThread]

// ����� ����� � ������
void main(cli::array<System::String^>^ args) { // use "cli" fixed C2976 std::array
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

	FormOOPNoDB::MainWindow from;
	System::Windows::Forms::Application::Run(% from);
}
