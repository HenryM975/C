#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
//#include <math.h>
#include <time.h>//need to continue in rand
#define width 65
#define height 25


typedef struct {
    int x,y;
    int w;
} TRacket;

typedef struct{
    float x, y;
    int ix, iy;
    float alfa;
    float speed;
}TBall;

typedef struct {
    int firstrand_x;
    int firstrand_y;
    float finalrand_x;
    float finalrand_y;
}Random;

char mas[height][width+1];
TRacket racket;
TBall ball;
Random random;

void moveBall(float x, float y)
{
    ball.x = x;
    ball.y = y;
    ball.ix = (int)round(ball.x);
    ball.iy = (int)round(ball.y);
}

void initBall()
{
    moveBall(3, 3);
    //ball.alfa = -1;
    //ball.speed = 0,5;
}
void putBall()
{
    mas[ball.iy][ball.ix] = '*';
}
/*void moveBall(float x, float y)
{
    ball.x = x;
    ball.y = y;
    ball.ix = (int)round(ball.x);
    ball.iy = (int)round(ball.y);
}*/
int special_variable_x = 1;
int special_variable_y = 1;
int randomBalljump;

void autoMoveBall()
{
    TBall bl = ball;
    ball.speed = 0.5;
    moveBall(ball.x - 1*special_variable_x*0.08 /* * randomBalljump*/, ball.y - 1*special_variable_y*0.08 /* *randomBalljump */);

    if(mas[ball.iy][ball.ix] == '#')//make 4 blocks
    {

        if((ball.ix <= 13) && (ball.iy <= 33))//lup
           {
               special_variable_x = -1;
               special_variable_y = -1;
           }
        if((ball.ix <= 13) && (ball.iy > 33))//ldown
            {
                special_variable_x = -1;
                special_variable_y = 1;
            }
        if((ball.ix > 13) && (ball.iy <= 33))//rup
            {
                special_variable_x = 1;
                special_variable_y = -1;
            }
        if((ball.ix > 13) && (ball.iy > 33))//rdown
            {
                special_variable_x = 1;
                special_variable_y = 1;
            }


        /*if (mas[height - 2][ball.ix] == '#')//test!!!!!!!!!!!!!!!!!!
        {

            srand(time(NULL));
            random.firstrand_x = rand();
            random.firstrand_y = rand();
            random.finalrand_x = random.firstrand_x%3;
            random.finalrand_y = random.firstrand_y%3;
            if((random.finalrand_x == 0) || (random.finalrand_x == 0))
            {
                random.finalrand_x = 1;
                random.finalrand_y = 1;
            }

            special_variable_x = -1 * random.finalrand_x;
            special_variable_y = 1 * random.finalrand_y;//srand(time(NULL))%3;
            //randomBalljump = 1.0;///////////////////////////////
        }
        */
    }

}

void init()
{
    for(int i = 0; i < width; i++)
    {
        mas[0][i] = '#';
    }

    mas[0][width] = '\0';
    strncpy(mas[1], mas[0], width+1);

    for(int i = 1; i < width - 1; i++)
    {
        mas[1][i] = ' ';
    }


    for(int i = 2; i < height - 1; i++)
    {
        strncpy(mas[i], mas[1], width+1);
    }
    for(int i = 0; i < width; i++)
    {
        mas[height - 1][i] = '#';
    }

}

void show()
{
    for(int i = 0; i < height; i++)
    {
        printf("%s", mas[i]);
        if(i < height - 1)
            printf("\n");
    }
}
void setcur(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{

    char c;
    BOOL run = FALSE;
    initBall();
    do
    {
    setcur(0,0);
    if (run)
    {
        autoMoveBall();
    }
    if (ball.iy > height)
    {
        run = FALSE;
    }

    init();
    putBall();
    show();

    if(GetKeyState('W') < 0) run = TRUE;
    if (!run)
        moveBall(racket.x + racket.w / 2, racket.y - 1 );
    autoMoveBall();
    //Sleep(100);//delete for real speed
    }
    while(GetKeyState(VK_ESCAPE) >= 0);

    return 0;
}
