#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    int n=12345;
    int rev=0,rem;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
        
    }
    printf("%d",rev);
    return 0;
}