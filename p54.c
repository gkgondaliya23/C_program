/* using while loop
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15
*/
#include<stdio.h>
int main()
{
    int i=1,n=1;
    while (i<=5)
    {
        int j=1;
        while (j<=i)
        {
        
           printf("%d ",n++);
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}