#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*inputdata14 = fopen("inputdata14.txt", "rt");
    FILE*outputdata14 = fopen("outputdata14.txt", "a+");
    int a, b;
    fscanf(inputdata14, "%d%d", &a, &b);
    int i = (a > b)? a: b;
    for(i ; i < 1000; i++)
    {
        if((i % a == 0) && (i % b == 0))
        {
            fprintf(outputdata14, "%d", i);
            break;
        }
    }
    fclose(inputdata14);
    fclose(outputdata14);
    return 0;
}
