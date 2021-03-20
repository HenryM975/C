#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y = 5;
    printf("%d", bitcount(y));
    return 0;
}

int bitcount(unsigned x)
{
    int b;
    for(b = 0; x != 0; x >>= 1)
    {

        b += (x & 01);
    }
    return b;
}
