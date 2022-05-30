#include <iostream>
#include <TestLinAlgConfig.h>

#include "Array.h"
#include "Matrix.h"

int main(){
    Array b {2,3,4,5};
    Array a = b;
    Matrix v {3,4,5,6};
    for (unsigned i {0}; i < 4; i++)
    {
        std::cout << b.data[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}