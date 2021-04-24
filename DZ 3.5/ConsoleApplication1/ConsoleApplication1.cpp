/*Пользователь вводит день месяца. Вывести на экран день недели. Считаем, что 1-е
число месяца это вторник.
Модификация задачи 4. Пользователь также вводит число от 1 до 7, обозначающее
номер недели для первого числа месяца.*/
#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	fstream f;

	int q,w,e;
	string s;
	f.open("qwe.txt", ios::in);
	f >> s >> w;
	f.close();
	if (s == "Monday")
		q = 1;
	else if (s == "Tuesday")
		q = 2;
	else if (s == "Wednesday")
		q = 3;
	else if (s == "Thursday")
		q = 4;
	else if (s == "Friday")
		q = 5;
	else if (s == "Saturday")
		q = 6;
	else if (s == "Sunday")
		q = 7;
	e = w % 7;
	e = (e + (q - 1))% 7;
	switch (e)
	{
	case 1:
		cout << "Понедельник" << endl;
		break;
	case 2:
		cout << "Вторник" << endl;
		break;
	case 3:
		cout << "Среда" << endl;
		break;
	case 4:
		cout << "Четверг" << endl;
		break;
	case 5:
		cout << "Пятница" << endl;
		break;
	case 6:
		cout << "Суббота" << endl;
		break;
	case 0:
		cout << "Воскресенье"<<endl;
		break;
	}
	system("pause");
	}