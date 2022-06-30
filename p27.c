// print odd number (while loop)
#include<stdio.h>
int main()
{
	int i=1,n;
    printf("Enter n:");
    scanf("%d",&n);
	while (i<=n)
	{
        if(i%2!=0)
        {
		printf("%d ",i);
        }
        i++;
    }	
	return 0;
}