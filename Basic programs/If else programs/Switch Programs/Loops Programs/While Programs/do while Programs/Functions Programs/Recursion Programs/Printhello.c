#include<stdio.h>
  //declaration/prototype.
void printHW(int count);

 //function call.
 int main()
 {
    printHW(5);
    return 0;
 }
  //defination.
 void printHW(int count)
 {
    if (count==0)
    {
        return;
    }
    printf("Hello World!\n");
    printHW(count-1);
 }