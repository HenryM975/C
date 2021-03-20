#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

void itoa (int n, char s[])
{
 int i, sign;
 if ((sign = n) < 0) /* сохраняем знак */
 n = -n; /* делаем n положительным */
 i = 0;
 do { /* генерируем цифры в обратном порядке */
 s[i++] = n % 10 + '0'; /* следующая цифра */
 } while ((n /= 10) > 0); /* исключить ее */
 if (sign < 0)
 s[i++] = '-';
 s[i] = '\0';
 reverse(s);
}

