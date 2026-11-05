#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char name[20],gender;
    int rollno;
    float fee;

    printf("Enter your name:");
    scanf("%s",&name);

    printf("Enter your gender:");
    scanf(" %c",&gender);

    printf("Enter your rollno:");
    scanf("%d",&rollno);

    printf("Enter your fee:");
    scanf("%f",&fee);

    printf("\nStudent name:%s",name);
    printf("\nStudent gender:%c",gender);
    printf("\nStudent rollno:%d",rollno);
    printf("\nStudent fee:%.2f",fee);
    
    
}