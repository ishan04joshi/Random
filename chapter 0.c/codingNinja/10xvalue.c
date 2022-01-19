#include <stdio.h>
void multiply(int *a, int b);

int main (){
int a = 5;
printf("The value of a is %d\n", a);
multiply(&a, a);
printf("The value of a after multiplication is %d\n", a);
return 0;
}
void multiply( int *a, int b){
    int x;
    x= 10*b;
    *a= *(&x);
}





