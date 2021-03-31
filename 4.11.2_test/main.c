#include <stdio.h>
#include <stdlib.h>
#define max(a, b) ((a > b) ? a : b)
#define paste(front, back) front ## back
#define dprint(expr) printf(#expr" %d \n", expr)

int main()
{
    printf("Hello world!\n");
    int x = 1, y = 2;
    printf("%d\n", max(y, x));
    printf("%d\n", max(y++, x++));
    //paste(paste, test);
    //printf("%d\n", pastetest);
    printf("x - %d y - %d\n", x , y);
    dprint(y/x);

    return 0;
}
