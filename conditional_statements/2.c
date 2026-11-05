#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           if(i==0||i==4||j==0||j==4||j==4-i+1||i==4-j+2)
           {
            printf("1");
           }
           else{
            printf("");
           }
           
        }
        printf("\n");
    }
    return 0;
}