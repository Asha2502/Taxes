#include "PersonForm.h"
#include "MyForm1.h"
#include "MyForm0.h"
#include "Functions.h"
#include "FileFunc.h"

System::Void Taxes::PersonForm::�����_Click(System::Object^ sender, System::EventArgs^ e) {
    ClearFile("AddedPerson.txt");
    ClearFile("Poisk.txt");
    ClearFile("Taxes.txt"); 
    Application::Exit();
}

System::Void Taxes::PersonForm::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm0^ form = gcnew MyForm0();
    this->Hide();
    form->Show();
}

System::Void Taxes::PersonForm::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm1^ form = gcnew MyForm1();
    this->Hide();
    form->Show();
}

System::Void Taxes::PersonForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" ||
        textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "")  {   
        MessageBox::Show("������ ����������� ���� ������� �����������.", "��������!");
        return;
    }
    string temp;
    Convert_String_to_string(textBox1->Text->ToString(), temp);
    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] >= 'A' && temp[i] <= 'Z' || temp[i] >= 'a' && temp[i] <= 'z'
            || temp[i] >= '�' && temp[i] <= '�' || temp[i] >= '�' && temp[i] <= '�'
            || temp[i] == '�' || temp[i] == '�') {
        }
        else {
            MessageBox::Show("������ ������� ������� �������!", "��������!");
            return;
        }
    }
    Convert_String_to_string(textBox2->Text->ToString(), temp);
    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] >= 'A' && temp[i] <= 'Z' || temp[i] >= 'a' && temp[i] <= 'z'
            || temp[i] >= '�' && temp[i] <= '�' || temp[i] >= '�' && temp[i] <= '�' || temp[i] == '�' || temp[i] == '�') {
        }
        else {
            MessageBox::Show("������ ����� ������� �������!", "��������!");
            return;
        }
    }
    Convert_String_to_string(textBox3->Text->ToString(), temp);
    if (atof(temp.c_str()) == 0) {
        MessageBox::Show("������ ������� �����������.", "��������!");
        return;
    }//������� ���������� �� �������� ����s �� ���� ����� � ����

    vector<Person> chel;
    string sur, nam; double inc, cw, ds, dc, fs, fc;
    Convert_String_to_string(textBox1->Text->ToString(), sur);
    Convert_String_to_string(textBox2->Text->ToString(), nam);
    inc = Convert::ToDouble(textBox3->Text->ToString());
    cw = Convert::ToDouble(textBox4->Text->ToString());
    ds = Convert::ToDouble(textBox5->Text->ToString());
    dc = Convert::ToDouble(textBox6->Text->ToString());
    fs = Convert::ToDouble(textBox7->Text->ToString());
    fc = Convert::ToDouble(textBox8->Text->ToString());
    chel = AddPerson(chel, sur, nam, inc, cw, ds, dc, fs, fc);
    SaveToFilePersons(chel, "AddedPerson.txt");
   
    MyForm1^ form = gcnew MyForm1;
    this->Hide();
    form->Show();
    form->ShowAddedPerson();
    
    return System::Void();
}
