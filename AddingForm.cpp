#include "AddingForm.h"
#include "MyForm1.h"
#include "MyForm0.h"
#include "Functions.h"
#include "FileFunc.h"

System::Void Taxes::AddingForm::�����_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearFile("AddedPerson.txt");
	ClearFile("Poisk.txt");
	ClearFile("Taxes.txt");
	Application::Exit();
}

System::Void Taxes::AddingForm::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm0^ form = gcnew MyForm0();
    this->Hide();
    form->Show();
}

System::Void Taxes::AddingForm::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
    MyForm1^ form = gcnew MyForm1();
    this->Hide();
    form->Show();
}

System::Void Taxes::AddingForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	string temp;
	Convert_String_to_string(textBox0->Text->ToString(), temp);
	if (atof(temp.c_str()) == 0) {
		MessageBox::Show("������ ������� �����������.", "��������!");
		return; }

	string nalog, updown;
	Convert_String_to_string(comboBox1->Text->ToString(), nalog);
	Convert_String_to_string(comboBox2->Text->ToString(), updown);
	double count = Convert::ToDouble(textBox0->Text->ToString());
	vector<Tax> taxe = ReadTaxes("Taxes.txt");
	vector<Tax> searched;

	if (nalog == "�������� �����" || updown == "����/����") {
		MessageBox::Show("�������� ��������� ������.", "��������!");
		return;
	}

	if (nalog == "���������� �����" && updown == "����")
		searched = PoiskPodohodniyHigher(taxe, count);
	else if (nalog == "���������� �����" && updown == "����")
		searched = PoiskPodohodniyLower(taxe, count);
	else if (nalog == "������������ �����" && updown == "����")
		searched = PoiskTransportniyHigher(taxe, count);
	else if (nalog == "������������ �����" && updown == "����")
		searched = PoiskTransportniyLower(taxe, count);
	else if (nalog == "��������� �����" && updown == "����")
		searched = PoiskZemelniyHigher(taxe, count);
	else if (nalog == "��������� �����" && updown == "����")
		searched = PoiskZemelniyLower(taxe, count);
	else if (nalog == "����� �� ������������" && updown == "����")
		searched = PoiskNedvizhimostHigher(taxe, count);
	else if (nalog == "����� �� ������������" && updown == "����")
		searched = PoiskNedvizhimostLower(taxe, count);

	SaveToFileTaxes(searched, "Poisk.txt");
	MyForm1^ form = gcnew MyForm1;
	if (searched.size() == 0) {
		MessageBox::Show("������ �����������", "��������!");
		this->Hide();
		form->Show();
	}
	else {
		this->Hide();
		form->Show();
		form->ShowSearchedTax();
	}
	return System::Void();
}




