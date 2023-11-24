#include<stdio.h>
void main()
{
     int fab1,fab2=1;
     printf("enter the nuber :");
     scanf("%d",&fab1);
     for(int i=1;i<=fab1;i++)
     {
         fab2 = fab2*i;
     }
         printf("fabonic number is :%d",fab2);
    
    
}