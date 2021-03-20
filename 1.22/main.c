#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, len = 0;
    while((c = getchar()) != EOF)
    {
                if((len >= 10) && ((c == ' ') || (c == '\t')))
                {
                       printf("\n");
                       len = 0;
                }
                if((len == 0) && (c == ' '))
                {
                    printf("");
                }
                else
                {
                    putchar(c);
                    len++;
                }



    }
    return 0;
}
