#include <stdio.h>
int main()
{
    char Name[100];

    int Roll_no[3], Marks1[3], Marks2[3], Marks3[3], Average[3];
    for (int i=0;i<3;i++){
        scanf("%c %d %d %d %d",&Name[i], &Roll_no[i], &Marks1[i], &Marks2[i],&Marks3[i]);
        Average[i] = (Marks1[i] +Marks2[i] +Marks3[i])/3 ;
        printf("%d\n", Average[i]);
    }
    if(Average[0]>Average[1] && Average[1]>Average[2]){
        printf("%c \n %c \n %c", Name[0], Name[1], Name[2], Name[3]);
    }
    

        return 0;
}