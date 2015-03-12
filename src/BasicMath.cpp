#include "Addition.hpp"

#include <stdio.h>

int main()
{
    int x = 4;
    int y = 5;

    int z1 = Addition::twoValues(x,y);
    printf("\n%d + %d = %d\n",x,y,z1);

    return 0;
}
