#include <stdio.h>
int main (){
int i=34,k=1502;

int *j = &i;
int *f = &k;

printf("the value of i is %d\n",i);
printf("the value of i is %d\n",*j);
printf("the address of i is %d\n",&i);
printf("the address of i is %u\n", j);
printf("the address of k is %u\n", f);


return 0;
}