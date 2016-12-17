#ifndef SPHERICAL_H
#define SPHERICAL_H
#include "Vectors.h"

class Spherical
{
    public:
    double r,t,f;
    Spherical();
    Spherical(double,double,double);
    Spherical operator+(Spherical);
    //Vectors spherical2vectors();
};

#endif // SPHERICAL_H
