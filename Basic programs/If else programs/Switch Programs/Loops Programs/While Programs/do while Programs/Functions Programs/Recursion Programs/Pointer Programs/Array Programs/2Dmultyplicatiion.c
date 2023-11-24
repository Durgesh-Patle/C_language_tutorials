#include<stdio.h>
int main()
{
   int a[2][2],arr[2][2],array[2][2];
   int i,j,P,Q,R,S,T,U,V;

   printf("enter the 4 elements of first matrix:");
   for(i=0;i<2;i++){

   for(j=0;j<2;j++)
   {
      scanf(" %d ",&a[i][j]);

   }
   }
   printf("enter the 4 elements of secound matrix:");
   for(i=0;i<2;i++){

   for(j=0;j<2;j++)
   {
      scanf(" %d ",&arr[i][j]);

   }
   }
   printf("\n first matrix:\n");
   for(i=0;i<2;i++){

   for(j=0;j<2;j++)
   {
      printf(" %d ",a[i][j]);

   }
   printf("\n");
   }
   printf("\n secound matrix:\n");
   for(i=0;i<2;i++){

   for(j=0;j<2;j++)
   {
      printf(" %d ",arr[i][j]);

   }
   printf("\n");
   }
  
   P=(a[0][0]+ a[1][1])*(arr[0][0]+arr[1][1]);
   Q=(a[1][0]+a[1][1])*arr[0][0];
   R=a[0][0]*(arr[0][1]-arr[1][1]);
   S=a[1][1]*(arr[1][0]-arr[0][0]);
   T=(a[0][0]+a[0][1])*arr[1][1];
   U=(a[1][0]-a[0][0])*(arr[0][0]+arr[0][1]);
   V=(a[0][1]-a[1][1])*(arr[1][0]+arr[1][1]);

   array[0][0]=P+S-T+V;
   array[0][1]=R+T;
   array[1][0]=Q+S;
   array[1][1]=P-Q+R+U;

    printf("multyplication of two matrix:\n");
     for(i=0;i<2;i++){

   for(j=0;j<2;j++)
   {
      printf(" %d ",array[i][j]);

   }
   printf("\n");
   }
  return 0;
}