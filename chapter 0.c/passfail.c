#include <stdio.h>

int main()
{
    float eng, math, sci;

    printf("Marks in English\n");
    scanf("%f", &eng);

    printf("Marks in Maths\n");
    scanf("%f", &math);

    printf("Marks in Science\n");
    scanf("%f", &sci);

    float average = (eng + math + sci) / 3;

    printf("Marks in English is %f\n", eng);
    printf("Marks in Maths is %f\n", math);
    printf("Marks in Science is %f\n", sci);
    printf(" your total Marks is %f\n", average);

    if(((eng>33 && math >33) && sci >33) && average >40 ){
        printf("Congrats you passed \n");
    }
    else {
        printf("Holy shit you failed");
    }

    return 0;
}