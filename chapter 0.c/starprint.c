#include <stdio.h>
int main()
{
    int a, b = 1, c = 1, d = 1;
    for (d; d > 0; d++)
    {

        printf("Enter the number\n\n");
        scanf("%d", &a);
        for (b; b <= a; b++)
        {
            for (c; c <= b; c++)
            {
                printf("*");
            }
            printf("\n");
            c = 1;
        }
        b = 1;
        d = 1;
    }
    return (0);
}