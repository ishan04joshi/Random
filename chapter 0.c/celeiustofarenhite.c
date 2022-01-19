#include <stdio.h>

float convert(int x);

int main()
{
    float x;
    printf("Enter the temprature in degree celcius\n");
    scanf("%f", &x);
    printf("the temprature in Farenheit of %f is****%.2f****\n", x, convert(x));
    return 0;
}
float convert(int x)
{
    float result,a,b;
    a =(float)x/5;
    b=(float)a*9;
    result =(float)(b+ 32);
    return result;
}