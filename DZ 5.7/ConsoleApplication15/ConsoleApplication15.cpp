//Посчитать количество элементов массива, больших заданного числа
#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int i, arr[10], b = 0, n;

	for (i = 0; i < 10; i++)
		arr[i] = rand() % 11;

	cout << "Введите число ";
	cin >> n;

	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
		if (arr[i] > n)
			b++;
	}

	cout << endl << "bolshe "<< n <<" = " << b << endl;

}
