// 5 students marks total, percentage, grade
#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],t[5],i;
    float p[5];
    
    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("Enter b[%d]:",i);
        scanf("%d",&b[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("Enter c[%d]:",i);
        scanf("%d",&c[i]);
    }
    printf(" maths\t phy\t chem\t total\t per\tGrade");
    printf("\n----------------------------------------------");
    for(i=0;i<5;i++)
    {
        t[i]= a[i] + b[i] + c[i];
        p[i] = (t[i]*100)/300;
        printf("\n %d \t %d\t %d\t %d\t %.2f",a[i],b[i],c[i],t[i],p[i]);
        if(p[i]<35 || a[i]<35 || b[i]<35 || c[i]<35){
            printf("\tFail");
        }
        else if(p[i]>=60 && p[i]<80)
        {
            printf("\t  B");
        }
        else if(p[i]>=45 && p[i]<60)
        {
            printf("\t  c");
        }
        else if(p[i]>=35 && p[i]<45)
        {
            printf("\t  D");
        }else if(p[i]>=80)
        {
            printf("\t  A");
        }
        
        
    }
    return 0;
}