//Вводятся три целых числа. Определить какое из них наибольшее.
#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;

	ofstream f("qwe.txt");
     
	cout << endl << "Введите первое число ";
	cin >> a;
	cout << endl << "Введите второе число ";
	cin >> b;
	cout << endl << "Введите третье число ";
	cin >> c;
	cout << endl;
	if (a >= b) {
		if (a >= c) {
			cout << "Наибольшее число " << a;
			f << "Наибольшее число " << a;
		}
		else {
			cout << "Наибольшее число " << c;
			f << "Наибольшее число " << c;
		}
	}
	else {
		if (b >= c) {
			cout << "Наибольшее число " << b;
			f << "Наибольшее число " << b;
		}
		else {
			cout << "Наибольшее число " << c;
			f << "Наибольшее число " << c;
		}
	}
}
