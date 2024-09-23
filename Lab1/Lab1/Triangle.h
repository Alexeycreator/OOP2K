#pragma once
#include <iostream>
using namespace std;
class Triangle
{
private:
	//��� 1 ������������
	static int count;
	void Find();
	//��� 3 ������������
protected:
	double str1;
	double str2;
	double str3 = 0;
	double angle;
public:
	//��� 1 ������������
	Triangle();
	Triangle(double str1, double str2, double angle);
	//����������� �����������
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
	//��� 2 ������������
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

