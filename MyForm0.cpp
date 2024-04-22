#include "MyForm0.h"
#include "MyForm1.h"
#include "Functions.h"
#include "FileFunc.h"
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<String^>^ arg) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Taxes::MyForm0 form;
    Application::Run(% form);
}

System::Void Taxes::MyForm0::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm1^ form = gcnew MyForm1();
    this->Hide();
    form->Show();
}

System::Void Taxes::MyForm0::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    ClearFile("AddedPerson.txt");
    ClearFile("Poisk.txt");
    ClearFile("Taxes.txt");
    Application::Exit();
}

System::Void Taxes::MyForm0::оПрограммеTaxesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Приложение,где вы можете загрузить данные о плательщиках, отсортировать и найти данные по заданным параметрам, добавить или удалить данные, сохранить результат в файл.", "Краткое описание приложения");
}

System::Void Taxes::MyForm0::руководствоПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("Руководство пользователя.pdf");
}

