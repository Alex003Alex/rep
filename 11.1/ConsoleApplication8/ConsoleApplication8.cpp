#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

struct complex
{
	double p, q;
};

complex a;

float qwe(complex a)
{
	float z;
	z = sqrt(abs(a.p*a.p + a.q));
	return(z);
}

void vvod() {
	cin >> a.p;
	cin >> a.q;
}

void vivod(float b) {
	cout << b;
}

void main()
{
	vvod();
	
	float b = qwe(a);
	
	vivod(b);
}
