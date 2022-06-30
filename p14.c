/* using nested for loop
               *
               **
               ***
               ****
               *****
*/
#include<stdio.h>
int main()
{
    int i,j,sp=15;
    for(i=1;i<=5;i++)           //row
    {
        for(j=1;j<=sp;j++)      //space
        printf(" ");
        for(j=1;j<=i;j++)       //column
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}