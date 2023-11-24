#include<stdio.h>
int main()
{
    int a,pass=10;
   
    while(pass!=0)
    {  
        printf("\nenter password:");
        scanf("%d",&a);

       if(a==9424)
       {
         printf("currect password.\n");
         printf("Thank You.\n");
         pass=0;
       }
       else
       {
         printf("Incorrect password.\n" );
         printf("Pleace Try Again.\n");
       }
       
    }
    return 0;
}