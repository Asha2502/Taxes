#include <iostream>
#include<iomanip>
#include <string>
#include <fstream>
#include <windows.h>
#include <algorithm>
#include <stdlib.h>
#include "Functions.h"
using namespace std;

double PodohodniyNalog::countNalog() //override
{
	return 0.13 * Income;
}

double TransportniyNalog::countNalog() //override
{
	if (CarWeight > 0.2 && CarWeight <= 1.5)
		return 61;
	else if (CarWeight > 1.5 && CarWeight <= 1.75)
		return 81;
	else if (CarWeight > 1.75 && CarWeight <= 2)
		return 102;
	else if (CarWeight > 2 && CarWeight <= 2.25)
		return 122;
	else if (CarWeight > 2.25 && CarWeight <= 2.5)
		return 142;
	else if (CarWeight > 2.5 && CarWeight <= 3)
		return 162;
	else if (CarWeight > 3)
		return 223;
	else if (CarWeight > 0 && CarWeight <= 0.2) //мотоцикл
		return 41;
	else if (CarWeight == 0) //нет автомобиля
		return 0;
}

double ZemelniyNalog::countNalog() //override
{
	if (DistrictCost / DistrictSquare < 24606)
		return 24.61;
	else if (DistrictCost == 0 || DistrictSquare == 0)
		return 0;
	else
		return 0.01 * DistrictCost / DistrictSquare;
}

double NalogNaNedvizhimost::countNalog() //override
{
	if (FlatSquare == 0 || FlatCost == 0)
		return 0;
	else
		return 0.01 * FlatCost / FlatSquare;
}


Person::Person() {
	Surname = " ";
	Name = " ";
	Income = 0;
	CarWeight = 0;
	DistrictSquare = 0;
	DistrictCost = 0;
	FlatSquare = 0;
	FlatCost = 0;
}
Person::Person(string sur, string nam, double inc, double carw, double ds, double dc, double fs, double fc) {
	Surname = sur;
	Name = nam;
	Income = inc;
	CarWeight = carw;
	DistrictSquare = ds;
	DistrictCost = dc;
	FlatSquare = fs;
	FlatCost = fc;
}

void Person::CountNalog() {
	PodohodniyNalog pn(Income);
	Podohodniy = pn.countNalog();
	TransportniyNalog tn(CarWeight);
	Transportniy = tn.countNalog();
	ZemelniyNalog zn(DistrictSquare, DistrictCost);
	Zemelniy = zn.countNalog();
	NalogNaNedvizhimost ned(FlatSquare, FlatCost);
	Nedvizhimost = ned.countNalog();
}
double Person::GetPodohodniy() {
	return Podohodniy;
}
double Person::GetTransportniy() {
	return Transportniy;
}
double Person::GetZemelniy() {
	return Zemelniy;
}
double Person::GetNedvizhimost() {
	return Nedvizhimost;
}

double Person::CountSum() {
	double Sum;
	Sum = Podohodniy * 12 + Transportniy + Zemelniy + Nedvizhimost;
	return Sum;
}

void Person::operator= (Person P) {
	Surname = P.Surname;
	Name = P.Name;
	Income = P.Income;
	CarWeight = P.CarWeight;
	DistrictSquare = P.DistrictSquare;
	DistrictCost = P.DistrictCost;
	FlatSquare = P.FlatSquare;
	FlatCost = P.FlatCost;
}


bool Person::operator< (Person a) {
	return Surname < a.Surname;
}


Person ReadPerson0(ifstream& fin) {
	string sur; string nam; double inc; double carw; double ds; double dc; double fs; double fc;
	fin >> sur >> nam >> inc >> carw >> ds >> dc >> fs >> fc;
	Person P(sur, nam, inc, carw, ds, dc, fs, fc);
	return P;
}

string Person::GetSurname() {
	return Surname;
}
string Person::GetName() {
	return Name;
}
double Person::GetIncome() {
	return Income;
}
double Person::GetCarWeight() {
	return CarWeight;
}
double Person::GetDistrictSquare() {
	return DistrictSquare;
}
double Person::GetDistrictCost() {
	return DistrictCost;
}
double Person::GetFlatSquare() {
	return FlatSquare;
}
double Person::GetFlatCost() {
	return FlatCost;
}

void Person::SetSurname(string su) {
	Surname = su;
}
void Person::SetName(string na) {
	Name = na;
}
void Person::SetIncome(double inc) {
	Income = inc;
}
void Person::SetCarWeight(double cw) {
	CarWeight = cw;
}
void Person::SetDistrictSquare(double ds) {
	DistrictSquare = ds;
}
void Person::SetDistrictCost(double dc) {
	DistrictCost = dc;
}
void Person::SetFlatSquare(double fs) {
	FlatSquare = fs;
}
void Person::SetFlatCost(double fc) {
	FlatCost = fc;
}

ostream& operator<<(ostream& out, const Person& p)
{
	out  << p.Surname << setw(10) << p.Name << setw(8) << p.Income << setw(6) << p.CarWeight<< setw(5) << p.DistrictSquare << setw(10) << p.DistrictCost << setw(6) << p.FlatSquare<< setw(11) << p.FlatCost << endl;
	return out;
}