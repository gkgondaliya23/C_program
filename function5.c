// no argument no return
// pattern
#include<stdio.h>
void doPattern()        // function defination
{
    
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
int main()
{
    
    doPattern();             // function call
    return 0;
}