//Протабулировать функцию (шаг и диапазон задаёт пользователь):o.sqrt(15+4/x)+13*x+sin(3*x+13)
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int min, max, sh;

	cout << "введите диапазон ";
	cin >> min >> max;
	cout << "введите шаг ";
	cin >> sh;

	for (min; min <= max; min = min + sh) {
		cout << "При x = " << min << "      y = " << sqrt(15+4/min)+13*min+sin(3*min+13) << endl;

	}

	system("pause");
}
