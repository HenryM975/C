#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", fahr(100));
    return 0;
}
int fahr(int f)
{
    int res;
    res = (5.0/9.0)*(f-32);
    return res;
}
