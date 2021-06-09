#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define width 65
#define height 25
char mas[height][width+1];

void init()
{
    for(int i = 0; i<width; i++)
            mas[0][i] = '#';
    mas[0][width] = '\0';

    strncpy(mas[1], mas[0], width+1);


    for(int j = 2; j<width-1; j++)
        mas[1][j] = ' ';


    for(int k = 2; k<height; k++)
            strncpy(mas[k], mas[0], width+1);

}


void show()
    {
        for(int i=0; i<height; i++)
            printf("%s\n", mas[0]);
    }

int main()
{
    init();
    show();
   return 0;
}
