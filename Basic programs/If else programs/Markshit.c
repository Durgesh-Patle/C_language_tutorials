#include<stdio.h>
int main()
{
    /* char c;
    printf("Enter name :- ");
    scanf("%c",&c);*/

    int roll;
    printf("Enter roll number :");
    scanf("%d",&roll);

    float mathas,physics,english ,total,per;
    printf("Enter number of maths :");
    scanf("%f",&mathas);
    printf("Enter physics number :");
    scanf("%f",&physics);
    printf("Enter english number :");
    scanf("%f",&english );

    total=mathas+physics+english;
    printf("total is =%f\n",total);

    per =total/3;
    printf("persents is=%f\n",per);

    if(per>=33 && per<40)
    {
        printf("Grade C");
    }
    else if(per>=40 && per<=60)
    {
        printf("Grade B");
    }
    else if(per>60 && per<=75)
    {
        printf("Grade A");
    }
    else if(per>=75 && per<=100)
    {
        printf("Grade A+");
    }
    else if(per<33)
    {
        printf("Fail");
    }

    if(mathas<33 || physics<33 || english<33)
    {
        printf("\nFail");
    }
    else
    {
        printf("\nPass");
    }
       return 0;
    
}