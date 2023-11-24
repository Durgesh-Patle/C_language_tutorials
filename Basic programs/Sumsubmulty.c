#include<stdio.h>
int main()
{
    int a,b ,sum,sub,multy;
    float avg;
    a=45;b=65;
    sum=a+b;
    printf("sum is:-%d",sum);

    sub=sum-a;
    printf("\nsub is:-%d",sub);

    multy=sum*sub;
    printf("\nmulty is:-%d",multy);
     
    avg=(sum+sub+multy)/3;
    printf("\nAvrage is:-%f",avg);

    return 0;

}