#include <stdio.h>
#include <stdlib.h>
FILE *inputdata1;
FILE *outputdata1;
int num1, num2;
int main()
{
    inputdata1 = fopen("inputdata1.txt", "rt");
    outputdata1 = fopen("outputdata1.txt", "a+");
    fscanf(inputdata1, "%d%d", &num1, &num2);
    int sum = num1 + num2;
    fprintf(outputdata1,"%d", sum);
    fclose(inputdata1);
    fclose(outputdata1);

    return 0;
}

