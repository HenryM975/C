#include <stdio.h>
#include <stdlib.h>




int main()
{
    char *name[] = {
 "awdawd",
 "awdawd", "awdawd", "awdawd",
 "awdawd", "awdaw", "awdaw",
 "awdaw", "awdaw", "awdawa",
 "awdawda", "awdawda", "awdawd"
    };
    printf("%d - %c - %d", name[4], *name[4], &name[4]);
    return 0;
}

