#ifndef ARRAY_H
#define ARRAY_H

class Array
{
public:

    double      data[4];
    unsigned    length;

    Array(double x, double y, double z, double w);
    ~Array();
};

#endif