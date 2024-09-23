#include "Triangle.h"
#define _USE_MATH_DEFINES
#include <math.h>

//��� 1 ������������
//����������� �� ���������
Triangle::Triangle() {
	this->str1 = 5;
	this->str2 = 5;
	//this->str3 = 5;
	this->angle = 90;
	Find();
	CountTriangl();
}
//����������� � �����������
Triangle::Triangle(double str1, double str2, double angle) {
	this->str1 = str1;
	this->str2 = str2;
	this->angle = angle;
	Find();
	CountTriangl();
}
//����������� �����������
Triangle::Triangle(const Triangle& triangle) {
	str1 = triangle.str1;
	str2 = triangle.str2;
	angle = triangle.angle;
	Find();
	CountTriangl();
}
void Triangle::Find() {
	str3 = sqrt((str1 * str1) + (str2 * str2) - (2 * str1 * str2 * cos(angle * M_PI / 180)));
}
double Triangle::GetStr1() {
	return str1;
}
double Triangle::GetStr2() {
	return str2;
}
double Triangle::GetP() {
	return str1 + str2 + str3;
}
double Triangle::GetS() {
	double S = (str1 * str2 * sin(angle * M_PI / 180) / 2);
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
		cout << "���� �� ����� ���� ������ 0 � ������ 180 �������� ��� � ��� �� �� ������." << endl;
		this->angle = 52;
	}
}
void Triangle::SetStr1(double str1) {
	this->str1 = str1;
	Find();
}
void Triangle::SetStr2(double str2) {
	this->str2 = str2;
	Find();
}
void Triangle::CountTriangl() {
	++count;
	cout << "������� " << count << " ������(�)" << endl;
}
Triangle::~Triangle() {
	count--;
}
//��� 2 ������������
//����� ��� ������� �� ������� ������
double Triangle::Area() const{
	double resS = (str1 + str2 + str3) / 2;
	return sqrt(resS * (resS - str1) * (resS - str2) * (resS - str3));
}
Triangle Triangle::operator*(double number) const {
	return Triangle(str1 * number, str2 * number, str3 * number);
}
double Triangle::operator+(const Triangle& triangle) const {
	return this->Area() + triangle.Area();
}
double Triangle::operator-(const Triangle& triangle) const {
	return this->Area() - triangle.Area();
}
Triangle& Triangle::operator++() {
	angle++;
	return *this;
}
Triangle& Triangle::operator--() {
	angle--;
	return *this;
}
Triangle Triangle::operator++(int) {
	Triangle temp = *this;
	++(*this);
	return temp;
}
Triangle Triangle::operator--(int) {
	Triangle temp = *this;
	--(*this);
	return temp;
}
//double operator+(const Triangle& triangle1 , const Triangle& triangle2) {
//	return triangle1.Area() + triangle2.Area();
//}
void Triangle::Print() {
	cout << "�����������: ������� 1 = " << str1 << ", ������� 2 = " << str2 << ", ������� 3 = " << str3 << ", ���� = " << angle << ", ������� = " << Area() << endl;
}
