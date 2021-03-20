#include <stdio.h>
#include <stdlib.h>

int main()
{
    //-------------------------------------------
    printf(reverse(10));
    //-------------------------------------------
    return 0;
}
void reverse(int lim)
{
    char startlist[lim];
    char finallist[lim];
    int numeration = 0;
    int c;
    while((c = getchar()) != EOF && c != '\n')
    {
        startlist[numeration] = c;
        ++numeration;
    }
    int j = 0;
    for(int i = --numeration; i != -1; i--)
    {
        finallist[j] = startlist[i];
        printf("%c", finallist[j]);
        j++;
    }
    return finallist;
}
