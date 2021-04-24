#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int arr[5][5],s;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	int min = arr[1][1];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if (min > arr[i][j])
				min = arr[i][j];
		}
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if (min == arr[i][j]) {
				s = arr[i][j];
				arr[i][j] = arr[i][i];
				arr[i][i] = s;
			}
		}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}