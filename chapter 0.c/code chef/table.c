#include <stdio.h>
int main (){
int i=1;
int a;

printf("which table you want\n");
scanf("%d",&a);

for (i ;i<=10; i++){
    printf("%d\n",a*i);
    

}
return 0;
}