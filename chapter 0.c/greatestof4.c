# include <stdio.h>
int main(){
    int a,b,c,d;
     printf("Enter the 1st number\n");
     scanf("%d", &a);

     printf("Enter the 2nd number\n");
     scanf("%d", &b);

     printf("Enter the 3rd number\n");
     scanf("%d", &c);

     printf("Enter the 4th number\n");
     scanf("%d", &d);

if ((a>b && a>c) && a>d){
    printf("The **1st** number is greatest\n");
}
else if (b>c && b>d){
     printf("The **2nd** number is greatest\n");
}
else if (c>d){
     printf("The **3rd** number is greatest\n");

}
else if (d>c){
     printf("The **4th** number is greatest\n");
}




return 0;
}