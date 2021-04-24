/*Вычислить факториал введенного числа (с помощью циклов).*/
#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	fstream f;

	int n,i;
	float q=1;
	
	cin >> n;
	for (i = 1; i <= n; i++)
		q = q * i;
	cout << q;
	f.open("qwe.txt", ios::out);
	f << q;
	f.close();
	system("pause");
}
