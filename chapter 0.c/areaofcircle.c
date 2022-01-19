#include <stdio.h>


int main()
{

    float radius;
    float pi= 3.14;
    printf("Enter the value of radius\n");
    scanf("%f", &radius);
    
    printf("the area of circle is %f\n", pi*radius*radius);

    float height;

    printf("Enter the value of height\n");
    scanf("%f", &height);

    printf("the volume of cylinder is %f", pi*radius*radius*height);

    return 0;
}