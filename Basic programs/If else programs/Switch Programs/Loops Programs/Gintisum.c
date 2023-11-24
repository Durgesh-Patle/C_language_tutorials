#include<stdio.h>
int main()
{
  // int sum=0;
    int n ,sum=0;
    printf("enter any number:");
    scanf("%d",&n) ;  
     for (int i=1;i<=n;i++)
     {
        printf("%d\n",i);
        sum=sum+i;
     }
        printf("sum is:%d",sum);

     return 0;
}