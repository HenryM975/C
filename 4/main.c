#include <stdio.h>
#include <stdlib.h>
FILE*inputdata4;
FILE*outputdata4;
int main()
{
    inputdata4 = fopen("inputdata4.txt", "rt");
    outputdata4 = fopen("outputdata4.txt", "a+");
    int inputnum;
    fscanf(inputdata4, "%d", &inputnum);
    int num1,num2 = 9,num3;
    num1 = inputnum;
    num3 = num2 - num1;
    int outputnum = num1 * 100 + num2 * 10 +num3;
    fprintf(outputdata4, "%d", outputnum);
    /*
    num1 = inputnum / 100;
    num2 = (inputnum%100)/10;
    num3 = (inputnum%100)%10;
    printf("%d_%d_%d", num1, num2, num3);*/
    fclose(inputdata4);
    fclose(outputdata4);

    return 0;
}
