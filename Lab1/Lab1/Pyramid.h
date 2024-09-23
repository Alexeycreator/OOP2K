#pragma once
#include "Triangle.h"

class Pyramid : public Triangle
{
private:
	double height;
	bool flag = false;
	double ValueS(double str);
	bool CheckCorrectTriangle();
	double ValueV();
	double ValueVPr(double str);
public:
	Pyramid();
	Pyramid(double _str1, double _str2, double _height);
	void PrintPyramid();
	void PrintValueV();
};

