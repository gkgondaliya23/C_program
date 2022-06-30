// 2 array only data printing
#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    
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
    printf("  a\t b");
    printf("\n------------");
    for(i=0;i<5;i++)
    {
        printf("\n  %d \t %d",a[i],b[i]);
        
    }
    return 0;
}