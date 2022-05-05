#pragma once
#include "Volume.h"

class Pyramid :
    public Volume
{
private:
    double x;
    double y;
public:
    Pyramid(double value1, double value2, double value3);
    virtual ~Pyramid() {};

    double const GetX();
    double const GetY();
    void SetX(double value);
    void SetY(double value);

    double volume() override;
};

