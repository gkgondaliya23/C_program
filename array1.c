// array introduction (simple array)
#include<stdio.h>
int main()
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
            return 0;
}