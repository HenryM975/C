#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 123;
    int* place = &i;
    int** place_of_place = &place;
    printf("%d - place %d - place_of_place\n", place, place_of_place);
    //int data = *place;
    printf("(*(* - %d (* - %d ... - %d\n", **place_of_place, *place_of_place, place_of_place);
    (*place)++;
    printf("%d", i);
    printf("----------------------------\n");
    for(int j = 0; j < 20; j++)
    {
        printf("%d - place %12.0d - place_data\n", ++place, *place);
    }
    int* test_place = 6422096;
    *test_place = 1;
    place = 6422024;
    printf("-----------------------------\n");

    for(int j = 0; j < 20; j++)
    {
        printf("%d - place %12.0d - place_data\n", ++place, *place);
    }
    return 0;
}
