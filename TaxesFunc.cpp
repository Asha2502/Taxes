#include <iostream>
#include<iomanip>
#include <string>
#include <fstream>
#include <windows.h>
#include <algorithm>
#include <stdlib.h>
#include "Functions.h"

using namespace std;

Tax::Tax() {
	Surname1 = " ";
	Name1 = " ";
	Podohodniy1 = 0;
	Transportniy1 = 0;
	Zemelniy1 = 0;
	Nedvizhimost1 = 0;
}
Tax::Tax(string sur, string nam, double pod, double trans, double zem, double ned) {
	Surname1 = sur;
	Name1 = nam;
	Podohodniy1 = pod;
	Transportniy1= trans;
	Zemelniy1 = zem;
	Nedvizhimost1 = ned;
}

ostream& operator<<(ostream& out, const Tax& p)
{
	out<<setw(12) << p.Surname1 <<setw(10)<< p.Name1 <<setw(8)<< p.Podohodniy1 << setw(8)<< p.Transportniy1 << setw(10) << p.Zemelniy1 << setw(10) << p.Nedvizhimost1 << endl;
	return out;
}
Tax& Tax:: operator =(const Tax& T) {
	Surname1 = T.Surname1;
	Name1 = T.Name1;
	Podohodniy1 = T.Podohodniy1;
	Transportniy1 = T.Transportniy1;
	Zemelniy1 = T.Zemelniy1;
	Nedvizhimost1 = T.Nedvizhimost1;
	return*this;
}

void Tax::SetSurname1(string su) {
	Surname1 = su;
}
void Tax::SetName1(string nam) {
	Name1 = nam;
}
void Tax::SetPodohodniy1(double pod) {
	Podohodniy1 = pod;
}
void Tax::SetTransportniy1(double trans) {
	Transportniy1 = trans;
}
void Tax::SetZemelniy1(double zem) {
	Zemelniy1 = zem;
}
void Tax::SetNedvizhimost1(double ned) {
	Nedvizhimost1 = ned;
}
string Tax::GetSurname1() {
	return Surname1;
}
string Tax::GetName1() {
	return Name1;
}
double Tax::GetPodohodniy1() {
	return Podohodniy1;
}
double Tax::GetTransportniy1() {
	return Transportniy1;
}
double Tax::GetZemelniy1() {
	return Zemelniy1;
}
double Tax::GetNedvizhimost1() {
	return Nedvizhimost1;
}

bool Tax::PodohodniyMoreThan(double a) {
	if (GetPodohodniy1() > a) {	return true; }
	else {	return false; }
}
bool Tax::PodohodniyLessThan(double a) {
	if (GetPodohodniy1() < a)	{	return true; }
	else {	return false; }
}
bool Tax::TransportniyniyMoreThan(double a) {
	if (GetTransportniy1() > a) { return true; }
	else { return false; }
}
bool Tax::TransportniyLessThan(double a) {
	if (GetTransportniy1() < a) { return true; }
	else { return false; }
}
bool Tax::ZemelniyniyMoreThan(double a) {
	if (GetZemelniy1() > a) { return true; }
	else { return false; }
}
bool Tax::ZemelniyniyLessThan(double a) {
	if (GetZemelniy1() < a) { return true; }
	else { return false; }
}
bool Tax::NedvizhimostMoreThan(double a) {
	if (GetNedvizhimost1() > a) { return true; }
	else { return false; }
}
bool Tax::NedvizhimostLessThan(double a) {
	if (GetNedvizhimost1() < a) { return true; }
	else { return false; }
}