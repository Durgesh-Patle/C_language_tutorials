#include<stdio.h>
int main ()
{
    int no;
    printf("enter any number:");
    scanf("%d",&no);
    switch(no)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesdsy");
        break;
        case 3:
        printf("wednsday");
        break;
        case 4:
        printf("thrusday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("suterday");
        break;
        case 7:
        printf("sunday");
        break ;
        default:
        printf("invalid day");

    }
}