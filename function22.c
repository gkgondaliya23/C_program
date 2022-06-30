// using function array calling largest and smallest no.
#include<stdio.h>
#define n 5     // symbolic constant
int manimum(int a[])
{
   int i,t;
   t=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]<t)
        t=a[i];
    } 
    return t;
}
int maximum(int a[])
{
   int i,t;
   t=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]>t)
        t=a[i];
    } 
    return t;
}
int main()
{
    int i,a[n],max,min;
    for (i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    max=maximum(a);
    printf("\nMaximum no: %d",max);
    min=manimum(a);
    printf("\nManimum no: %d",min);
}