#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a = 10 , b = 20;
    printf("%d - a %d - b\n", a, b);
    swap(&a, &b);
    printf("%d - a %d - b\n", a, b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp_var = *pa;
    *pa = *pb;
    *pb = temp_var;
}
