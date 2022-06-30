/* using while loop
    2 2 2 2 2 
    4 4 4 4 4 
    6 6 6 6 6 
    8 8 8 8 8 
    10 10 10 10 10
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
            if(i%2==0)
           printf("%d ",i);
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}