#include "collatz_conjecture.h"

inline int collatz_step(int number)
{
    /*if ((number % 2) == 0)
        return number / 2;
    return number * 3 + 1;*/

    if (number & 1)
        return number * 3 + 1;
    return number >> 1;        
}

int steps(int start)
{
    if (start <= 0) 
        return ERROR_VALUE;
    if (start == 1) 
        return 0;
    
    return 1 + steps(collatz_step(start));
}