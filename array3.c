// single dimension two array total
#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    
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
    
    printf("  a\t b\t c");
    printf("\n------------");
    for(i=0;i<5;i++)
    {
        c[i]=a[i] + b[i];
        printf("\n  %d \t %d\t %d",a[i],b[i],c[i]);
        
    }
    return 0;
}