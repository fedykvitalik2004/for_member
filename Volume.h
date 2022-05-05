#pragma once
#include <iostream>

using namespace std;

class Volume
{
	double a;
public :
	virtual ~Volume() = 0 {};

	void SetA(double value);
	double const GetA();

	virtual double volume() =0;
};



