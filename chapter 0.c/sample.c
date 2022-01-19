#include <stdio.h>
int main (){
int X=10;
{
    int x=20;
    X= x++ + ++x;

}
printf("%d\n",X);
return 0;
}