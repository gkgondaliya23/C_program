// With argument no return
#include<stdio.h>
void doSum(int x, int y)        // function defination
{
    
    printf("\n Sum: %d",x + y);
}
int main()
{
    int a,b;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    doSum(a,b);             // function call
    return 0;
}