#pragma warning(disable : 4996)
#include "Functions.h"
#include "FileFunc.h"
#include "AddingForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

vector<Person> ReadPerson(string filename)
{
    Person P;
    vector<Person> chel;
    ifstream file(filename);
    if (!file.is_open()) {
        MessageBox::Show("Ошибка чтения данных.", "Ошибка!");
    }
    else {
        if (file.peek() != EOF)  {
            while (!file.eof()) {
                string surname = "";
                string name = "";
                double inc = 0.0;
                double cw = 0.0;
                double ds = 0.0;
                double dc = 0.0;
                double fs = 0.0;
                double fc = 0.0;
                file >> surname >> name >> inc >> cw >> ds>>dc>>fs>>fc;
                if (surname == "") {
                    break;
                }
                P.SetSurname(surname);
                P.SetName(name);
                P.SetIncome(inc);
                P.SetCarWeight(cw);
                P.SetDistrictSquare(ds);
                P.SetDistrictCost(dc);
                P.SetFlatSquare(fs);
                P.SetFlatCost(fc);
                chel.push_back(P);
            }
        }
        else {
            MessageBox::Show("Данные отсутсвуют.", "Ошибка!");
        }
    }
    file.close();
    return chel;
}

vector<Tax> ReadTaxes(string filename) {
    Tax T;
    vector<Tax> taxe;
    ifstream file(filename);
    if (!file.is_open()) {  MessageBox::Show("Ошибка чтения данных.", "Ошибка!"); }
    else {
        if (file.peek() != EOF) {
            while (!file.eof()) {
                string sur = ""; string nam = "";
                double pod, trans, zem, ned; 
                file >> sur >> nam >> pod >> trans >> zem >> ned;
                if (sur == "") {
                    break;
                }
                T.SetSurname1(sur);
                T.SetName1(nam);
                T.SetPodohodniy1(pod);
                T.SetTransportniy1(trans);
                T.SetZemelniy1(zem);
                T.SetNedvizhimost1(ned);
                taxe.push_back(T);
            }
        }
        else {  MessageBox::Show("Данные отсутсвуют.", "Ошибка!"); }
    }
    file.close();
    return taxe;
}
bool SaveToFileTaxes(vector<Tax> ob, string filename) {
    ofstream fout(filename);
    if (!fout.is_open()) {
        return false;
    }
    else {
        copy(ob.begin(), ob.end(), ostream_iterator<Tax>(fout));
        fout.close();
        return true;
    }
}
bool SaveToFilePersons(vector<Person> ob, string filename) {
    ofstream fout(filename);
    if (!fout.is_open()) {
        return false;
    }
    else {
        copy(ob.begin(), ob.end(), ostream_iterator<Person>(fout));
        fout.close();
        return true;
    }
}
vector<Person> AddPerson(vector<Person> chel, string sur, string nam, double inc, double carw, double ds, double dc, double fs, double fc)
{
    Person P;
    P.SetSurname(sur);
    P.SetName(nam);
    P.SetIncome(inc);
    P.SetCarWeight(carw);
    P.SetDistrictSquare(ds);
    P.SetDistrictCost(dc);
    P.SetFlatSquare(fs);
    P.SetFlatCost(fc);
    chel.push_back(P);
    return chel;
}
vector<Tax> AddTax(vector<Tax> taxe, string sur, string nam, double pod, double trans, double zem, double ned) {
    Tax T;
    T.SetSurname1(sur);
    T.SetName1(nam);
    T.SetPodohodniy1(pod);
    T.SetTransportniy1(trans);
    T.SetZemelniy1(zem);
    T.SetNedvizhimost1(ned);
    taxe.push_back(T);
    return taxe;
}

vector<Person> RemovePerson(vector <Person> chel, int id)
{
    if (id == chel.size()) {
        chel.pop_back();// chel.erase(chel.end() - 1);
    }
    chel.erase(chel.begin() + (id));
    MessageBox::Show("Данные удалены.", "Внимание!");
    return chel;
}
vector<Tax> RemoveTax(vector <Tax> chel, int id)
{
    chel.erase(chel.begin() + (id));
    MessageBox::Show("Данные удалены.", "Внимание!");
    return chel;
}

void ClearFile(string namefile)
{
    ofstream file(namefile, ios::out | ios::trunc);
    file.close();
}

vector<Tax> SortPodohodniy(vector<Tax> taxe)
{
    Tax T;
    for (int i = 0; i < taxe.size(); i++)   {
        for (int j = i + 1; j < taxe.size(); j++)  {
            if (taxe[i].GetPodohodniy1() >= taxe[j].GetPodohodniy1())   {
                T = taxe[i];
                taxe[i] = taxe[j];
                taxe[j] = T;
            } 
        }  
    }
    return taxe;
}
vector<Tax> SortTransportniy(vector<Tax> taxe) {
    Tax T;
    for (int i = 0; i < taxe.size(); i++) {
        for (int j = i + 1; j < taxe.size(); j++) {
            if (taxe[i].GetTransportniy1() >= taxe[j].GetTransportniy1()) {
                T = taxe[i];
                taxe[i] = taxe[j];
                taxe[j] = T;
            }
        }
    }
    return taxe;
}
vector<Tax> SortZemelniy(vector<Tax> taxe) {
    Tax T;
    for (int i = 0; i < taxe.size(); i++) {
        for (int j = i + 1; j < taxe.size(); j++) {
            if (taxe[i].GetZemelniy1() >= taxe[j].GetZemelniy1()) {
                T = taxe[i];
                taxe[i] = taxe[j];
                taxe[j] = T;
            }
        }
    }
    return taxe;
}
vector<Tax> SortNedvizhimost(vector<Tax> taxe) {
    Tax T;
    for (int i = 0; i < taxe.size(); i++) {
        for (int j = i + 1; j < taxe.size(); j++) {
            if (taxe[i].GetNedvizhimost1() >= taxe[j].GetNedvizhimost1()) {
                T = taxe[i];
                taxe[i] = taxe[j];
                taxe[j] = T;
            }
        }
    }
    return taxe;
}

vector<Tax> PoiskPodohodniyHigher(vector<Tax> taxe, double pod)
{
    vector<Tax> searched;
    for (int i = 0; i < taxe.size(); i++)
    {
        if (taxe[i].PodohodniyMoreThan(pod))
        {
            searched.push_back(taxe[i]);
        }
    }
    return searched;
}

vector<Tax> PoiskPodohodniyLower(vector<Tax> taxe, double pod) {
    vector<Tax> searched;
    for (int i = 0; i < taxe.size(); i++)
    {
        if (taxe[i].PodohodniyLessThan(pod))
        {
            searched.push_back(taxe[i]);
        }
    }
    return searched;
}

vector<Tax> PoiskTransportniyHigher(vector<Tax> taxe, double trans) {
    vector<Tax> searched;
    for (int i = 0; i < taxe.size(); i++)
    {
        if (taxe[i].TransportniyniyMoreThan(trans))
        {
            searched.push_back(taxe[i]);
        }
    }
    return searched;
}
vector<Tax> PoiskTransportniyLower(vector<Tax> taxe, double trans) {
    vector<Tax> searched;
    for (int i = 0; i < taxe.size(); i++)
    {
        if (taxe[i].TransportniyLessThan(trans))
        {
            searched.push_back(taxe[i]);
        }
    }
    return searched;
}
vector<Tax> PoiskZemelniyHigher(vector<Tax> taxe, double zem) {
    vector<Tax> searched;
    for (int i = 0; i < taxe.size(); i++)
    {
        if (taxe[i].ZemelniyniyMoreThan(zem))
        {
            searched.push_back(taxe[i]);
        }
    }
    return searched;
}
vector<Tax> PoiskZemelniyLower(vector<Tax> taxe, double zem) {
    vector<Tax> searched;
    for (int i = 0; i < taxe.size(); i++)
    {
        if (taxe[i].ZemelniyniyLessThan(zem))
        {
            searched.push_back(taxe[i]);
        }
    }
    return searched;
}
vector<Tax> PoiskNedvizhimostHigher(vector<Tax> taxe, double ned) {
    vector<Tax> searched;
    for (int i = 0; i < taxe.size(); i++)
    {
        if (taxe[i].NedvizhimostMoreThan(ned))
        {
            searched.push_back(taxe[i]);
        }
    }
    return searched;
}
vector<Tax> PoiskNedvizhimostLower(vector<Tax> taxe, double ned) {
    vector<Tax> searched;
    for (int i = 0; i < taxe.size(); i++)
    {
        if (taxe[i].NedvizhimostLessThan(ned))
        {
            searched.push_back(taxe[i]);
        }
    }
    return searched;
}


string& Convert_String_to_string(String^ s, string& os)
{
    using namespace Runtime::InteropServices;
    const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
    return os;
}
System::String^ Convert_string_to_String(string& os, String^ s)
{
    s = gcnew String(os.c_str());
    return s;
}
string& Convert_String_to_string(String^ s)
{
    string os;
    using namespace Runtime::InteropServices;
    const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
    return os;
}
String^ Convert_string_to_String(string& os)
{
    String^ s = gcnew String(os.c_str());
    return s;
}
String^ Convert_char_to_String(char* ch)
{
    char* chr = new char();
    chr = ch;
    String^ str;
    for (int i = 0; chr[i] != '\0'; i++) {
        str += wchar_t(ch);
    }
    return str;
}
char* Convert_String_to_char(String^ string)
{
    using namespace System::Runtime::InteropServices;
    return(char*)(void*)Marshal::StringToHGlobalAnsi(string);
}