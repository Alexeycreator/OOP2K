#pragma once
#include <iostream>
using namespace std;
class Triangle
{
private:
	//для 1 лабораторной
	static int count;
	void Find();
	//для 3 лабораторной
protected:
	double str1;
	double str2;
	double str3 = 0;
	double angle;
public:
	//для 1 лабораторной
	Triangle();
	Triangle(double str1, double str2, double angle);
	//конструктор копирования
	Triangle(const Triangle& _triangle);
	double GetAngle();
	double GetStr1();
	double GetStr2();
	double GetP();
	double GetS();
	void SetAngle(double angle);
	void SetStr1(double str1);
	void SetStr2(double str2);
	void CountTriangl();
	~Triangle();
	//для 2 лабораторной
	double operator + (const Triangle& triangle) const;
	double operator - (const Triangle& triangle) const;
	Triangle operator * (double number) const;
	Triangle operator ++ (int);
	Triangle operator -- (int);
	Triangle& operator ++ ();	
	Triangle& operator --();
	friend double operator +(const Triangle& triangle1, const Triangle& triangle2);
	double Area() const;
	void Print();
};

