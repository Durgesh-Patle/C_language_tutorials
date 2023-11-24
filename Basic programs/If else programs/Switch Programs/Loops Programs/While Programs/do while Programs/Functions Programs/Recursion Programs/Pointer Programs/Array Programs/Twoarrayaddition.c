#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],i,n;
    printf("number of array:-");
    scanf("%d",&n);
    printf("enter %d elements A\n",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter %d elements B\n",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=n;i++)
    {
        c[i]=a[i]+b[i];
        //scanf("%d",&c[i]);
    }
    printf("Third Array\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",c[i]);

    }

  return 0;
}