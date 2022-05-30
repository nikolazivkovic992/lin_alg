#include <iostream>

#include "Array.h"
#include "Matrix.h"

int main(){
    Array<double> b {2,3,4,5};
    Array<double> a = b;

    for (unsigned i {0}; i < 4; i++)
    {
        std::cout << b.data[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}