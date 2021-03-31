#include <stdio.h>
#include <stdlib.h>
void rec()
{
    printf("h");
    rec();
}
int main()
{
    rec();
    return 0;
}
