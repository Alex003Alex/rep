/*Пользователь задаёт число Ч и Х. Посчитать y:
y=x+2x+3x .. nx;*/
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float x,sum=0,q;

	cout << "x = ";
	cin >> x;
	cout << "Конечное значение ";
	cin >> q;

	for (int i = 1; i <= q; i++)
		sum = sum + i * x;
	cout << sum;

	system("pause");
}
