#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, nl, ns, ssum;
    nl = 0;
    ns = 0;

    while((c = getchar()) != EOF)
        if ((c != ' ') && (c != '\t') && (c != '//') && (c != '\n'))
        {
            putchar(c);
            ssum = 0;
        }
        else if(c = '\t')
            printf("\\t");
        else if(c ='/')
        {
            printf("//");
            printf("//");
        }
        else if(c = "\n")
            printf("\\n");
        else if (( c == ' ') && (ssum == 0))
        {
            putchar(c);
            ++ssum;
        }
        else if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++ns;
    return 0;
}
