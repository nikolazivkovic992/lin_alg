#include "Array.h"

Array::Array(double x, double y, double z, double w)
    : data{x, y, z, w}
{
    length = 4;
}

Array::~Array()
{
}