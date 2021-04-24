/*Пользователь задаёт число Ч и Х. Посчитать y:-1/7 + 2/8 - 3/9  ... */
#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	fstream f;

	float x, sum = 0, q;

	cout << "x = ";
	cin >> x;
	cout << "Конечное значение ";
	cin >> q;

	for (int i = 1; i <= q; i++) {
		if (i % 2 == 0) 
			sum = sum + (float)i / ((i + 6)*x);
		else 
			sum = sum - (float)i / ((i + 6)*x);
	}
	cout << sum;
	f.open("qwe.txt", ios::out);
	f << sum;
	f.close();
	f.close();

	system("pause");
}
