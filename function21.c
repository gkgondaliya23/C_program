// using function array calling
#include<stdio.h>
#define n 5     // symbolic constant
int array(int a[])
{
   int i;
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    } 
}
int main()
{
    int i,a[n];
    for (i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    array(a);
}