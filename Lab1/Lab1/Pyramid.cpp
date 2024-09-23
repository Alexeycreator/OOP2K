#include "Pyramid.h"
#include "Triangle.h"

Pyramid::Pyramid() {
	this->height = 1;
};
Pyramid::Pyramid(double str1, double str2, double height) :Triangle(str1, str2, angle) {
	this->height = height;
};
void Pyramid::PrintPyramid() {
	cout << "Пирамида: " << "сторона 1 = " << str1 << "\nсторона 2 = " << str2 << "\nсторона 3 = " << str3 << "\nугол = " << angle << "\nвысота = " << height << endl;
	cout << "Основание обычный пирамиды = " << GetS() << endl;
}
bool Pyramid::CheckCorrectTriangle() {
	if (str1 == str2 && str2 == str3 && str1 == str3) {
		cout << "Треугольник правильный - может быть пирамидой: " << ValueS(str1) << endl;
		flag = true;
	}
	else {
		cout << "Треугольника неправильный, не может быть пирамидой." << endl;
		flag = false;
	}
	return flag;
}
double Pyramid::ValueS(double str) {
	if (CheckCorrectTriangle()) {
		double res = sqrt(3 * (str * str) / 4);
		return res;
	}
	else{
		return -1;
	}
}
//обычная пирамида
double Pyramid::ValueV() {
	double S = GetS();
	double res = 1.0 / 3 * S * height;
	return res;
}
//правильная пирамида
double Pyramid::ValueVPr(double str) {
	double S = ValueS(str);
	double res = 1.0 / 3 * S * height;
	return res;
}
void Pyramid::PrintValueV() {
	if (CheckCorrectTriangle()) {
		cout << "V пирамиды 1 = " << ValueVPr(str1) << endl;
	}
	else {
		cout << "V пирамиды 2 = " << ValueV() << endl;
	}
}
