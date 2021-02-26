#include "pch.h"
#include <iostream>

using namespace std;
const float PI = 3.14;

int main()
{
	setlocale(LC_ALL, "Russian");

	bool q = 1;
	float r, s, p;

	while (q == true)
	{
		cout << "Введите радиус окружности : ";
		cin >> r;
		if (r <= 0)
			cout << "Радиус не может быть меньше или равняться нулю " << endl;
		else
			q = 0;
	}
	s = PI * pow(r, 2);
	p = 2 * PI*r;
	cout << "Периметр равен ";
	cout << p << endl;
	cout << "Площадь равна ";
	cout << s << endl;
}

