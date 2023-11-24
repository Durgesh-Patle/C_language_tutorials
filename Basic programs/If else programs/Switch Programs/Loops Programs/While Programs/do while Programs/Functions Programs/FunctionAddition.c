#include<stdio.h>

int add(int x,int y);
int sub(int a,int b);

int main()
{
    int y=60,x=56;
    printf("Add=%d\n",add(x,y));

    int a=40,b=10;
    printf("sub=%d\n",sub(a,b));

    return 0;

}
int add(int x,int y)
{
    return x+y;
}
int sub(int a,int b)
{
    return a-b ;
}