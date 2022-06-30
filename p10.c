/* using nested for loop
    5
    4       5
    3       4       5
    2       3       4       5
    1       2       3       4       5
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d\t",i-j+5);

        }
            printf("\n");
    }
    return 0;
}