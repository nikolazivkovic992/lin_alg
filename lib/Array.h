#ifndef ARRAY_H
#define ARRAY_H

class Array
{
public:

    double      data[4];
    unsigned    length;

    Array(double x, double y, double z, double w);
    
    ~Array();

    Array &operator=(Array &rhs)
    {
        this->length = rhs.length;

        for (unsigned i {0}; i < rhs.length; i++)
        {
            this->data[i] = rhs.data[i];
        }
        
        return *this;
    }
};

#endif