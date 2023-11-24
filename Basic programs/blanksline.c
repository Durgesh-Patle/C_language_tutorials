#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter secound number :");
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
      { 
        printf("%d\n",i);
      }

      return 0;
}