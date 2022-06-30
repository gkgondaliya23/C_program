// With argument no return
//simple intrest
#include<stdio.h>
void doIntrest(int x, int y,int z)        // function defination
{
    
    printf("\n Simple intrest: %d",(x*y*z)/100);
}
int main()
{
    int p,r,t;
    printf("Enter principal:");
    scanf("%d",&p);
    printf("Enter rate:");
    scanf("%d",&r);
    printf("Enter time:");
    scanf("%d",&t);
    doIntrest(p,r,t);             // function call
    return 0;
}