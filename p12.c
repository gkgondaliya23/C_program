/* using nested for loop
    A
    B       A
    C       B       A
    D       C       B       A
    E       D       C       B       A
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c\t",i-j+65);

        }
            printf("\n");
    }
    return 0;
}