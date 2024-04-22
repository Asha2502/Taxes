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
	double Income; //�����
public:
	PodohodniyNalog(double inc) : Income(inc) {}
	double countNalog() override;
};

class TransportniyNalog : public Nalog {
private:
	double CarWeight; //��� ������
public:
	TransportniyNalog(double carw) : CarWeight(carw) {}
	double countNalog() override;
};

class ZemelniyNalog : public Nalog {
private:
	double DistrictSquare; //������� �������
	double DistrictCost; //��������� �������
public:
	ZemelniyNalog(double ds, double dc) : DistrictSquare(ds), DistrictCost(dc) {}
	double countNalog() override;
};

class NalogNaNedvizhimost : public Nalog {
private:
	double FlatSquare; //������� ��������
	double FlatCost; //��������� ��������
public:
	NalogNaNedvizhimost(double fs, double fc) : FlatSquare(fs), FlatCost(fc) {}
	double countNalog() override;
};

class Person {
protected:
	string Surname; //�������
	string Name; //���
	double Income; //�����
	double CarWeight; //��� ������
	double DistrictSquare; //������� �������
	double DistrictCost; //��������� �������
	double FlatSquare; //������� ��������
	double FlatCost; //��������� ��������
	double Podohodniy; //���������� �����
	double Transportniy; //������������ �����
	double Zemelniy; // ��������� �����
	double Nedvizhimost; //����� �� ������������
public:
	Person(); //����������� �� ���������
	Person(string sur, string nam, double inc, double carw, double ds, double dc, double fs, double fc); //����������� � �����������
	void CountNalog(); //������� ��� ������� �������
	double CountSum(); //������� ��� �������� ����� �������
	void operator= (Person P); //���������� ��������� =
	bool operator< (Person a); //���������� ��������� <
	//������� get
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
	//������� set
	void SetSurname(string);
	void SetName(string);
	void SetIncome(double);
	void SetCarWeight(double);
	void SetDistrictSquare(double);
	void SetDistrictCost(double);
	void SetFlatSquare(double);
	void SetFlatCost(double);
	friend ostream& operator << (ostream&, const Person&); //���������� ��������� <<
	//void SetAll(string sur, string nam, double inc, double carw, double ds, double dc, double fs, double fc);
};

Person ReadPerson0(ifstream& fin);
//Person VvodPerson();

class Tax {
protected:
	string Surname1; //�������
	string Name1; //���
	double Podohodniy1; //���������� �����
	double Transportniy1; //������������ �����
	double Zemelniy1; //��������� �����
	double Nedvizhimost1; //����� �� ������������
public:
	Tax(); //����������� �� ���������
	Tax(string, string, double, double, double, double); //����������� � �����������
	friend ostream& operator << (ostream&, const Tax&); //���������� ��������� <<
	Tax& operator = (const Tax&); //���������� ��������� =
	//������ Set
	void SetSurname1(string); 
	void SetName1(string);
	void SetPodohodniy1(double);
	void SetTransportniy1(double);
	void SetZemelniy1(double);
	void SetNedvizhimost1(double);
	//������ Get
	string GetSurname1();
	string GetName1();
	double GetPodohodniy1();
	double GetTransportniy1();
	double GetZemelniy1();
	double GetNedvizhimost1();
	//������� ��������� 
	bool PodohodniyMoreThan(double);
	bool PodohodniyLessThan(double);
	bool TransportniyniyMoreThan(double);
	bool TransportniyLessThan(double);
	bool ZemelniyniyMoreThan(double);
	bool ZemelniyniyLessThan(double);
	bool NedvizhimostMoreThan(double);
	bool NedvizhimostLessThan(double);
};