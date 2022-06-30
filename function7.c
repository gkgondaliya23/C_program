// no argument with return
#include<stdio.h>
int doSum()
{
    int x,y;
    printf("Enter two values:");
    scanf("%d%d",&x,&y);
    return x+y;
    
}
int main()
{
    int sum;
    
    sum=doSum();
    printf("\n Sum: %d",sum);
    return 0;
}