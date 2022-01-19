#include <stdio.h>
int main()
{
    int i, a,b;
    
    scanf("%d", &i);
    int ary[i];
    b=i-1;

    for (a = 0; a < i; a++)
    {
        scanf("%d", &ary[a]);
    }

    for(b ;b>=0;b--){
        printf("%d", ary[b]);
    }
    return 0;
}