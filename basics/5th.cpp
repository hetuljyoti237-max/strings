#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double a=1234.1234;
    int b=12345;
    float c=12.12;
    long d=1234567;
    char ch='A';
    printf("%d",b);
    printf("\n%ld",d);
    printf("\n%.2f",c);
    printf("\n%.4lf",a);
    printf("\n%c",ch);
    return 0;
}