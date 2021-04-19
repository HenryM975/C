#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[10];
    int last_part = &list[-1];
    int first_part = &list[0];
    printf("%d %d => %d\n", last_part, first_part, last_part-first_part);
    int mas_len = &list[-1] - &list[0];
    printf("%d %d => %d ???",&list[-1], &list[0], mas_len);
    return 0;
}
