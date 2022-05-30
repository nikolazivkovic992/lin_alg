#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
public:

    T           data[4];
    unsigned    length;

    Array(T x, T y, T z, T w)
        : data{x, y, z, w}
    {
        length = 4;
    }

    ~Array()
    {
    }

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