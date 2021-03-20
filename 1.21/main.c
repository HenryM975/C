#include <stdio.h>
#include <stdlib.h>
#define SPACE " "

int main()
{
    int c, spsum = 0, tabs, spaces;
    while((c = getchar()) != EOF)
    {
        if((c != '\t') && (c != ' '))
        {
            if(spsum != 0)
            {
                tabs = spsum/5;
                spaces = spsum%5;
                for(int i = 0; i < tabs; i++)
                {
                    printf("\t");
                }
                for(int j = 0; j < spaces; j++)
                {
                    printf(SPACE);
                }
            }
            putchar(c);
            spsum = 0;
        }

        else if((c == '\t') || (c == ' '))
        {
           if(c == '\t')
           {
               spsum+=5;
           }
           else
           {
               spsum++;
           }
        }
        else
            printf("Error");
    }
    return 0;
}
