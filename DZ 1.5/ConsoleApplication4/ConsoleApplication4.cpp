/*Сделать конвертер величин.Формат ввода : Направление_Перевода Величина.
a.Длина(метры, версты, километры)*/
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream f("qwe.txt");
	string w,e;
	int r;
	float q=0;
	cout << "Перевести из(metr, verst, km):";
	cin >> w;
	cout << "В(metr, verst, km):";
	cin >> e;	
	cout << "Количество = ";
	cin >> r;
	if (w == "metr" & e == "verst") 
		q = r * .0009373;
	if (w == "metr" & e == "km")
		q = r * 0.001;
	if (w == "verst" & e == "metr")
		q = r * 1066.8;
	if (w == "verst" & e == "km")
		q = r * 1.0668;
	if (w == "km" & e == "metr")
		q = r * 1000;
	if (w == "km" & e == "verst")
		q = r * 0.937383;
	cout << endl << q;
	f << q;
	f.close();
}
