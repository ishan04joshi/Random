#include<stdio.h>
int main() {
    int n, a, b;
    scanf("%d", &n);
    for (int a = 1; a <= n; a = a + 2)
    {
        for (b = 1; b <= (n - a) / 2; ++b)
        {
            printf(" ");
        }
        for (b = 1; b <= a; ++b)
        {
            printf("*");
        }
        printf("\n");
    }
    for (a = n / 2 + n / 2 - 1; a >= 1; a = a - 2)
    {
        for (b = 1; b <= (n - a) / 2; ++b)
        {
            printf(" ");
        }
        for (b = 1; b <= a; ++b)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}