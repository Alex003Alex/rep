#include "pch.h"
#include <iostream>

using namespace std;

struct s {
	float s,r,k;
};

int t(struct s param) {
	int res;
	res = param.k * param.r * param.s;
	return (res);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	s param;

	cin >> param.k
		>> param.r
		>> param.s;

	int res = t(param);
	
	cout << res;
}