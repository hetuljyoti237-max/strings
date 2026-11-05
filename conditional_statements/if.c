#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    int age;
    printf("Enter the age of the person:=");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Person with the age %d is eligible to vote",age);
    }
    else
    {
        printf("Person with the age %d is not eligible to vote",age);
    }
    return 0;
}