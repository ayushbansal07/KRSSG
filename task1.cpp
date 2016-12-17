#include<iostream>
#include<cmath>
#include "Vectors.h"
#include "Spherical.h"
using namespace std;

/*class System
{
public:
    Vectors spherical2vectors(Spherical obj)
    {
        Vectors obj2;
        obj2.x=(obj.r)*sin(obj.t)*cos(obj.f);
        obj2.y=(obj.r)*sin(obj.t)*sin(obj.f);
        obj2.z=(obj.r)*cos(obj.t);
        return obj2;
    }

    Spherical vectors2spherical(Vectors obj)
    {
        Spherical obj2;
        obj2.r=sqrt(pow(obj.x,2)+pow(obj.y,2)+pow(obj.z,2));
        obj2.t=acos(obj.z/obj2.r);
        obj2.f=atan(obj.y/obj.x);
        return obj2;
    }
    /*vectors2cylindrical();
    cylindrical2vectors();

    spherical2cylindrical();
    cylindrical2spherical();


};

class Vectors:public System
{
public:
    double x,y,z;
    Vectors()
    {}
    Vectors(double a,double b, double c)
    {
        x=a; y=b; z=c;
    }
    Vectors operator+(Vectors obj)
    {
        Vectors obj2;
        obj2.x=x+obj.x;
        obj2.y=y+obj.y;
        obj2.z=z+obj.z;
        return obj2;
    }
    Vectors operator-(Vectors obj)
    {
        Vectors obj2;
        obj2.x=x-obj.x;
        obj2.y=y-obj.y;
        obj2.z=z-obj.z;
        return obj2;
    }
    Vectors operator*(double scalar)
    {
        Vectors obj;
        obj.x=x*scalar;
        obj.y=y*scalar;
        obj.z=z*scalar;
        return obj;
    }
    Vectors shift_origin(double x0, double y0, double z0)
    {
        x-=x0;
        y-=y0;
        z-=z0;
    }

};

class Spherical:public System
{
    double r,t,f;
    Spherical()
    {}
    Spherical(double a, double b, double c)
    {
        r=a; t=b; f=c;
    }
    Spherical operator+(Spherical sobj2)
    {
        Spherical sobj1;
        sobj1.r=r;
        sobj1.t=t;
        sobj1.f=f;
        Vectors vobj1,vobj2;
        vobj1=spherical2vectors(sobj1);
        vobj2=spherical2vectors(sobj2);
        return vectors2spherical((vobj1+vobj2));
    }


};*/



int main()
{
    Vectors v1(2.3,1.2,1.6);
    v1.shift_origin(1,1.2,2);
    cout<<v1.x<<' '<<v1.y<<' '<<v1.z;
    Spherical s1(1,.785,.785);
    Spherical s2(2,.785,.785);
    Spherical s3;
    s3=s1+s2;
    cout<<s1.r<<' '<<s1.t<<' '<<s1.f<<endl;
    cout<<s2.r<<' '<<s2.t<<' '<<s2.f<<endl;
    cout<<s3.r<<' '<<s3.t<<' '<<s3.f<<endl;

}



