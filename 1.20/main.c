#include <stdio.h>
#include <stdlib.h>
#define DETAB "     "
int main()
{
    int c;
    while((c = getchar())!= EOF)
    {
        if(c != '\t')
        {
            putchar(c);
        }
        else if(c == '\t')
        {
            printf(DETAB);
        }
    }
    return 0;
}
