#include "Sqware.h"
#include <iostream>
using namespace std;

Sqware::Sqware() {
	this->a = 4;
}
Sqware::Sqware(double a) {
	this->a = a;
}
double Sqware::Sq() {
	return a * a;
}
double Sqware::GetA() {
	return this->a;
}
void Sqware::SetA(double a) {
	this->a = a;
}
double Sqware::P() {
	return 4 * a;
}
double Sqware::S() {
	return a * a;
}
Sqware::~Sqware() {
	cout << "Аргумент" << endl;
}