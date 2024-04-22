#include "MyForm1.h"
#include "MyForm0.h"
#include "Functions.h"
#include "AddingForm.h"
#include "FileFunc.h"
#include "PersonForm.h"
#include<cmath>
ifstream fin("Spisok.txt");
ifstream file("AddedPerson.txt");
vector<Person> Chel;
vector<Tax> nalog;
Tax A;

System::Void Taxes::MyForm1::toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    ClearFile("AddedPerson.txt");
    ClearFile("Poisk.txt");
    ClearFile("Taxes.txt");
    Application::Exit();
}

System::Void Taxes::MyForm1::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm0^ form = gcnew MyForm0();
    this->Hide();
    form->Show();
}

System::Void Taxes::MyForm1::поискToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (nalog.size() == 0) {
        MessageBox::Show("Перед поиском необходимо выполнить расчёт налогов.", "Внимание!");
    }
    else {
        AddingForm^ form = gcnew AddingForm;
        this->Hide();
        form->Show();
        return System::Void();
    }
}

void Taxes::MyForm1::ShowSearchedTax()
{
    vector<Tax> nalog = ReadTaxes("Poisk.txt");
    dataGridView2->RowCount = nalog.size();
    for (int i = 0; i < dataGridView2->RowCount; i++)
    {
        dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
        dataGridView2->Rows[i]->Cells[0]->Value = Convert_string_to_String(nalog[i].GetSurname1());
        dataGridView2->Rows[i]->Cells[1]->Value = Convert_string_to_String(nalog[i].GetName1());
        dataGridView2->Rows[i]->Cells[2]->Value = (nalog[i].GetPodohodniy1());
        dataGridView2->Rows[i]->Cells[3]->Value = (nalog[i].GetTransportniy1());
        dataGridView2->Rows[i]->Cells[4]->Value = (nalog[i].GetZemelniy1());
        dataGridView2->Rows[i]->Cells[5]->Value = (nalog[i].GetNedvizhimost1());
    }
    return;
}

void Taxes::MyForm1::ShowAddedPerson()
{
    Chel.emplace_back(ReadPerson0(file));
    dataGridView1->RowCount = Chel.size();
    for (int i = 0; i < Chel.size(); i++) {
        dataGridView1->TopLeftHeaderCell->Value = "№";
        //вывод номеров строк
        dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
        //вывод значений
        dataGridView1->Rows[i]->Cells[0]->Value = gcnew System::String(Chel[i].GetSurname().c_str());
        dataGridView1->Rows[i]->Cells[1]->Value = gcnew System::String(Chel[i].GetName().c_str());
        dataGridView1->Rows[i]->Cells[2]->Value = gcnew System::String(Convert::ToString(Chel[i].GetIncome()));
        dataGridView1->Rows[i]->Cells[3]->Value = gcnew System::String(Convert::ToString(Chel[i].GetCarWeight()));
        dataGridView1->Rows[i]->Cells[4]->Value = gcnew System::String(Convert::ToString(Chel[i].GetDistrictSquare()));
        dataGridView1->Rows[i]->Cells[5]->Value = gcnew System::String(Convert::ToString(Chel[i].GetDistrictCost()));
        dataGridView1->Rows[i]->Cells[6]->Value = gcnew System::String(Convert::ToString(Chel[i].GetFlatSquare()));
        dataGridView1->Rows[i]->Cells[7]->Value = gcnew System::String(Convert::ToString(Chel[i].GetFlatCost()));
    }
    return;
}

System::Void Taxes::MyForm1::сохранитьТаблицуНалоговToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    ClearFile("SavedTaxes.txt");
    if (nalog.size() == 0)
    {
        MessageBox::Show("Данные отсутствуют", "Внимание!");
        return;
    }
    //vector<Person> Arr = ReadTaxes("вывод.txt");
    SaveToFileTaxes(nalog, "SavedTaxes.txt");
    MessageBox::Show("Данные сохранены.", "Внимание!");
}

System::Void Taxes::MyForm1::сохранитьДанныеОПлательщиковToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    ClearFile("SavedPersons.txt");
    if (Chel.size() == 0)
    {
        MessageBox::Show("Данные отсутствуют", "Внимание!");
        return;
    }
    SaveToFilePersons(Chel, "SavedPersons.txt");
    MessageBox::Show("Данные сохранены.", "Внимание!");
}

System::Void Taxes::MyForm1::опрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Приложение,где вы можете загрузить данные о плательщиках, отсортировать и найти данные по заданным параметрам, добавить или удалить данные, сохранить результат в файл.", "Краткое описание приложения");
}

System::Void Taxes::MyForm1::открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    int k;
    //if (!fin.is_open()) {
        k = Chel.size(); //вводим для того, чтобы продолжить заполнение таблицы если уже есть плательщики
        while (!fin.eof()) {
            Chel.emplace_back(ReadPerson0(fin));
        }
    
   // }else k = 0;
    //SaveToFilePersons(Chel, "Persons.txt");
    if (Chel.size() == 0) {
        MessageBox::Show("Данные отсутствуют", "Внимание!");
        return; }

    dataGridView1->RowCount = Chel.size()+k;

    for (int i = k; i < Chel.size(); i++)
    {
        dataGridView1->TopLeftHeaderCell->Value = "№";
        //вывод номеров строк
        dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
        //вывод значений
        dataGridView1->Rows[i]->Cells[0]->Value = gcnew System::String(Chel[i].GetSurname().c_str());
        dataGridView1->Rows[i]->Cells[1]->Value = gcnew System::String(Chel[i].GetName().c_str());
        dataGridView1->Rows[i]->Cells[2]->Value = gcnew System::String(Convert::ToString(Chel[i].GetIncome()));
        dataGridView1->Rows[i]->Cells[3]->Value = gcnew System::String(Convert::ToString(Chel[i].GetCarWeight()));
        dataGridView1->Rows[i]->Cells[4]->Value = gcnew System::String(Convert::ToString(Chel[i].GetDistrictSquare()));
        dataGridView1->Rows[i]->Cells[5]->Value = gcnew System::String(Convert::ToString(Chel[i].GetDistrictCost()));
        dataGridView1->Rows[i]->Cells[6]->Value = gcnew System::String(Convert::ToString(Chel[i].GetFlatSquare()));
        dataGridView1->Rows[i]->Cells[7]->Value = gcnew System::String(Convert::ToString(Chel[i].GetFlatCost()));
    }
    return;
}

System::Void Taxes::MyForm1::расчетНалоговToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    dataGridView2->RowCount = Chel.size();
    //расчет налогов
    for (int i = 0; i < Chel.size(); i++) {
        Chel[i].CountNalog();
    }
    
    for (int i = nalog.size(); i < Chel.size(); i++)
    {
        string su = Chel[i].GetSurname(); string na = Chel[i].GetName();
        double pod = Chel[i].GetPodohodniy(); double trans = Chel[i].GetTransportniy();
        double zem = Chel[i].GetZemelniy(); double ned = Chel[i].GetNedvizhimost();
        nalog = AddTax(nalog, su, na, pod, trans, zem, ned);
    }
    SaveToFileTaxes(nalog, "Taxes.txt");

    for (int i = 0; i < Chel.size(); i++)
    {
        dataGridView2->TopLeftHeaderCell->Value = "№";
        //вывод номеров строк
        dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
        //вывод значений
        dataGridView2->Rows[i]->Cells[0]->Value = gcnew System::String(Chel[i].GetSurname().c_str());
        dataGridView2->Rows[i]->Cells[1]->Value = gcnew System::String(Chel[i].GetName().c_str());
        dataGridView2->Rows[i]->Cells[2]->Value = gcnew System::String(Convert::ToString(round(Chel[i].GetPodohodniy() * 10) / 10));
        dataGridView2->Rows[i]->Cells[3]->Value = gcnew System::String(Convert::ToString(round(Chel[i].GetTransportniy()*10)/10));
        dataGridView2->Rows[i]->Cells[4]->Value = gcnew System::String(Convert::ToString(round(Chel[i].GetZemelniy()*10)/10));
        dataGridView2->Rows[i]->Cells[5]->Value = gcnew System::String(Convert::ToString(round(Chel[i].GetNedvizhimost()*10)/10));
    }
    return;
}


System::Void Taxes::MyForm1::добавитьПлательщика_Click(System::Object^ sender, System::EventArgs^ e)
{
    PersonForm^ form = gcnew PersonForm;
    this->Hide();
    form->Show();
    return System::Void();
}

//сортировки 

System::Void Taxes::MyForm1::поПодоходномуНалогуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (nalog.size() == 0) {
        MessageBox::Show("Перед сортировкой необходимо выполнить расчёт налогов.", "Внимание!");
    }
    else {
        nalog = SortPodohodniy(nalog);
        for (int i = 0; i < dataGridView2->RowCount; i++) {
            dataGridView2->Rows[i]->Cells[0]->Value = Convert_string_to_String(nalog[i].GetSurname1());
            dataGridView2->Rows[i]->Cells[1]->Value = Convert_string_to_String(nalog[i].GetName1());
            dataGridView2->Rows[i]->Cells[2]->Value = (nalog[i].GetPodohodniy1());
            dataGridView2->Rows[i]->Cells[3]->Value = (nalog[i].GetTransportniy1());
            dataGridView2->Rows[i]->Cells[4]->Value = (nalog[i].GetZemelniy1());
            dataGridView2->Rows[i]->Cells[5]->Value = (nalog[i].GetNedvizhimost1());
        }
        dataGridView2->ReadOnly = true;
    }
    return;
}

System::Void Taxes::MyForm1::поТранспортномуНалогуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (nalog.size() == 0) {
        MessageBox::Show("Перед сортировкой необходимо выполнить расчёт налогов.", "Внимание!");
    }
    else {
        nalog = SortTransportniy(nalog);
        for (int i = 0; i < dataGridView2->RowCount; i++) {
            dataGridView2->Rows[i]->Cells[0]->Value = Convert_string_to_String(nalog[i].GetSurname1());
            dataGridView2->Rows[i]->Cells[1]->Value = Convert_string_to_String(nalog[i].GetName1());
            dataGridView2->Rows[i]->Cells[2]->Value = (nalog[i].GetPodohodniy1());
            dataGridView2->Rows[i]->Cells[3]->Value = (nalog[i].GetTransportniy1());
            dataGridView2->Rows[i]->Cells[4]->Value = (nalog[i].GetZemelniy1());
            dataGridView2->Rows[i]->Cells[5]->Value = (nalog[i].GetNedvizhimost1());
        }
        dataGridView2->ReadOnly = true;
    }
    return;
}

System::Void Taxes::MyForm1::поЗеменльномуНалогуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (nalog.size() == 0) {
        MessageBox::Show("Перед сортировкой необходимо выполнить расчёт налогов.", "Внимание!");
    }
    else {
        nalog = SortZemelniy(nalog);
        for (int i = 0; i < dataGridView2->RowCount; i++) {
            dataGridView2->Rows[i]->Cells[0]->Value = Convert_string_to_String(nalog[i].GetSurname1());
            dataGridView2->Rows[i]->Cells[1]->Value = Convert_string_to_String(nalog[i].GetName1());
            dataGridView2->Rows[i]->Cells[2]->Value = (nalog[i].GetPodohodniy1());
            dataGridView2->Rows[i]->Cells[3]->Value = (nalog[i].GetTransportniy1());
            dataGridView2->Rows[i]->Cells[4]->Value = (nalog[i].GetZemelniy1());
            dataGridView2->Rows[i]->Cells[5]->Value = (nalog[i].GetNedvizhimost1());
        }
        dataGridView2->ReadOnly = true;
    }
    return;
}

System::Void Taxes::MyForm1::поНалогуНаНедвижимостьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (nalog.size() == 0) {
        MessageBox::Show("Перед сортировкой необходимо выполнить расчёт налогов.", "Внимание!");
    }
    else {
        nalog = SortNedvizhimost(nalog);
        for (int i = 0; i < dataGridView2->RowCount; i++) {
            dataGridView2->Rows[i]->Cells[0]->Value = Convert_string_to_String(nalog[i].GetSurname1());
            dataGridView2->Rows[i]->Cells[1]->Value = Convert_string_to_String(nalog[i].GetName1());
            dataGridView2->Rows[i]->Cells[2]->Value = (nalog[i].GetPodohodniy1());
            dataGridView2->Rows[i]->Cells[3]->Value = (nalog[i].GetTransportniy1());
            dataGridView2->Rows[i]->Cells[4]->Value = (nalog[i].GetZemelniy1());
            dataGridView2->Rows[i]->Cells[5]->Value = (nalog[i].GetNedvizhimost1());
        }
        dataGridView2->ReadOnly = true;
    }
    return;
}

System::Void Taxes::MyForm1::удалить_Click(System::Object^ sender, System::EventArgs^ e)
{
    if ((dataGridView1->RowCount == 0) || (dataGridView1->CurrentCell->RowIndex == Chel.size()))
    {
        MessageBox::Show("Данные отсутсвуют!", "Ошибка!");
        return;
    }
    if (dataGridView1->SelectedCells->Count == 0)
    {
        MessageBox::Show("Выделите строку!", "Внимание!");
        return;
    }
    int id = dataGridView1->CurrentCell->RowIndex;
    dataGridView1->Rows->RemoveAt(id);
    Chel = RemovePerson(Chel, id);
    for (int i = 0; i < Chel.size(); i++) {
        dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
    }
    return;
}



