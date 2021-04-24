//Посчитать количество положительных/отрицательных элементов массива
#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int i, arr[10], b = 0, n = 0;

	for (i = 0; i < 10; i++)
		arr[i] = rand() % 11 - 5;


	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
		if (arr[i] >= 0) 
			b++;
		else
			n++;
	}
	
	cout << endl << "polojit = " << b << endl;
	cout << endl << "otr = " << n << endl;
	
}
