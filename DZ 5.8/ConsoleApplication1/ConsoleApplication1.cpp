//Посчитать количество элементов массива, больших заданного числа
#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int i, arr1[10], arr2[10],arr3[10];

	for (i = 0; i < 10; i++) {
		arr1[i] = rand() % 11;
		cout << arr1[i] << " ";
	}
	cout << endl;
	for (i = 0; i < 10; i++){
		arr2[i] = rand() % 11;
		cout << arr2[i] << " ";
}
	cout << endl;
	for (i = 0; i < 10; i++){
		arr3[i] = arr1[i] * arr2[i];
		cout << arr3[i] << " ";
}
}
