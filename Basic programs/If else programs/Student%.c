#include<stdio.h>
int main()
{
    
     int x;
     printf("enter any number: ");
     scanf("%d",&x);
    if(x>=95)
    {
        printf("A++");
    }
    else if(x<=95 && x>=75)
    {
        printf("A+");
    }
    else if(x<=75 && x>=60)
    {
        printf("A");
    }
    else if (x<=60 && x>=45)
    {
        printf("B");
    }
    else if(x<=45 && x>=33)
    {
        printf("C");
    }
    else
    {
        printf("Fail");
    }
      return 0;

}