/* using nested for loop
    A
    B       C
    D       E       F
    G       H       I       J
    K       L       M       N       O
*/
#include<stdio.h>
int main()
{
    int i,j,n=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c\t",n);
        n++;
        }
    
    printf("\n");
    }
    return 0;
}