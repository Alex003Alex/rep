/*Вычислите значение выражения :
a. (a + 4b)(a−3b) + a^2 при a = 2 и b = 3. Ответ : -94*/
#include "pch.h"
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;

	ofstream f("qwe.txt");

	cout << "Введите первое число ";
	cin >> a;
	cout << endl << "Введите второе число ";
	cin >> b;
	cout << endl << "(a + 4b)(a - 3b) + a^2 = " << (a + 4 * b)*(a - 3 * b) + pow(a, 2) << endl;
	f << "(a + 4b)(a - 3b) + a^2 = " << (a + 4 * b)*(a - 3 * b) + pow(a, 2);
	f.close();
}
