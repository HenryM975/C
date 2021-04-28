#include <stdio.h>
#include <stdlib.h>

struct pt{
    int x;
    int y;
        };

int main()
{
    struct pt point_1 = {11, 12};
    printf("%d - point_1.x %d - point_1.y\n", point_1.x, point_1.y);
    return 0;
}
