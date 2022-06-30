// using function one dimension array
#include<stdio.h>
void array()
{
     int a[5],i;
    
    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n a[%d]: %d",i,a[i]);
    }
}
int main()
{
    array();
    return 0;
}