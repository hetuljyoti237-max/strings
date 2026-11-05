#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    char a,b,c;
    printf("using getchar\n");
    a=getchar();
    printf("Using getch\n\n");
    b=getch();
    printf("Using getche\n");
    c=getche();
    printf("\n%c %c %c",a,b,c);

    return 0;
}