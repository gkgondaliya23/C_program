// no argument no return
#include<stdio.h>
void doSum()
{
    int a,b;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    printf("\n Sum: %d",a+b);
}
int main()
{
    doSum();
    return 0;
}