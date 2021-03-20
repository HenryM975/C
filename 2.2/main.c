#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, lim = 20, c;
    char s[20];

    while(i < lim - 1)
            {
                if((c =getchar()) != EOF)
                {
                    if(c != '\n')
                    {
                        s[i] = c;
                        ++i;
                    }
                }
            }
    return 0;
}
