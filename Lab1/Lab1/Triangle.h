#pragma once
#include <iostream>
using namespace std;
class Triangle
{
private:
	double str1;
	double str2;
	double str3;
	double angle;
	static int count;
	void Find();
public:
	Triangle();
	Triangle(double str1, double str2, double angle);
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
};

