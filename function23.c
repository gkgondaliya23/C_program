// using function array running total.
/*
10
20  30
30  50
40  70
50  90
*/
#include<stdio.h>
#define n 5     // symbolic constant
void runningTotal(int a[])
{
    int i,c[n];
    for (i=0;i<n;i++)
    {
        if(i!=0)
        {
            c[i]= a[i] + a[i-1];
            printf("\n%d %d",a[i],c[i]);
        }
        else
        {
            printf("\n%d ",a[i]);
        }
        
    }

}
int array()
{
   int i,a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    runningTotal(a);
}
int main()
{
    array();
    return 0;
}