#include "calc.h"
#include <iostream>

int main()
{
    Calculator calc;
    for (int i = 0; i < 10; i++)
    {
        std::cout << calc.plus(i,3) << std::endl; 
    }
}
