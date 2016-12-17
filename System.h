#ifndef SYSTEM_H
#define SYSTEM_H
#include "Spherical.h"
#include "Vectors.h"

#include<iostream>
#include<cmath>
using namespace std;

class System
{
public:
    System();
    Vectors spherical2vectors(Spherical);
    Spherical vectors2spherical(Vectors);
};



#endif // SYSTEM_H
