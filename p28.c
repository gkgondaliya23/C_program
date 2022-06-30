// print A to Z (while loop)
#include<stdio.h>
int main()
{
	int i=65;
   /* while (i<=90)
	{
		printf("%c ",i++);
    }*/
    do
    {
        printf("%c ",i++);
    } while (i<=90);
    

	return 0;
}