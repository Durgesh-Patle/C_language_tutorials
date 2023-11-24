#include<stdio.h>  // declaration/ prototype.
void namaste();
void bonjour();
// function call.
int main()
{
    printf("enter f for freach & i for indian :");
    char ch;
    scanf("%c",&ch);
    if (ch=='i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }

}
// function defination.
void namaste()
{
    printf("Namaste\n");
}

void bonjour()
{
    printf("Bonjour\n");
}