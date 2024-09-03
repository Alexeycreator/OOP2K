#include <iostream>
#include "Triangle.h"
using namespace std;

int Triangle::count;

int main()
{
	setlocale(LC_ALL, "rus");
	const int size = 2;
	Triangle triangle1;
	//с конструктором по умолчанию
	cout << "Сторона 1 треугольника = " << triangle1.GetStr1() << endl;
	cout << "Сторона 2 треугольника = " << triangle1.GetStr2() << endl;
	cout << "Периметр треугольника = " << triangle1.GetP() << endl;
	cout << "Площадь треугольника = " << triangle1.GetS() << endl;
	triangle1.SetAngle(triangle1.GetAngle());
	cout << "Угол между сторонами = " << triangle1.GetAngle() << endl;
	cout << "----------------------------" << endl;
	//с конструктором с параметрами
	Triangle triangle2(4, 5, 90);
	cout << "Сторона 1 треугольника = " << triangle2.GetStr1() << endl;
	cout << "Сторона 2 треугольника = " << triangle2.GetStr2() << endl;
	cout << "Периметр треугольника = " << triangle2.GetP() << endl;
	cout << "Площадь треугольника = " << triangle2.GetS() << endl;
	triangle1.SetAngle(triangle2.GetAngle());
	cout << "Угол между сторонами = " << triangle2.GetAngle() << endl;
	//Изменение параметров
	triangle2.SetStr1(44);
	triangle2.SetStr2(12);
	triangle2.SetAngle(152);
	cout << "----------------------------" << endl;
	cout << "Сторона 1 треугольника = " << triangle2.GetStr1() << endl;
	cout << "Сторона 2 треугольника = " << triangle2.GetStr2() << endl;
	cout << "Периметр треугольника = " << triangle2.GetP() << endl;
	cout << "Площадь треугольника = " << triangle2.GetS() << endl;
	cout << "Угол между сторонами = " << triangle2.GetAngle() << endl;
	cout << "----------------------------" << endl;
	Triangle staticArray[size] = { triangle1, triangle2 };
	//нахождение всех площадей
	double sumS = 0;
	for (int i = 0; i < size; i++) {
		sumS += staticArray[i].GetS();
	}
	cout << "Сумма всех площадей = " << sumS << endl;
	Triangle* triangle3 = new Triangle[size]{};
	delete[] triangle3;
}
