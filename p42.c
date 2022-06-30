/* using nested while loop
    1   1   1   1   1
    2   2   2   2   2
    3   3   3   3   3
    4   4   4   4   4
    5   5   5   5   5
*/
#include<stdio.h>
int main()
{
    int i=1;
    while (i<=5)
    {
        int j=1;
        while (j<=5)
        {
           printf("%d ",i);
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}