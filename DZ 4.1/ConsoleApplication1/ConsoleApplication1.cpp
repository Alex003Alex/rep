/*Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь (можно из файла).*/
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int i,j,num;

	cin >> num;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++)
			cout << "0";
		cout << endl;
	}
	system("pause");
}
