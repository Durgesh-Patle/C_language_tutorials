#include<stdio.h>
int main()
{
    int A=0,B=1,nextterm=0,n;
    printf("Enter a positive number:-");
    scanf("%d",&n);
     
    printf("fabonaccii series:- %d ,%d ", A ,B);
     nextterm=A+B;
    
    while(nextterm<=n)
    {   
        printf(", %d  ",nextterm);
        A = B;
        B = nextterm;
        nextterm = A+B;
    }
    return 0;
}