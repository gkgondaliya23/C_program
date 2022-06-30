/* using nsted for loop
    A
    A   B
    A   B   C
    A   B   C   D
    A   B   C   D   E
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c\t",j);

        }
            printf("\n");
    }
    return 0;
}