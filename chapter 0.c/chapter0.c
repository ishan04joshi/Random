#include <stdio.h>

int main()
{
    printf("hello world\n");
    int a, b;

    printf("the value of a\n");
    scanf("%d", &a);
    printf("the value of b\n");
    scanf("%d", &b);

    printf("the sum of a and b is %d", a+b);

    return 0;
}