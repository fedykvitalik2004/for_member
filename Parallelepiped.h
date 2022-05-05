#pragma once
#include "Volume.h"
#include <iostream>

using namespace std;

class Parallelepiped :
    public Volume
{
private:
    double y;
    double z;
public:
    Parallelepiped(double value1, double value2, double value3);
    virtual ~Parallelepiped() {};

    void SetY(double value2) { y = value2; };
    void SetZ(double value3) { z = value3; };
    double GetY() { return y; };
    double GetZ() { return z; }

    double volume();
};

