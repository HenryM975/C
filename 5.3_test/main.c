#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        printf("%d - %d - %d\n", &a[i], i, a[i]);
    }
    int addr_test = *(a + 2);
    printf("%d - 1\n", addr_test);
    int pa = a;
    printf("%d - 2\n", pa);
    for(int j = 0; j < 20; j++)
    {
        printf("%d\n", a[j]);
    }
    return 0;
}
