#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    int n;
    printf("Enter the number of strings you want:=");
    scanf("%d",&n);
    char* arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=(char*)malloc(10*1);
        printf("Enter the name at %d index:=",i);
        scanf("%s",arr[i]);
        
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%s",arr[i]);
        free(arr[i]);
    }
    return 0;
}