#include <stdio.h>
#include <stdlib.h>
FILE*inputdata3;
FILE*outputdata3;
int main()
{
    inputdata3 = fopen("inputdata3.txt", "rt");
    outputdata3 = fopen("outputdata3.txt", "a+");
    int inputnum;
    fscanf(inputdata3, "%d", &inputnum);
    if(inputnum % 5 == 0)
    {
    inputnum *= inputnum;
    fprintf(outputdata3, "%d", inputnum);
    }
    else
    {
        printf("!!!inputnum % 5 != 0!!!");
    }
    fclose(inputdata3);
    fclose(outputdata3);
    return 0;
}
