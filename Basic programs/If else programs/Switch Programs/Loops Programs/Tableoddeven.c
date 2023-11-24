#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("even=");
            printf("%d",i);
        }
          else
        {  
        printf("   odd=");
         printf("%d\n",i);
        }
        
    }
    return 0;
}