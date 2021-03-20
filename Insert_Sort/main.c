#include <stdio.h>
#include <stdlib.h>
//int mas1[5] = {11, 10, 9, 1, 3};
int mas1[6] = {31, 41, 59, 26, 41, 58};
int main()
{
 for(int j = 1; j < 6; j++)
 {
     int key = mas1[j];
     int i = --j;
     //test

     for(int k = 0; k<6; k++)
    {
     printf(" %d ", mas1[k]);
    }
    printf("\n");



     //test
     while((i >= 0) && (mas1[i] > key))
     {
         mas1[i+1] = mas1[i];
         --i;
     }
     mas1[++i] = key;
     j++;
 }
 printf("\n");
 for(int k = 0; k<6; k++)
 {
     printf("%d ", mas1[k]);
 }
    return 0;
}
