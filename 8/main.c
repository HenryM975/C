#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*inputdata8 = fopen("inputdata8.txt", "rt");
    FILE*outputdata8 = fopen("outputdata8.txt", "a+");
    int factor1, factor2, composition;
    fscanf(inputdata8, "%d%d%d", &factor1, &factor2, &composition);
    if(factor1 * factor2 == composition)
    {
        fprintf(outputdata8, "YES");
    }
    else if(factor1 * factor2 != composition)
    {
        fprintf(outputdata8, "NO");
    }
    fclose(inputdata8);
    fclose(outputdata8);
    return 0;
}
