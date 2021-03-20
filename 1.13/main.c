#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, words[10] = {0}, masnum = 0;
    while((c = getchar()) != EOF)
    {
        if((c != ' ') && (c != '\n'))
            ++words[masnum];
        else if((c == ' ') || (c == '\n'))
            ++masnum;
        else
            printf("Error");
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", words[i]);
    }
    printf("\n");
    for(int i = 0; i<10; i++)
    {
        for(int j = 0;j < words[i]; j++)
        {
        printf("|");
        }
        printf("\n");

    }
    return 0;
}
