/* using while loop
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
*/
#include<stdio.h>
int main()
{
    int i=1;
    while (i<=5)
    {
        int j=1;
        while (j<=i)
        {
           printf("%d ",j);
           j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}