#include <stdio.h>
#include <math.h>

int main()
{

    int x;
    float y;
    scanf("%d %f", &x, &y);

    if (x%5!=0 || x+0.50>y)
    {

        printf("%.2f",y);
    }
    else
    {
        printf("%.2f ", y-x-0.50);
    }

    return 0;
}