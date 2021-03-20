#include <stdio.h>
#include <stdlib.h>

//for win
int main()
{
    int c;
    while((c = getchar()) != EOF)
    {

       putchar(lower(c));
    }
    return 0;
}
int lower(int c)
{
    c = (c >= 'a' && c <= 'z') ? c: (c + ('a' - 'A')); //in unix like 'A' - 'a'
    return c;
}
