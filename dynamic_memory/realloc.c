#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    char* name=malloc(5);
    int n;
    printf("Enter the length of name:=");
    scanf("%d",&n);
    if(n>5)
    {
        name=realloc(name,n*1);
        scanf("%s",name);
        printf("%s",name);
    }
    else
    {
        scanf("%s",name);
        printf("%s",name);
    }

}