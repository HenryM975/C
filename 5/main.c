#include <stdio.h>
#include <stdlib.h>
FILE*inputdata5;
FILE*outputdata5;

int main()
{
    inputdata5 =  fopen("inputdata5.txt", "rt");
    outputdata5 = fopen("outputdata5.txt", "a+");
    int inputnum1;
    fscanf(inputdata5, "%d", &inputnum1);
    int mas[inputnum1];
    int i = 0;
    int part;
    while((part=fgetc(inputdata5)) != EOF)
    {
        fscanf(inputdata5, "%d", &mas[i]);
        i++;
    }
    int even_mas_num = 0;
    int odd_mas_num = 0;
    int even_mas[inputnum1];
    int odd_mas[inputnum1];
    ////////////////////////////////test
    for(int k = 0; k < inputnum1; k++)
    {
        even_mas[k] = 0;
        odd_mas[k] = 0;
    }
    ////////////////////////////////test
    for(int j = 0; j < inputnum1; j++)
    {
        if(mas[j]%2 == 0)
        {
            even_mas[even_mas_num] = mas[j];
            even_mas_num++;
        }
        else if(mas[j]%2 == 1)
        {
            odd_mas[odd_mas_num] = mas[j];
            odd_mas_num++;
        }
    }

    for(int k = 0; k < odd_mas_num; k++)
    {
        fprintf(outputdata5, "%d ", odd_mas[k]);
    }

    fprintf(outputdata5, "\n");

    for(int k = 0; k < even_mas_num; k++)
    {
        fprintf(outputdata5, "%d ", even_mas[k]);
    }

    if (even_mas_num > odd_mas_num)
    {
        fprintf(outputdata5, "\nYES\n");
    }
    else if (even_mas_num < odd_mas_num)
    {
        fprintf(outputdata5, "\nNO");
    }
    return 0;
}
