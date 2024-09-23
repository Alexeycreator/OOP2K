#include "Pyramid.h"
#include "Triangle.h"

Pyramid::Pyramid() {
	this->height = 1;
};
Pyramid::Pyramid(double str1, double str2, double height) :Triangle(str1, str2, angle) {
	this->height = height;
};
void Pyramid::PrintPyramid() {
	cout << "��������: " << "������� 1 = " << str1 << "\n������� 2 = " << str2 << "\n������� 3 = " << str3 << "\n���� = " << angle << "\n������ = " << height << endl;
	cout << "��������� ������� �������� = " << GetS() << endl;
}
bool Pyramid::CheckCorrectTriangle() {
	if (str1 == str2 && str2 == str3 && str1 == str3) {
		cout << "����������� ���������� - ����� ���� ���������: " << ValueS(str1) << endl;
		flag = true;
	}
	else {
		cout << "������������ ������������, �� ����� ���� ���������." << endl;
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
//������� ��������
double Pyramid::ValueV() {
	double S = GetS();
	double res = 1.0 / 3 * S * height;
	return res;
}
//���������� ��������
double Pyramid::ValueVPr(double str) {
	double S = ValueS(str);
	double res = 1.0 / 3 * S * height;
	return res;
}
void Pyramid::PrintValueV() {
	if (CheckCorrectTriangle()) {
		cout << "V �������� 1 = " << ValueVPr(str1) << endl;
	}
	else {
		cout << "V �������� 2 = " << ValueV() << endl;
	}
}
