# include<stdio.h>
# include<math.h>

int main(){

    int a;
    printf("Write the number you want to check\n");
    scanf("%d", &a);
    
    int b= a%97;
    printf("%d\n" ,b);

    if (b==0) {
        printf("the number is divisible by 97\n");
    } 
    else {
        printf("the number is not divisible by 97\n");
    }





    return 0;

}