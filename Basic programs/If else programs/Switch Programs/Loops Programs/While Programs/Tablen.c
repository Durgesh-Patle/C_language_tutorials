#include<stdio.h>
int main()
{
    int n, i=1;
    printf("enter a number:-");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d\n",n*i);
        i++;
    }
    return 0;
}