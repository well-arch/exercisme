#include "leap.h"

bool leap_year(int year)
{
    return (year % 4 == 0) && ((year % 100 != 0) ||
                           (year % 400 == 0));

    /*if ((year % 4) == 0)
    {
        if ((year % 100) == 0)
        {
                if ((year % 400) == 0)
                    return true;
        }
        else
            return true;
    }
    return false;*/
}

