// print -n to n (while loop)
#include<stdio.h>
int main()
{
	int i,n;
    printf("Enter n:");
    scanf("%d",&n);
    i=-n;
	while (i<=n)
	{
        
		printf("%d ",i++);
	}	
	return 0;
}