/* using while loop
    5 
    5 4 
    5 4 3 
    5 4 3 2 
    5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int i=5;
    while (i>=1)
    {
        int j=5;
        while (j>=i)
        {
        
           printf("%d ",j);
           j--;
        }
        printf("\n");
        i--;
    }
    
    return 0;
}