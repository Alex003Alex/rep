/*Дана функция y=f(x). Найти значение функции по x:
y = 3x - 7, если x > 1
y = 3, если x = 1
y = 3 * |x+2| - 7, если x < 1*/
#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	fstream f;

	float x, y;

	cout << "X = ";
	cin >> x;

	if (x > 1)
		y = 3 * x - 7;
	else if (x == 1)
		y = 3;
	else if (x < 1)
		y = 3 * abs(x + 2) - 7;
	cout << endl << "Y = " << y;
	f.open("qwe.txt", ios::out);
	f << "Y = " << y;
	f.close();
}
