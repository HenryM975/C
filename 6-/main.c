#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE*inputdata6 = fopen("inputdata6.txt", "rt");
    FILE*outputdata6 = fopen("outputdata6.txt", "a+");
    char inputnum;
    fscanf(inputdata6, "%c", inputnum);
    printf(inputnum);
    return 0;
}
