#include <stdio.h>
int main (){
int i=2,n, fac=1;
printf("Enter the value to find the factorial\n \n");
scanf("%d",&n);
while(i<=n){
    fac=fac*i;
    i++;
}
printf("The value of factorial is %d", fac);
return 0;
}