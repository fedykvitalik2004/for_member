#include "Pyramid.h"
#include <iostream>

using namespace std;

Pyramid::Pyramid(double value1, double value2, double value3)
{
	while (value1 <= 0)
	{
		cout << "Enter value of x again: "; cin >> value1;
	}
	SetX(value1);

	while (value2 <= 0)
	{
		cout << "Enter value of y again: "; cin >> value2;
	}
	SetY(value2);

	while (value3 <= 0)
	{
		cout << "Enter value of h again: "; cin >> value3;
	}
	SetA(value3);
}

double const Pyramid::GetX()
{
	return x;
}

double const Pyramid::GetY()
{
	return y;
}

void Pyramid::SetX(double value)
{
	x = value;
}

void Pyramid::SetY(double value)
{
	y = value;
}

double Pyramid::volume()
{
	return (x* y* GetA() / 3);
}
