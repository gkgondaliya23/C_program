/* using nested for loop 
    A   B   C   D   E
    F   G   H   I   J
    K   L   M   N   O
    P   Q   R   S   T
    U   V   W   X   Y
*/
#include<stdio.h>
int main()
{
    int i,j,n=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%c\t",n);
            n++;
        }
    
    printf("\n");
    }
    return 0;
}