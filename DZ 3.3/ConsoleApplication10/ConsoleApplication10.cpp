﻿#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

struct qwe {
	int x, y;
};
void qwee(int fx, int fy);
int main()
{
	setlocale(LC_ALL, "Russian");

	qwe koord;

	cin >> koord.x >> koord.y;

	qwee(koord.x, koord.y);

}
void qwee(int fx, int fy) {
	if (sqrt(fx*fx + fy * fy) > 2 & fy <= fx & fx <= 2)
		cout << "Попала";
	else
		cout << "Не попала";
}