#include <stdio.h>
int main()
{
    int a, b = 1, c = 1;
    // a is no of lines
    // b is the nth line
    // c is the star in the nth line
    

    printf("Enter the number\n\n");
    scanf("%d", &a);


    for (b; b <= a; b++)
    {
        // for last line.
        if (b == a)
        {
            for (int i = 0; i < a; i++)
            {
                printf("*");
            }
        }
        // for intermediate lines.
        else
        {
            for (c; c <= b; c++)
            {
                if (c == 1 || c == b)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
            c = 1;
        }
    }

    return (0);
}