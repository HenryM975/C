#include <stdio.h>
#include <stdlib.h>
FILE*inputdata2;
FILE*outputdata2;
int inputnum;
int finalnum = 1;
int main()
{
    inputdata2 = fopen("inputdata2.txt", "rt");
    outputdata2 = fopen("outputdata2.txt", "a+");
    fscanf(inputdata2,"%d",&inputnum);
    for(int i = 1; i <= inputnum; i++)
    {
        finalnum+=i;
        printf("%d\n", finalnum);
    }
    fprintf(outputdata2, "%d", finalnum);
    fclose(inputdata2);
    fclose(outputdata2);
    return 0;
}


