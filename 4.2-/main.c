#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLINE 100

int main()
{
    double sum;
    double atof (const char* str);
    char line[MAXLINE];
    int getline (char line[], int max);
    sum = 0;
    while (getline(line, MAXLINE) > 0)
        printf ("\t%g\n", sum += atof(line));

    return 0;
}

double atof(char s[])
{
 double val, power;
 int i, sign;
 for (i = 0; isspace (s[i]); i++)
    ; /* игнорирование левых символов-разделителей */
 sign = (s[i] == '-') ? -1 : 1;
 if (s[i] == '+' || s[i] == '-')
        i++;
 for (val = 0.0; isdigit (s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
 if (s[i] =='.')
        i++;
 for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
 return sign * val / power;
}

