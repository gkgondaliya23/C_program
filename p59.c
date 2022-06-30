/* using while loop
    A
    B C 
    D E F 
    G H I J 
    K L M N O
*/
#include<stdio.h>
int main()
{
    int i=1,a=65;
    while (i<=5)
    {
        int j=1;
        while (j<=i)
        {
           printf("%c ",a++);
            
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}