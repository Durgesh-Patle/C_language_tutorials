#include<stdio.h>
int main()
{
     char operation;
     printf("enter operation('+','-','*','/'):");
     scanf("%c",&operation);
    int n1,n2, sum,sub,multy,div;
    printf("enter two number:");
    scanf("%d%d",&n1,&n2);

    switch(operation)
    {
        case '+':
        sum=n1+n2;
        printf("sum is=%d",sum);
        break;

        case '-':
        sub=n1-n2;
        printf("sub is=%d",sub);
        break;

        case '*':
        multy=n1*n2;
        printf("multy is=%d",multy);
        break;

        case '/':
        div =n1/n2;
        printf("div is =%d",div);
        break;

        default:
        printf("invalid oprator");

    }
     return 0;
}