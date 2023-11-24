#include<stdio.h>
int main()
{
    int r,sqr,i;
    printf("Enetr range:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        sqr=i*i;
        printf("squre of %d is = %d\n",i,sqr);
    }
    return 0;
}