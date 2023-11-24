#include<stdio.h>
int main()
{
   int a[3][3]={{8,7,6},{3,4,5},{5,6,7}};
   int i,j;
   printf("3*3 Matrix :-\n");
   for(i=0;i<=2;i++){

   for(j=0;j<=2;j++)
   {
      printf(" %d ",a[i][j]);

   }
   printf("\n");
   }
   
}