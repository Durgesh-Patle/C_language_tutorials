#include<stdio.h>
int main()
{
   int a[3][3]={{8,7,6},{3,4,5},{5,6,7}};
   int ar[3][3]={{9,6,4},{5,6,7},{5,0,8}};
   int i,j;
   int array[3][3];
   printf("3*3 Matrix A :-\n");
   for(i=0;i<=2;i++){

   for(j=0;j<=2;j++)
   {
      printf(" %d ",a[i][j]);

   }
   printf("\n");
   }
   printf("3*3 Matrix B:-\n");
   for(i=0;i<=2;i++){

   for(j=0;j<=2;j++)
   {
      printf(" %d ",ar[i][j]);

   }
   printf("\n");
   }
   printf("3*3 Addition matrix C :-\n");
   for(i=0;i<=2;i++){

   for(j=0;j<=2;j++)
   {   
      array[i][j]= a[i][j] + ar[i][j];
      printf(" %d ",array[i][j]);
   }
    printf("\n");
   }
   return 0;  
}