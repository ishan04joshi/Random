#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, b=0,c=0;
    scanf("%d",&i);
    
    for( b ;b<i;b++){
        int arr[i];
        scanf("%d", &arr[b]);
        c= arr[b]+c;
    }   
    printf("%d",c);
    
    return 0;
}