/* using while loop
    A A A A A 
    B B B B B 
    C C C C C 
    D D D D D 
    E E E E E
*/
#include<stdio.h>
int main()
{
    int i=65;
    while (i<=69)
    {
        int j=65;
        while (j<=69)
        {
           printf("%c ",i);
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}