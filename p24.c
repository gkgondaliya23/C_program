// print n to 1 (while loop)
#include<stdio.h>
int main()
{
	int i,n;
    printf("Enter n:");
    scanf("%d",&n);
    i=n;
	while (i>=1)
	{
        
		printf("%d ",i--);
	}	
	return 0;
}