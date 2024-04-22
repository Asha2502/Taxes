#include "AddingForm.h"
#include "MyForm1.h"
#include "MyForm0.h"
#include "Functions.h"
#include "FileFunc.h"

System::Void Taxes::AddingForm::выход_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearFile("AddedPerson.txt");
	ClearFile("Poisk.txt");
	ClearFile("Taxes.txt");
	Application::Exit();
}

System::Void Taxes::AddingForm::наГлавнуюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm0^ form = gcnew MyForm0();
    this->Hide();
    form->Show();
}

System::Void Taxes::AddingForm::вернутьсяНазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
    MyForm1^ form = gcnew MyForm1();
    this->Hide();
    form->Show();
}

System::Void Taxes::AddingForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	string temp;
	Convert_String_to_string(textBox0->Text->ToString(), temp);
	if (atof(temp.c_str()) == 0) {
		MessageBox::Show("Данные введены некорректно.", "Внимание!");
		return; }

	string nalog, updown;
	Convert_String_to_string(comboBox1->Text->ToString(), nalog);
	Convert_String_to_string(comboBox2->Text->ToString(), updown);
	double count = Convert::ToDouble(textBox0->Text->ToString());
	vector<Tax> taxe = ReadTaxes("Taxes.txt");
	vector<Tax> searched;

	if (nalog == "Выберите налог" || updown == "Ниже/Выше") {
		MessageBox::Show("Выберите параметры поиска.", "Внимание!");
		return;
	}

	if (nalog == "Подоходный налог" && updown == "Выше")
		searched = PoiskPodohodniyHigher(taxe, count);
	else if (nalog == "Подоходный налог" && updown == "Ниже")
		searched = PoiskPodohodniyLower(taxe, count);
	else if (nalog == "Транспортный налог" && updown == "Выше")
		searched = PoiskTransportniyHigher(taxe, count);
	else if (nalog == "Транспортный налог" && updown == "Ниже")
		searched = PoiskTransportniyLower(taxe, count);
	else if (nalog == "Земельный налог" && updown == "Выше")
		searched = PoiskZemelniyHigher(taxe, count);
	else if (nalog == "Земельный налог" && updown == "Ниже")
		searched = PoiskZemelniyLower(taxe, count);
	else if (nalog == "Налог на недвижимость" && updown == "Выше")
		searched = PoiskNedvizhimostHigher(taxe, count);
	else if (nalog == "Налог на недвижимость" && updown == "Ниже")
		searched = PoiskNedvizhimostLower(taxe, count);

	SaveToFileTaxes(searched, "Poisk.txt");
	MyForm1^ form = gcnew MyForm1;
	if (searched.size() == 0) {
		MessageBox::Show("Данные отсутствуют", "Внимание!");
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




