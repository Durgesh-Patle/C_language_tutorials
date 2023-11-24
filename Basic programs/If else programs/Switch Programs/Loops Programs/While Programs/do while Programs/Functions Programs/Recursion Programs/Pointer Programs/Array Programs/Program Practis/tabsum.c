#include<stdio.h>
int main ()
{
    int n,i,j,sum=0;
    printf("enter the number:-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
     printf("sum is:-%d",sum);

     for(j=sum;j<=100;j++)
     {
        printf("\n%d",j);
     }
     return 0;
}