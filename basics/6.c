#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char name[]={'A','N','U'};
    char name1[]={'A','N','U','\0'};
    char name2[]={"ANU"};
    printf("%c",name[0]);
    printf("\n%c",name[1]);
    printf("\n%c",name[2]);
    printf("\n%s",name1);
    printf("\n%s",name2);

    return 0;
}