#include "Sphere.h"
#include <cmath>
#include <iostream>

using namespace std;
Sphere::Sphere (double value)
{
	while (value <= 0)
	{
		cout << "Enter value of R again: "; cin >> value;
	}
	SetA(value);
}
double Sphere::volume()
{
	return 4*PI * pow(GetA(), 3)/3;
}
