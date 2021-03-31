#include <stdio.h>
#include <stdlib.h> /* ��� atof() */
#define MAXOP 100 /* ����. ������ �������� ��� ��������� */
#define NUMBER '0' /* ������� ����� */
int getop (char []);
void push (double);
double pop (void);
/* ����������� � �������� �������� ������� */
main ()
{
 int type;
 double op2;
 char s[MAXOP];
    while ((type = getop (s)) != EOF) {
        switch (type) {
        case NUMBER: push (atof (s));
        break;
        case '+':
        push (pop() + pop());
        break;
        case '*':
        push (pop() * pop());
        break;
        case '-':
        op2 = pop();
        push (pop() - op2);
        break;
        case '/' :
        op2 = pop();
        if (op2 != 0.0)
        push (pop() / op2);
        else
        printf("������: ������� �� ����\�");
        break;
        case '\n' :
        printf("\t%.8g\n", pop());
        break;
        default:
        printf("������: ����������� �������� %s\n", s);
        break;
        }
        }
 return 0;
}


#define MAXVAL 100 /* ������������ ������� ����� */
int sp = 0; /* ��������� ��������� ������� � ����� */
double val[ MAXVAL ]; /* ���� */
/* push: �������� �������� f � ���� */
void push(double f)
{
 if (sp < MAXVAL)
 val[sp++] = f;
 else
 printf( "������: ���� �����, %g �� ����������\�", f);
}
/* pop: ����� � ������� ����� � ������ � �������� ���������� */
double pop(void){
 if (sp > 0)
 return val[--sp];
 else {
 printf( "������: ���� ����\�");
 return 0.0;
 }
}

#include <ctype.h>
int getch(void);
void ungetch(int);
/* getop: �������� ��������� �������� ��� ������� */
int getop(char s[])
{
 int i, c;
 while ((s[0] = � = getch()) == ' ' || � == '\t' )
    ;
 s[1] = '\0';
 if (!isdigit(c) && � != '.')
 return �; /* �� ����� */
 i = 0;
 if (isdigit(c)) /* ����������� ����� ����� */
 while (isdigit(s[++i] = � = getch()))
 ;
 if (� == '.') /* ����������� ������� ����� */
 while (isdigit(s[++i] = � = getch()))
 ;
 s[i] = '\0';
 if (c != EOF)
 ungetch(c);
 return NUMBER;
}

