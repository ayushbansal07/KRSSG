#ifndef VECTORS_H
#define VECTORS_H
#include "Spherical.h"
class Vectors
{
    public:
        double x,y,z;
        Vectors();
        Vectors(double,double,double);
        Vectors operator+(Vectors);
        Vectors operator-(Vectors);
        Vectors operator*(double);
        Vectors shift_origin(double,double,double);
        //Spherical vectors2spherical();
};

#endif // VECTORS_H
