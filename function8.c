// with argument no return
#include<stdio.h>
void myPattern(int n)
{
    int i,j,sp=15;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++)
        printf(" ");
        for ( j = 1; j<=i; j++)
        {
            printf(" *");
        }
        sp--;
        printf("\n");
        
    }
}
int main()
{
    myPattern(3);
    myPattern(5);
    myPattern(7);
    return 0;
}