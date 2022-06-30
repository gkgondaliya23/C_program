// without global variable 
#include<stdio.h>
int disPlay(int a, int b, int c, int total, float per)
{
    
    printf("Maths\tEnglish\tScience\tTotal\tPer\tGrade");
    printf("\n%d\t%d\t%d\t%d\t%.2f",a,b,c,total,per);
        if(per<35 || a<35 || b<35 || c<35)
    {
        printf("\t Fail");
    }
    else if (per>=35 && per<50)
    {
        printf("\t  D");
    }
    else if (per>=50 && per<65)
    {
        printf("\t  C");
    }
    else if (per>=65 && per<80)
    {
        printf("\t  B");
    }
    else if (per>=80)
    {
        printf("\t  A");
    }
    return 0;
}

int totalMarks(int a,int b, int c)
{
    int total;
    float per;
    total = a + b + c;
    per = total/3;
    disPlay(a,b,c,total,per);
    return 0;
}

void markEnter(int a, int b,int c)
{

    printf("Enter Maths marks:");
    scanf("%d",&a);
    printf("Enter English marks:");
    scanf("%d",&b);
    printf("Enter Science marks:");
    scanf("%d",&c);
    totalMarks(a,b,c);
    
}
int main()
{
    int a,b,c;
       markEnter(a,b,c);
    return 0;

}