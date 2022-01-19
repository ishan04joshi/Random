#include <stdio.h>

void display();// prototype

int main()
{
  int a;
  printf("initializing display function\n");
  display();// function call
  printf("Display function finished\n");

    return 0;
}
// function defination
void display(){
 printf(" this is display\n");
}