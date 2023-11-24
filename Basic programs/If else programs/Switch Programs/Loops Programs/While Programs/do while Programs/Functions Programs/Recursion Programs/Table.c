#include<stdio.h>
 int printTable(int n);

 int main()
 { 
     int n;
     printf("enter any number:");
     scanf("%d",&n);
     for( int i=1;i<=n;i++)
     printf("Table is :\n",printTable(n));
    
    return 0;
 }

 int printTable(int n)
 {
  if(n==0)
  {
    return;
  }
  printf("%d\n");
  printf(n-1);
 }
