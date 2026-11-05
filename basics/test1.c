#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    printf("Enter string to check : ");
    char str[25];
    gets(str);
    
    char c=str[0];
    if(c=='_'||(c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        int ind = 1;
        while(str[ind]!='\0'){
            c=str[ind];
            if((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z')||c=="_"){
                ind++;
            }else{
                printf("%s is not valid identifier, it could not have %c", str, str[ind]);
                return 0;
            }
        }
    }else{
        printf("%s is not valid identifier, it could not start with %c", str, str[0]);
        return 0;
    }
    printf("%s is valid identifier.", str);
    return 0;
}
