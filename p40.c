// series A,c,E,g,I,... (while loop)
#include<stdio.h>
int main()
{
    int i=0;
    while (i<26)
    {
        if(i%4==0)
            printf("%c ",i+65);
        else
            printf("%c ",i+32+65);
        
        i=i+2;
    }
    
    return 0;
}