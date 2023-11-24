#include<stdio.h>
int main()
{
    int a=15,b=8, sum,sub,multy,no;
    printf("enter any number:");
    scanf("%d",&no);
     switch(no)
     {
        case 1:
        sum=a+b;
        printf("sum is:%d",sum);
        break;

        case 2:
        sub=a-b;
        printf("sub is:%d",sub);
        break ;

        case 3:
        multy=a*b;
        printf("multy is:%d",multy);
        break;

       default:
       printf("invalid value.");

       return 0;
     }

}