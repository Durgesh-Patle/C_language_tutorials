#include<stdio.h>
#include<math.h>
float squareArea(float side);
float circleArea(float rad);
float ractangleArea (float a, float b);

 int main()
 {    // ractangleArea.
     float a,b;
    // float a=5.0;
    // float b=10.0;
     printf("enter first number:");
     scanf("%f",&a);
     printf("enter secound number:");
     scanf("%f",&b);
      printf("area is:%f\n", ractangleArea(a,b));

      //squreArea.
    // float side=5.0;
    float side;
    printf("enter side:");
    scanf("%f",&side);
    printf("side is:%f\n",squareArea(side));

    //circleArea.
     //float rad=3.0;
     float rad;
     printf("enter rad:");
     scanf("%f",&rad);
     printf("Radius is :%f",circleArea(rad));

    return 0;

 }
  
  float squareArea(float side)
  {
    return side*side;
  }

  float circleArea(float rad)
  {
    return 3.14*rad*rad;
  }

   float ractangleArea (float a, float b)
   {
   return a*b;
   }