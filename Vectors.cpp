#include<iostream>
#include<cmath>
#include "Vectors.h"
using namespace std;

    Vectors::Vectors()
    {}
    Vectors::Vectors(double a,double b,double c)
    {
        x=a; y=b; z=c;
    }
    Vectors Vectors::operator+(Vectors obj)
    {
        Vectors obj2;
        obj2.x=x+obj.x;
        obj2.y=y+obj.y;
        obj2.z=z+obj.z;
        return obj2;
    }
    Vectors Vectors::operator-(Vectors obj)
    {
        Vectors obj2;
        obj2.x=x-obj.x;
        obj2.y=y-obj.y;
        obj2.z=z-obj.z;
        return obj2;
    }
    Vectors Vectors::operator*(double scalar)
    {
        Vectors obj;
        obj.x=x*scalar;
        obj.y=y*scalar;
        obj.z=z*scalar;
        return obj;
    }
    Vectors Vectors::shift_origin(double x0, double y0, double z0)
    {
        x-=x0;
        y-=y0;
        z-=z0;
    }
    /*Spherical vectors2spherical()
    {
        Spherical obj;
        obj.r=sqrt(pow(this->x,2)+pow(this->y,2)+pow(this->z,2));
        obj.t=acos(this->z/obj.r);
        obj.f=atan(this->y/this->x);
        return obj;
    }*/
