#include <stdio.h>
#include <stdlib.h>

int main()
{
    char amessage[] = "now is the time";
    char second_amessage[] = "now is the time";
    char *pmessage = "now is the time";
    char *second_pmessage = "now is the time";
    printf("%d - pmes %d - s_pmes\n", pmessage, second_pmessage);
    printf("%d - ames %d - s_ames\n", &amessage, &second_amessage);
    printf("%s %s\n", amessage, pmessage);
    char *t = "qwerty";
    char *s = "ytrewq";
    printf("%s - %d - *t  %s - %d - *s\n", t, t, s, s);
    /*while((*s++ == *t++) != '\0')//???
    {
        ;
    }*/
    s = t;// 1 adress
    printf("%s - %d - *t  %s - %d - *s\n", t, t, s, s);
    return 0;
}
