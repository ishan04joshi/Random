#include <stdio.h>
int main()
{
    int i = 2, n, check = 0, prime=1;
    printf("Enter the number whick you wanna check\n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("the number entered is not prime ");
    }
    if (n == 2)
    {
        printf("the number entered is prime\n");
    }
    else
    {
        while (i < n )
        {
            check = n % i;
            if (check == 0)
            {

                printf("the number entered is not prime\n");
                prime = 0;
                break;
            }

            i++;
        }
        if(((prime == 1 && n!=0) && n!=1)&& n!=2){
            printf("the number entered is prime\n");
        }

    }
    return 0;
}
