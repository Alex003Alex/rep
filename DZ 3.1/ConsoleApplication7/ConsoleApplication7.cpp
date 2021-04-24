/*Дана функция y=f(x). Найти значение функции по x:
y = 2x - 10, если x > 0
y = 0, если x = 0
y = 2 * |x| - 1, если x < 0*/
#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	float z,x, y;

	cin >> z;

	fstream f;
	f.open("qwe.txt",ios::out); 
	f << z;
	f.close(); 
	f.open("qwe.txt",ios::in); 
	f >> x;
	f.close(); 
	

	if (x > 0)
		y = 2 * x - 10;
	else if (x == 0)
		y = 0;
	else if (x < 0)
		y = 2 * abs(x) - 1;
	cout << endl << "Y = " << y;
	f.open("result.txt", ios::out);
	f << "Y = " << y;
	f.close();
}
