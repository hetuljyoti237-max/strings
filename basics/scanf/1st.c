#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a,b;
    a=10;
    b=20;
    int sum=a+b;
    char c;
    float discount=12.0;

    scanf("%c",&c);
    printf("%d",sum);
    
    printf("\nWelcome\n");
    printf("%c",c);
    printf("\n%.3f",discount);
    return 0;
}