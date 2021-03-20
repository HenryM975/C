#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[] = {4, 5, 6, 7, 1, 2, 3, 4, 8, 9, 10, 1, 2, 3, 4, 1, 2, 3, 4};
    int t[] = {1, 2, 3, 4};
    int tlen = 4;
    int frequency_list[10];
    printf("%d", strindex(s, t, tlen));
    return 0;
}

int strindex(int s[],int t[],int tlen)
{
    int frequency_list[10];
    int frequency_list_point = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        for(int j = 0, k = i; t[j] != '\0' && s[k] == t[j]; j++, k++)
        {
            if(j == tlen - 1)
            {
                //printf("%d - ", tlen);
                frequency_list[frequency_list_point] = k - tlen;
                //printf("%d\n", frequency_list[frequency_list_point]);
                frequency_list_point++;
            }
        }
    }
    if (frequency_list_point != 0)
        return (frequency_list[frequency_list_point - 1]);
    else
        return -1;
}
