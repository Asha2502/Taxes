#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Functions.h"
using namespace System;
using namespace std;

vector<Person> ReadPerson(string);
vector<Tax> ReadTaxes(string);
bool SaveToFileTaxes(vector<Tax>, string);
bool SaveToFilePersons(vector<Person>, string);

vector<Person> AddPerson(vector<Person> chel, string sur, string nam, double inc, double carw, double ds, double dc, double fs, double fc);
vector<Tax> AddTax(vector<Tax>, string , string , double, double, double, double);
vector<Person> RemovePerson(vector <Person>, int);
vector<Tax> RemoveTax(vector <Tax>, int);
void ClearFile(string);

vector<Tax> SortPodohodniy(vector<Tax>);
vector<Tax> SortTransportniy(vector<Tax>);
vector<Tax> SortZemelniy(vector<Tax>);
vector<Tax> SortNedvizhimost(vector<Tax>);

vector<Tax> PoiskPodohodniyHigher(vector<Tax>, double);
vector<Tax> PoiskPodohodniyLower(vector<Tax>, double);
vector<Tax> PoiskTransportniyHigher(vector<Tax>, double);
vector<Tax> PoiskTransportniyLower(vector<Tax>, double);
vector<Tax> PoiskZemelniyHigher(vector<Tax>, double);
vector<Tax> PoiskZemelniyLower(vector<Tax>, double);
vector<Tax> PoiskNedvizhimostHigher(vector<Tax>, double);
vector<Tax> PoiskNedvizhimostLower(vector<Tax>, double);

string& Convert_String_to_string(String^, string&);
String^ Convert_string_to_String(string&, String^);
string& Convert_String_to_string(String^);
String^ Convert_string_to_String(string&);
String^ Convert_char_to_String(char*);
char* Convert_String_to_char(String^);