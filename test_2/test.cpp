#include "stdafx.h"
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace test_2;

[STAThread]
int main(array<String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// �������� �������� ���� � ��� ������
	test_2::MyForm form1;
	Application::Run(%form1);
	return 0;
}