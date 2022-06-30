// while and do while loop introduction
#include<stdio.h>
int main()
{
	int i=1,j=1;
	while (i<=10)
	{
		printf("%d ",i++);
	}
	printf("\n");
	do
	{
		printf("%d ",j++);
	}while (j<=10);
		
	return 0;
}