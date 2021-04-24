//Найти среднее арифметическое всех/положительных/отрицательных
#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int i, arr[10], b = 0, n = 0;
	float chet = 0, nechet = 0, vse = 0;

	for (i = 0; i < 10; i++) 
		arr[i] = rand() % 10;
	

	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
		if (arr[i] % 2 == 1) {
			nechet = nechet + arr[i];
			b++;
		}
		else {
			chet = chet + arr[i];
			n++;
		}
		
	}
	vse = (chet + nechet) / 10;
	nechet = nechet / b;
	chet = chet / n;
	cout << endl << "chet = " << chet << endl;
	cout << endl << "nechet = " << nechet << endl;
	cout << endl << "vse = " << vse << endl;
}
