#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

class Nalog {
public:
	virtual double countNalog() = 0;
};

class PodohodniyNalog : public Nalog {
private:
	double Income; //доход
public:
	PodohodniyNalog(double inc) : Income(inc) {}
	double countNalog() override;
};

class TransportniyNalog : public Nalog {
private:
	double CarWeight; //вес машины
public:
	TransportniyNalog(double carw) : CarWeight(carw) {}
	double countNalog() override;
};

class ZemelniyNalog : public Nalog {
private:
	double DistrictSquare; //площадь участка
	double DistrictCost; //стоимость участка
public:
	ZemelniyNalog(double ds, double dc) : DistrictSquare(ds), DistrictCost(dc) {}
	double countNalog() override;
};

class NalogNaNedvizhimost : public Nalog {
private:
	double FlatSquare; //площадь квартиры
	double FlatCost; //стоимость квартиры
public:
	NalogNaNedvizhimost(double fs, double fc) : FlatSquare(fs), FlatCost(fc) {}
	double countNalog() override;
};

class Person {
protected:
	string Surname; //фамилия
	string Name; //имя
	double Income; //доход
	double CarWeight; //вес машины
	double DistrictSquare; //площадь участка
	double DistrictCost; //стоимость участка
	double FlatSquare; //площадь квартиры
	double FlatCost; //стоимость квартиры
	double Podohodniy; //подоходный налог
	double Transportniy; //транспортный налог
	double Zemelniy; // земельный налог
	double Nedvizhimost; //налог на недвижимость
public:
	Person(); //конструктор по умолчанию
	Person(string sur, string nam, double inc, double carw, double ds, double dc, double fs, double fc); //конструктор с параметрами
	void CountNalog(); //функция для расчета налогов
	double CountSum(); //функция для подсчета суммы налогов
	void operator= (Person P); //перегрузка оператора =
	bool operator< (Person a); //перегрузка оператора <
	//функции get
	string GetSurname();  
	string GetName();
	double GetIncome();
	double GetCarWeight();
	double GetDistrictSquare();
	double GetDistrictCost();
	double GetFlatSquare();
	double GetFlatCost();
	double GetPodohodniy();
	double GetTransportniy();
	double GetZemelniy();
	double GetNedvizhimost();
	//функции set
	void SetSurname(string);
	void SetName(string);
	void SetIncome(double);
	void SetCarWeight(double);
	void SetDistrictSquare(double);
	void SetDistrictCost(double);
	void SetFlatSquare(double);
	void SetFlatCost(double);
	friend ostream& operator << (ostream&, const Person&); //перегрузка оператора <<
	//void SetAll(string sur, string nam, double inc, double carw, double ds, double dc, double fs, double fc);
};

Person ReadPerson0(ifstream& fin);
//Person VvodPerson();

class Tax {
protected:
	string Surname1; //фамилия
	string Name1; //имя
	double Podohodniy1; //подоходный налог
	double Transportniy1; //транспортный налог
	double Zemelniy1; //земельный налог
	double Nedvizhimost1; //налог на недвижимость
public:
	Tax(); //конструктор по умолчанию
	Tax(string, string, double, double, double, double); //конструктор с параметрами
	friend ostream& operator << (ostream&, const Tax&); //перегрузка оператора <<
	Tax& operator = (const Tax&); //перегрузка оператора =
	//методы Set
	void SetSurname1(string); 
	void SetName1(string);
	void SetPodohodniy1(double);
	void SetTransportniy1(double);
	void SetZemelniy1(double);
	void SetNedvizhimost1(double);
	//методы Get
	string GetSurname1();
	string GetName1();
	double GetPodohodniy1();
	double GetTransportniy1();
	double GetZemelniy1();
	double GetNedvizhimost1();
	//функции сравнения 
	bool PodohodniyMoreThan(double);
	bool PodohodniyLessThan(double);
	bool TransportniyniyMoreThan(double);
	bool TransportniyLessThan(double);
	bool ZemelniyniyMoreThan(double);
	bool ZemelniyniyLessThan(double);
	bool NedvizhimostMoreThan(double);
	bool NedvizhimostLessThan(double);
};