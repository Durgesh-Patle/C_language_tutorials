#include<stdio.h>
//declaration/prototype.
int printsum(int a,int b);
int printsub(int a,int b);
int printmulty(int a,int b);

//function call.
int main()
{  
 //Addition Two Number.
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter secound number :");
    scanf("%d",&b);
    
     int sum=a+b;
    printf ("sum is :%d\n",printsum(a,b));
 //Substraction Two Number.
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter secound number :");
    scanf("%d",&b);
    
    int sub=a-b;
    printf ("sub is :%d\n",printsub(a,b));
    
 //Multyplication Two Number.
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter secound number :");
    scanf("%d",&b);
    
    int multy=a*b;
    printf ("multy is :%d\n",printmulty(a,b));
    
    
    return 0;
}

//defination function.
int printsum(int a, int b)
{
    return a+b;
}

int printsub(int a,int b)
{
    return a-b;
}

int printmulty(int a, int b)
{
    return a*b;
}
