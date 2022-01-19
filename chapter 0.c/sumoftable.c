#include <stdio.h>
int main (){
int i=1, n, sum = 0,a;
printf("the value of n is....");
scanf("%d", &n);
while(i<=10){
    a=i*n;
    sum=sum+a;
    i++;
}
printf("the value of sum is %d\n",sum);
return 0;
}