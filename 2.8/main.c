#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 12345;
    rightrot(x, 20);
    return 0;
}

void rightrot(int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", x >> i);
    }
    printf("over");
}
