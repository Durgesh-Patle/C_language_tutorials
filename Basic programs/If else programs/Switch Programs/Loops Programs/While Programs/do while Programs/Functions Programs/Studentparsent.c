#include<stdio.h>
int calcparsentage(int pysics,int math,int chemestry );
int main()
{   
    int pysics=98;
    int math=96;
    int chemestry=99;
    printf ("parsentage is:%d",calcparsentage(pysics,math,chemestry));
    return 0;
}

int calcparsentage(int pysics,int math,int chemestry)
{
    return ((pysics+math+chemestry)/3);
}