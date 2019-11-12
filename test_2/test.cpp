#include "stdafx.h"
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace test_2;

[STAThread]
int main(array<String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Создание главного окна и его запуск
	test_2::MyForm form1;
	Application::Run(%form1);
	return 0;
}