#include "Triangle.h"

Triangle::Triangle() {
	Find();
}
Triangle::Triangle(double str1, double str2, double angle) {
	this->str1 = str1;
	this->str2 = str2;
	this->angle = angle;
	Find();
}
void Triangle::Find() {
	str3 = sqrt(str1 * str1 + str2 * str2 - 2 * str1 * str2 * cos(angle));
}
double Triangle::GetStr1() {
	return str1;
}
double Triangle::GetStr2() {
	return str2;
}
double Triangle::GetP() {
	Find();
	return str1 + str2 + str3;
}
double Triangle::GetS() {
	Find();
	double S = (str1 * str2 * sin(angle) / 2);
	return S;
}
double Triangle::GetAngle() {
	return angle;
}
void Triangle::SetAngle(double angle) {
	if (angle > 0 && angle < 180) {
		this->angle = angle;
	}
	else {
		cout << "”гол не может быть меньше 0 и больше 180 градусов." << endl;
		this->angle = 52;
	}
}
void Triangle::SetStr1(double str1) {
	this->str1 = str1;
}
void Triangle::SetStr2(double str2) {
	this->str2 = str2;
}
