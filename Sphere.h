#pragma once
#define PI 3.14159
#include "Volume.h"

class Sphere :
    public Volume
{
public:
    Sphere (double value);
    virtual ~Sphere() {};

    virtual double volume() override;
};

