#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a,b,c;
    printf("enter the number to find the average\n\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("The average of the three numbers is %f\n\n", average(a, b, c));

    return 0;
}
float average(int a, int b, int c)
{
    float result;
    result =(float)(a + b + c) / 3;
    return result;
}