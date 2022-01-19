#include <stdio.h>
int main()
{
    int num_students, sum = 0;
    char gender;
    printf("Enter the gender\n");
    scanf("%c", &gender);

    printf("Enter the number of students\n");
    scanf("%d", &num_students);

    int array[num_students];
    for (int i = 0; i < num_students; i++)
    {
            scanf("%d", &array[i]);
    }
    //    for (int i = 0; i < num_students; i++)
    // {
    //         printf("********%d\n", array[i]);
    // }

    
    
    
    if (gender== 'b'){
    
        for (int a = 0; a < num_students; a=a+2)       
        {
            sum= array[a]+sum;
        }
        printf("\n%d\n",sum);
    }
    else if (gender== 'g'){
        for (int a = 1; a < num_students; a=a+2)       
        {
            sum= array[a]+sum;
            
        }
        printf("%d\n",sum);

    }
        

    return 0;
}