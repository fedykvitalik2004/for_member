#pragma once
#include "Volume.h"

class Tetrahedron :
    public Volume
{
public:
    Tetrahedron(double value1);
    virtual ~Tetrahedron() {};

    double volume() override;
};

