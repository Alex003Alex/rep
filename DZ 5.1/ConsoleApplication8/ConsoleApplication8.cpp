/*Сгенерировать массив со случайными числами в диапазоне:
a. [0,10]*/
#include "pch.h"
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	fstream f;
	int i,arr[10];
	for (i = 0; i < 10; i++) 
		arr[i] = rand() % 11;
	f.open("qwe.txt", ios::out);
	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
		f << arr[i] << " ";
	}
	f.close();

	system("pause");
	}
