#include <stdio.h>

int prime(int n)
{
    int i = 2, check = 0, prime=1, a;
    
    if (n == 0 || n == 1)
    {
        a=1;
        //the number entered is not prime
    }
    if (n == 2)
    {
        a=0;
       //the number entered is prime
    }
    else
    {
        while (i < n )
        {
            check = n % i;
            if (check == 0)
            {

                //the number entered is not prime
                a=1;
                prime = 0;
                break;
            }

            i++;
        }
        if(((prime == 1 && n!=0) && n!=1)&& n!=2){
            a=0;
            //the number entered is prime
        }
        
    }


    int *temp= &a;



    return *temp;
}

int main()
{
    int number_of_dishes, total=0,final_price, a = 0;

    scanf("%d", &number_of_dishes);

    int price[number_of_dishes];

    for (int i = 0; i < number_of_dishes;i++){
        scanf("%d", &price[i]);
    }
    for (int i = 0; i < number_of_dishes;i++){
        total = total+price[i];
        
    }
    final_price = total + total*0.18;

    a = prime(final_price);   
    

    if (a==0)       
    {
        printf("Ravi will pay the bill\n");
    }
    else if(a==1){
        printf("Suraj will pay the bill\n");
    }
    
    return 0;
}