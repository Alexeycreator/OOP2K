#include "Circle.h"

Circle::Circle() {
	this->radius = 5;
}
Circle::Circle(double r) {
	this->radius = r;
}
double Circle::Dlina() {
	return 2 * 3.14 * radius;
}