#include "Tetrahedron.h"
#include <iostream>
#include <cmath>

using namespace std;

Tetrahedron::Tetrahedron(double value1)
{
	while (value1 <= 0)
	{
		cout << "Enter value of a again: "; cin >> value1;
	}
	SetA(value1);
}

double Tetrahedron::volume()
{
	return (pow(GetA(), 3) * sqrt(2) / 12);
}
