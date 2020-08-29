#include <cassert>
#include "calc.h"

int main() 
{
    {
        Calculator calc;
        
        int result = calc.plus( 1, 2 );
        assert(result == 3);
    }

    {
        Calculator calc;
        
        int result = calc.minus( 1, 2 );
        assert(result == 1);
    }

    {
        Calculator calc;
        
        int result = calc.minus( 1, 2 );
        assert(result == -1);
    }
}