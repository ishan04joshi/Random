#include <stdio.h>
float force(int a);

int main()
{
    int a;
    printf("Enter the mass to calculate weight\n\n");
    scanf("%d", &a);
    printf("The weight is **%.2f**", force(a));

    return 0;
}
float force(int a)
{
    float result;
    result = (float)a * 9.80;
    return result;
}