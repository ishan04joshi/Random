#include <stdio.h>
int main()
{
    int i = 10;
    int a;
    printf("the number\n ");
    scanf("%d", &a);
    for (a; i >= 1; i--)
    {
        printf("%d\n", a * i);
    }
    return 0;
}