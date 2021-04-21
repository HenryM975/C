#include <stdio.h>
#include <stdlib.h>

char *testmas[10];
int j = 0;
int main()
{
    for(int i; i < 10; i++)
    {
        testmas[i] = i;
        printf("%d - %d - %d - %d\n", testmas[i], i, &testmas[i], &i);
    }
    printf("%d\n", &testmas[9]);
    printf("%d\n", &testmas[10]);
    printf("%d\n", &testmas[11]);

    return 0;
}
