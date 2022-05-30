#ifndef VECTOR_H
#define VECTOR_H

#include "Array.h"

class Vector : public Array
{
public:

    Vector(double x, double y, double z, double w);

    ~Vector();

private:
    Array*     _row[2];
    unsigned    _row_length;
};

#endif
