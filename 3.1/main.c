#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int x = 6, n = 10;
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", binsearch(x, v, n));
    printf("%d\n", binsearch2(x, v, n));
    return 0;
}


int binsearch(int x, int v[], int n)
{
 int low, high, mid;
 low = 0;
 high = n - 1 ;
 while (low <= high) {
    sleep(1);
    mid = (low + high) / 2;
    if (x < v[mid])
        high = mid - 1;
    else if (x > v[mid])
        low = mid + 1 ;
    else /* совпадение найдено */
    return mid;
    }
 return -1; /* совпадения нет */
}

int binsearch2(int x, int v[], int n)
{
    int low, high, mid; //() ? :
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        sleep(1);
        mid = (low + high) / 2;
        (x < v[mid]) ? (high = mid - 1) : (low = mid + 1);
        if(x == mid)
        {
            return mid;
        }
    }
    return -1;
}

