/*  Display given string pattern
    H
    H   E
    H   E   L
    H   E   L   L
    H   E   L   L   O
*/
#include <stdio.h>

int main()
{
    char str[20];
    int i,j,k;
    printf("Enter string: ");
    gets(str);
    
    for(i=0;str[i] != '\0';i++);
    
    printf("String len: %d",i);

    for(j=0;j<=i;j++)
    {
        for(k=0;k<j;k++)
        {
            printf("%c ",str[k]);
        }
        printf("\n");
    }
    return 0;
}
