#include<stdio.h>
//declaration/prototype.
void printHello();
void printGodbye();

int main()
{
    printHello();  //function call.
    printGodbye();
    printHello();
    printGodbye();
    return 0;
}
//function definition.
void printHello()
{
    printf("Hello!\n");
}

void printGodbye()
{
    printf("Godbye:\n");
}