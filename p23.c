// print 1 to n (while loop)
#include<stdio.h>
int main()
{
	int i=1,n;
    printf("Enter n:");
    scanf("%d",&n);
	while (i<=n)
	{
		printf("%d ",i++);
	}	
	return 0;
}