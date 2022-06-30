// using global variable 
#include<stdio.h>
int maths,eng,sci,total;
float per;
int marks()
{
    printf("Enter Maths marks:");
    scanf("%d",&maths);
    printf("Enter English marks:");
    scanf("%d",&eng);
    printf("Enter Science marks:");
    scanf("%d",&sci);
    return 0;
}
int totalMarks()
{
    
    total = maths + eng + sci;
    per = total/3;
    
    return 0;
}
int disPlay()
{
    printf("Maths\tEnglish\tScience\tTotal\tPer\tGrade");
    printf("\n%d\t%d\t%d\t%d\t%.2f",maths,eng,sci,total,per);
    if(per<35 || maths<35 || eng <35 || sci<35)
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
}
int main()
{
    marks();
    totalMarks();
    disPlay();
    return 0;

}