/* using nested for loop
    *****
    ****
    ***
    **
    *
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)           //row
    {
        for(j=1;j<=i;j++)       //column
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}