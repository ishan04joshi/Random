#include <stdio.h>
int main()
{
    int i=1;
    int a;
    printf("upto which you wanna print the natural numbers\n");
    scanf("%d", &a);
    do {
        printf("%d\n", i);
        i++;
    }while(i<=a);

    return 0;
}