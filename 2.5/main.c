#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[] = "qwefwqqd";
    char s2[] = "fd";
    any(s1, s2);
    return 0;
}
void any(char s1[], char s2[])
{
    int i = 0, j = 0;
    while(s1[i++] != '\0')
    {
        while(s2[j++] != '\0')
            if(s1[i] == s2[j]);
            {
             break;
            }
            printf("%d", i);
    }
}
