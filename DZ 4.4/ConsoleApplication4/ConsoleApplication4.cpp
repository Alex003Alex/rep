/*Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
Ш указываются пользователем (считываются с клавиатуры или из файла)*/
#include "pch.h"
#include <iostream>

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
		cout << min << endl;

	}

	system("pause");
}
