#include "System.h"

    System::System()
    {

    }

    Vectors System::spherical2vectors(Spherical obj)
    {
        Vectors obj2;
        obj2.x=(obj.r)*sin(obj.t)*cos(obj.f);
        obj2.y=(obj.r)*sin(obj.t)*sin(obj.f);
        obj2.z=(obj.r)*cos(obj.t);
        return obj2;
    }

    Spherical System::vectors2spherical(Vectors obj)
    {
        Spherical obj2;
        obj2.r=sqrt(pow(obj.x,2)+pow(obj.y,2)+pow(obj.z,2));
        obj2.t=acos(obj.z/obj2.r);
        obj2.f=atan(obj.y/obj.x);
        return obj2;
    }
    /**/
