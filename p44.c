/* using while loop
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
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
           printf("%d ",j);
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}