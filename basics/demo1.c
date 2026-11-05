#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int roll_no;
    char name[20];
    float Menglish,Mmaths,Mhindi,Mpunjabi,Mscience,Msst;
    printf("Enter your name:=");
    scanf("%s",&name);
    printf("Enter your roll_no:=");
    scanf("%d",&roll_no);
    printf("Enter your maths marks:=");
    scanf("%f",&Mmaths);
    printf("Enter your english marks:=");
    scanf("%f",&Menglish);
    printf("Enter your science marks:=");
    scanf("%f",&Mscience);
    printf("Enter your sst marks:=");
    scanf("%f",&Msst);
    printf("Enter your hindi marks:=");
    scanf("%f",&Mhindi);
    printf("Enter your punjabi marks:=");
    scanf("%f",&Mpunjabi);
    float total=(Menglish+Mhindi+Mmaths+Mpunjabi+Msst+Mscience)/6;
    printf("Student name is %s",name);
    printf("\nStudent roll_no is %d",roll_no);
    printf("\nStudent Total percentage is %.2f %",total);
    return 0;
}