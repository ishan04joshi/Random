#include <stdio.h>
void swap(int *a, int *b);

int main (){
int a=2,b=5;
printf("The value of A and B before swap is %d and %d\n",a,b);

swap (&a, &b); 
printf("The value of A and B after swap is %d and %d\n",a,b);
return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a; 
    *a = *b;
    *b = temp;
}