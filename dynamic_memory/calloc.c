#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    int n;
    printf("Enter the number of element you want:=");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,4*n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element to enter at %d index:=",i);
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("the element at %d index=",i);
        printf("%d\n",*(ptr+i));
    }
    free(ptr);

    return 0;
}