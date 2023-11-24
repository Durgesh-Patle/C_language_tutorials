#include<stdio.h>
int main()
{
    float p,r,t,c;
    printf ("enter the principle :");
    scanf("%f",&p);
    printf("enter the rate :");
    scanf("%f",&r);
    printf("enter the time :");
    scanf("%f",&t);
    c=(p*r*t)/100;
    printf("Simple intrest :%f",c);


    return 0;


}