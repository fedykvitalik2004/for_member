#include "Parallelepiped.h"
#include <iostream>

using namespace std;

Parallelepiped::Parallelepiped(double value1, double value2, double value3)
{
	while (value1 <= 0)
	{
		cout << "Enter value of x again: "; cin >> value1;
	}
	SetA(value1);

	while (value2 <= 0)
	{
		cout << "Enter value of y again: "; cin >> value2;
	}
	SetY(value2);

	while (value3 <= 0)
	{
		cout << "Enter value of z again: "; cin >> value3;
	}
	SetZ(value3);
}

double Parallelepiped::volume()
{
	return GetA() * y * z;
}
