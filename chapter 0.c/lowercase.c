#include <stdio.h>

int main(){
    // a-z has value of 97 to 122 in ASCII 
    char ch;
    printf("enter the digit \n");
    scanf("%c", &ch);

if (ch >= 97 && ch <= 122){
    printf("the character entered is lower case\n");

}
else {
    printf("the character entered is not lower case\n");
}

    return 0; 

}