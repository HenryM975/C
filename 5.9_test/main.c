#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][20];
    int *b[5];
    //*b  = {d[3], e[6], f[15], g[6], h[2]};
    char *name[] = {"Неправильный месяц", "Янв", "Февр", "Март"};
    char aname[][15] = {"Неправ. месяц", "Янв", "Февр", "Март"};
    printf("%d - %d - %c", name[2], aname[2], aname[2][0]);

    return 0;
}
