#include <stdio.h>
#include <stdlib.h>
void recurs(long long int i)
{
    i++;
    printf("%d", i);
    recurs(i);
}

int main()
{
    long long int i = 1;
    recurs(i);
    return 0;
}
