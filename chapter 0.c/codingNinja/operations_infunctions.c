#include <stdio.h>
void operator(int a, int b, int *sum, float *average)
{
    *sum = a + b;
    *average = *sum / 2;
}

int main()
{
    int i = 5, j = 9, sum;
    float average;
    operator(i, j, &average, &sum);
    printf("The average of a and b are %f\n", average);
    printf("The sum of a and b are %d\n", sum);
    return 0;
}

