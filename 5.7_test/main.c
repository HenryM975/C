#include <stdio.h>
#include <stdlib.h>

int main()
{

    int test_mas[3][4];
    int part = 0;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
          test_mas[i][j] = part;
          part++;
          printf("%3.0d", part);
        }
        printf("\n");
    }
    printf("\n%d ---------------\n", test_mas[3][4]);
    int mas_3[3][4][5];
    part = 0;
    for(int k = 0; k < 3; k++)
    {
        for(int l = 0; l < 4; l++)
        {
            for(int m = 0; m < 5; m++)
            {
                mas_3[k][l][m] = part;
                printf("%4.0d", part);
                part++;
            }

        printf("\n");
        }
        printf("\n-------\n");
    }
    printf("\n%d\n", mas_3[3][3][3]);
    part = 0;
    int test_mas_4[4][3][2][2];
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                for(int l = 0; l < 2; l++)
                {
                    test_mas_4[i][j][k][l] = part;
                    printf("%4.0d ", test_mas_4[i][j][k][l]);
                    part++;
                }
                printf("\n");
            }
            printf("----------\n");

        }
        printf("**********\n\n");
    }
    char testmas_xxx[15][30];
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 30; j++)
        {
            if(i < 5 && j < 20)
            {
              testmas_xxx[i][j] = '*';
            }
            else
                testmas_xxx[i][j] = '-';
            printf("%c", testmas_xxx[i][j]);
        }
        printf("\n");
    }
    return 0;
}
