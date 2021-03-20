#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, frequency[30] = {0}, letters[30] = 0;

    while((c = getchar()) != EOF)
    {
        for(int i = 0; i <= 30; i++)
        {

           for(int j = 0; j <= 30, j++)
           {
               if((letters[j] != c) && (letters[j] == 0)
                  letters[j] = c;
                  break
           }
        }

    }
    return 0;
}
