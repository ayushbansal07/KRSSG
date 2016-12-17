#include<iostream>
#include<cmath>
#include "Spherical.h"

using namespace std;

    Spherical::Spherical()
    {}
    Spherical::Spherical(double a, double b, double c)
    {
        r=a; t=b; f=c;
    }
    Spherical operator+(Spherical sobj)
    {
        Vectors vobj1,vobj2;
        vobj1= (*this).spherical2vectors();
        vobj2= sobj.spherical2vectors();
        Vectors v=vobj1+vobj2;
        return v.vectors2spherical();
    }
    /*Vectors Spherical::spherical2vectors()
    {
        Vectors obj;
        obj.x=(this->r)*sin(this->t)*cos(this->f);
        obj.y=(this->r)*sin(this->t)*sin(this->f);
        obj.z=(this->r)*cos(this->t);
        return obj;
    }*/
