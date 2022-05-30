#ifndef Matrix_H
#define Matrix_H

#include "Array.h"

template <typename T, unsigned ROW_N, unsigned COL_N>
class Matrix : public Array<T>
{
public:

    Matrix()
    {
    }

    ~Matrix()
    {}

    T get_element(unsigned index_row, unsigned index_col) const
    {
        return this->_row[index_row].data[index_col];
    }

private:

    Array<T>    _row[ROW_N];
    unsigned    _row_length;
    
};

#endif
