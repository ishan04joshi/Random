#include <stdio.h>
int sum(int a);

int main()
{
    int a;

    printf("Enter the number upto which you wanna find sum \n");
    scanf("%d", &a);
    printf("The sum is %d", sum(a));

    return 0;
}

int sum(int a)
{
    int result;

    if (a == 1)
    {
        result = 1;
    }

    else
    {
        result =a + sum(a - 1);
    }
    return result;
}