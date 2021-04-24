/*Протабулировать функцию (шаг и диапазон задаёт пользователь):
a. y = -0.23x2 + x*/
#include "pch.h"
#include <iostream>

using namespace std;
float qwe(int min, int max);
int main()
{
	setlocale(LC_ALL, "Russian");

	int min, max, sh;
	float n;

	cout << "введите диапазон ";
	cin >> min >> max;
	cout << "введите шаг ";
	cin >> sh;

	for (min; min <= max; min = min + sh) {
		n = qwe(min, max);
		cout << "При x = " << min <<"   f = " <<n << endl;
			

	}

	system("pause");
}
float qwe(int min, int max) {
	
		return(0.23*min*min + min);
}
