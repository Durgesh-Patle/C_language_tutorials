#include<stdio.h>
int main()
{
   /* int no;
    printf("enter any  number:");
    scanf("%d",&no);*/
    for(int i=1;i<=100;i++)
    {
    if(i%2==0)
    {
        printf("Even=");
        printf("%d",i);
    
    }
    else
    {
        printf("   Odd=");
        printf("%d\n",i);

    }
    }
     return 0;

}