#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    printf("%d\n", CHAR_BIT);

    printf("%d to %d - int\n", INT_MIN, INT_MAX);

    printf("%d to %d - short\n", SHRT_MIN, SHRT_MAX);

    printf("%d to %d - long\n", LONG_MIN, LONG_MAX);

    return 0;
}
