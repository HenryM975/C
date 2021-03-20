#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1len = 7, s2len = 1;
    char s1[] = "qwertytr";
    char s2[] = {'r'};
    squeeze(s1, s2);
    return 0;
}


void squeeze(char s1[],char s2[])
{
    char finallist[10] = {" "};
    int i = 0, j = 0, k = 0;
    while(s1[i++] != '\0')
    {
        for(int j = 0; j < 1; j++)
        {
            if(s1[i] == s2[j])
            {
                i++;
            }
        }
        finallist[k] = s1[i];
        printf("%c", finallist[k]);
        k++;
    }
}
