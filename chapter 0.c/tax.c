# include <stdio.h>

int main(){
    float salary, tax;
    printf("Please enter your salary\n");
    scanf("%f", &salary);

    printf("Your salary is %f", salary);

    if(salary <= 250000){
        printf("Your TAX is 0.00");
    }
    else if (salary >=250000 && salary <=500000){
        tax = 0.05*(salary-250000);
        printf("Your TAX is %f", tax);

    }
    else if (salary >=500000 && salary <=1000000){
        tax =0.2*(salary-500000);
        printf("Your TAX is %f", tax);

    }
    else{
        tax = 0.3*(salary-1000000);
         printf("Your TAX is %f", tax);

    }
    



    return 0;

}