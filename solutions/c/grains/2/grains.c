#include "grains.h"
#include <math.h>
#include <stdio.h>

uint64_t square(uint8_t index)
{
    return (index == 0 || index > 64) ? 0 : 1llu << (index -1);
    //return pow(2, index - 1);
}

uint64_t total(void)
{
    uint64_t total = 0;
    for (int i= 1; i < 65; i++)
        total += square(i);
    return total;
}
