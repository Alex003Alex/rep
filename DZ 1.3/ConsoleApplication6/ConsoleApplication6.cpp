#include "pch.h"
#include <iostream>

using namespace std; using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float p, s;

	cout << "Введите первое число ";
	cin >> p;
	cout << endl;
	cout << "Введите второе число ";
	cin >> s;
	swap(p, s);
	cout << endl << "Произошел обмен значений переменных" << endl;
	system("pause");
}
