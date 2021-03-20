#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    while((c = getchar()) != EOF)
        if(c != ' ')
            putchar(c);
        else if(c == ' ')
            putchar('\n');
    return 0;
}
