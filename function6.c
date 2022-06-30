// with argument with return
#include<stdio.h>
int doSum(int x,int y)
{
    return x+y;
    
}
int main()
{
    int a,b,sum;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    sum=doSum(a,b);
    printf("\n Sum: %d",sum);
    return 0;
}