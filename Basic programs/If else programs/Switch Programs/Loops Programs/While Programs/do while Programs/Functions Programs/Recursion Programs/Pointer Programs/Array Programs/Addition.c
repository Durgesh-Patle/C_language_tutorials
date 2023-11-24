#include<stdio.h>
int main()
{
    int n,a[20],sum=0,i;
    printf("Number of array elements:-");
    scanf("%d",&n);
   // printf("enter array elements %d \n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    printf("total sum=%d.",sum);
  return 0;

}