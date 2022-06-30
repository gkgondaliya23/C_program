// print A-a, B-b, C-c,..... (while loop)
#include<stdio.h>
int main()
{
	int i=65,j;
    /*while (i<=90)
	{
        j=i+32;
		printf("%c-%c ",i,j);
        i++;
    }*/
    do
    {
        j=i+32;
        printf("%c-%c ",i,j);
        i++;
    } while (i<=90);
    

	return 0;
}