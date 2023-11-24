#include<stdio.h>
int main ()
{
    int n, i,pass=2784;
        printf("enter password:-");
        scanf("%d",&n);
        if(pass==n)
        {
            printf("Currect Password.");
        }
        else
        {
          printf("Wront Password."); 
        }
  return 0;
}