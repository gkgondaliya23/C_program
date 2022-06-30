/* using while loop
    1 1 1 1 1 
    3 3 3 3 3 
    5 5 5 5 5 
    7 7 7 7 7 
    9 9 9 9 9 
*/
#include<stdio.h>
int main()
{
    int i=1;
    while (i<=10)
    {
        int j=1;
        while (j<=5)
        {
            if(i%2!=0)
           printf("%d ",i);
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}