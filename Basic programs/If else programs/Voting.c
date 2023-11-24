#include<stdio.h>
int main ()
{
    int age;
    printf("enter age :");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("eligible for vot.");
    }
    else
    {
        printf("not eligible for vot.");
    }
     return 0;
}