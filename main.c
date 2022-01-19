#include <stdio.h>

int main(int argc, char const *argv[])
{

   // int, float , char
   int a = 7;                  // 2-4byte
   unsigned short integer = 8; // 2byte
   long integer1 = 7;          // 4byte
   short integer2 = 5;         //2byte

   float b = 8.0;                     // 4btye- 6 decimal place precision
   double myfloat1 = 7.737;           // 15 decimal place (8byte)
   long double myfloat = 7.737308436; // 19 decimal place (10byte)

   char c = 't'; // 1byte
   unsigned mychar = 'a';

   printf("the size taken by char is %d\n", sizeof(char));
   printf("the size taken by unsigned char is %d\n", sizeof(unsigned char));

   printf("the size taken by int is %d\n", sizeof(int));
   printf("the size taken by unsigned int is %d\n", sizeof(unsigned int));
   printf("the size taken by float is %d\n", sizeof(float));
   printf("the size taken by double is %d\n", sizeof(double));
   printf("the size taken by long double is %d\n", sizeof(long double));

   // creating variable
   int ishanYo;    // declaration of variable
   ishanYo = 17;   // initialisation of variable
   char yO = '18'; // initialisation and declaration in one line

   const int i = 18;
   printf("%d", i);

   ishanYo = 99;

   /*Types of operators 
1. arithematic
2. relation 
3. logical
4. bitwise/ binary 
5. assignment
6. misc...

*/

   // arithematic

   int x = 4, y = 21, z = 2;
   printf("\n sum %d", x + y);
   printf("\n subtraction %d", x - z);
   printf("\n multiply %d", x * y);
   printf("\n modulo %d", y % x);
   printf("\n increment %d", x++);
   printf("\n decrement %d\n", x--);

   // relation

   int ishan = 17, mark = 20;
   printf("%d\n", ishan == mark);
   printf("%d\n", ishan != mark);
   printf("%d\n", ishan > mark);
   printf("%d\n", ishan < mark);

   // logical

   int h = 0, j = 1;

   printf("output %d\n", h && j); // and opration
   printf("output %d\n", h || j); // or
   printf("output %d\n", !j);     // not j
   printf("output %d\n", !h);     // not h

   // assignment
   //=,+=,-=,*=,%=,etc

   int ha = 5;
   ha *= 9;
   printf("%d\n", ha);
   // misc.. &,*,?

   // to get input from user
   /* int valueInput;
printf("Enter rhe value of int\n");
scanf("%d", &valueInput);
printf("\n You entered %f as value input", (float) valueInput);*/

   // division of two numbers
   /*int num1, num2;
printf("Enter the value of number\n");
scanf("%d", & num1);
printf("Enter the value of number 2\n");
scanf("%d", & num2);
printf("num1/num2 is %f \n", (float) num1/num2);*/

   /*
// Decision Macking
int age;
printf("Enter your age\n");
scanf("%d", &age);
if(age<18){
   printf("You cannot drive a car");
}
else if (age>=18 && age<=20)
{
   printf("You can drive under special envirnment");
}
else{
   printf("You can drive a car");
}

// short hand if else
int i7=age>4?100:5;
printf("%d", i7);
*/

   // loop in C

   int index = 0;
   while (index < 100)
   {
      printf("%d \n", index);
      index++;
   }

   // for loop
   for (int r = 0; r < 50; r++)
   {
      printf("%d\n", r);
   }
   //do loop
   do
   {
      printf("do while loop is runnning");
   } while (z > 4008);

   return 0;
} 



































































