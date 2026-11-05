#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char name[20];
    printf("Enter your Name:=");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    return 0;
}
