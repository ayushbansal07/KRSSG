#ifndef CONVERSIONS_H
#define CONVERSIONS_H
#include "Vectors.h"
#include "Spherical.h"


class Conversions
{
public:
    Conversions();
    Spherical vectors2spherical();
    Vectors spherical2vectors();
};

#endif // CONVERSIONS_H
