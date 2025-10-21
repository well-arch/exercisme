#include "darts.h"

int score(coordinate_t coord) {
    double squared_dist = coord.x * coord.x + coord.y * coord.y;
    
    if (squared_dist <= 1.0)  
        return 10;
    else if (squared_dist <= 25.0)  
        return 5;
    else if (squared_dist <= 100.0) 
        return 1;
    else
        return 0;
}