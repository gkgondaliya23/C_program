// array odd & even position total, odd & even element total, all element total
#include<stdio.h>
int main()
{
    int a[5],i,n=0,b=0,c=0,x=0,y=0;
    
    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(i%2!=0){
        b=b+a[i];
        }
        else{
            c=c+a[i];
        }
    }
            printf("\nOdd position total: %d",b);
            printf("\nEven position total: %d",c);
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0){
        x=x+a[i];
        }
        else{
            y=y+a[i];
        }
    }
            printf("\nOdd number total: %d",x);
            printf("\nEven number total: %d",y);
    for(i=0;i<5;i++)
    {
        n=n+a[i]; 
    }
            printf("\n total: %d",n);
    
            return 0;
}