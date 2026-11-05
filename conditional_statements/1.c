#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    for(int i=65;i<71;i++)
    {
        for(int j=65;j<=i;j++)
        {
            printf("%c ",(char)j);
        }
        printf(" \n");
    }
    return 0;
}