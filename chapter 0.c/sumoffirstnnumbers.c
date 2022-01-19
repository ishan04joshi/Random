#include <stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("number n is");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("number sum is %d\n",sum);

    return 0;
}