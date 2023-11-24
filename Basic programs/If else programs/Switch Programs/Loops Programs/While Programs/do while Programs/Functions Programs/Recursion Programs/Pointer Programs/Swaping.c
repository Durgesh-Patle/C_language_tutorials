#include<stdio.h>
int main()
{
    int a,b;
    int *ptra,*ptrb,*temp;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("\nBefor swaping:a:%d,b:%d",a,b);
     ptra=&a;
     ptrb=&b;

     temp=ptra;
     *ptra =*ptrb;
     *ptrb=*temp;

    printf("\nAfter swaping:a:%d,b:%d",a,b);

    return 0;
}