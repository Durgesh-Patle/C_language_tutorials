#include<stdio.h>
int main()
{
    int row,col,i,j;
    int a[5][5];
    printf("enter row vlaue:-");
    scanf("%d",&row);
    printf("enter row colum:-");
    scanf("%d",&col);
    printf("eneter elements:-");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    } 
    printf("two D matrix:-\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" %d ",a[j][i]);
        }
        printf("\n");
    } 
    return 0;     
}
