#include<stdio.h>
int main()
{
    int n, i,j;
    int a[5][5];
    printf("Enter any array elements:-");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }

}