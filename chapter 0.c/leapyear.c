#include <stdio.h>

int main()
{
     int year, c, b, z = 1;
     float div;

     for (z; z > 0; z++)
     {
          printf("***Please enter the year you wanna chack***\n\n");
          scanf("%d", &year);
          div = year % 4; // to check divisiblity by 4

          b = year % 100; // divided by 100

          c = year % 400;      // checked is it evenly divided by400; //divided by 400

          if (div == 0) // if devisible by 4
          {

               if (b == 0) // if evenly divisible by 100
               {
                    if (c == 0) // if evenlydivisible by 400
                    {
                         printf("\nIts a LEAP year\n\n");
                    }
                    else // not or not evenly divisible by 400
                    {
                         printf("\nNo its a COMMON year\n\n");
                    }
               }

               else // if not evenly divisible by 100
               {
                    printf("\nIts a LEAP year\n\n");
               }
          }
          else // not divisible by 4
          {
               printf("\nNo its a COMMON year\n\n");
          }
     }

     return 0;
}