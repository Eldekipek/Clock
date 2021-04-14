#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[System::STAThread]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Clock::MyForm clock;
    Application::Run(% clock);
}

