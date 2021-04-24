/*Вычислить сумму нечётных/чётных элементов массива*/
#include "pch.h"
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	fstream f;
	int i, arr[10], chet = 0 , nechet=0;
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 10;

	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
		if (arr[i] % 2 == 1)
			nechet = nechet + arr[i];
		else 
			chet = chet + arr[i];
	}
	cout << endl << "chet = " <<chet << endl;
	cout << endl << "nechet = " << nechet << endl;

	f.open("qwe.txt", ios::out);
	f << "chet = " << chet << endl;
	f << "nechet = " << nechet << endl;
	f.close();
	system("pause");
}
