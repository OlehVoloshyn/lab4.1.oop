#pragma once
#include "Curves.h"
class Line :
    public Curves
{
public:

    Line(void);
    Line(int a, int b, double x);
    ~Line() {}
    virtual double y();
   
};

