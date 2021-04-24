/*Вычислить сумму элементов массива, e. больших 20*/
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
	int i, arr[10], sum = 0;
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 30;

	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
		if (arr[i] > 20)
			sum = sum + arr[i];
	}
	cout << endl << sum << endl;
	f.open("qwe.txt", ios::out);
	f << sum;
	f.close();
	system("pause");
}
