#include <stdio.h>
#include <stdlib.h>
int argc = 10;

int main(int argc, char *argv[])
{
    for(int i = 0; i < 2; i++)
    {
        printf("%d - argc %s - argv\n", argc, argv[i]);//argv[0] - prog name;
    }
    return 0;
}
