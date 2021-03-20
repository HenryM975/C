#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*inputdata10 = fopen("inputdata10.txt", "rt");
    FILE*outputdata10 = fopen("outputdata10.txt", "a+");
    int A, B, C, D;
    fscanf(inputdata10, "%d%d%d%d", &A, &B, &C, &D);
    for(int x = -10; x != 10000; x++)
    {
    //printf("%d", x);
    if(((A*x*x*x)+(B*x*x)+(C*x)+D) == 0)
        {
            fprintf(outputdata10,"%d ", x);
        }
    }
    fclose(inputdata10);
    fclose(outputdata10);
    return 0;
}
