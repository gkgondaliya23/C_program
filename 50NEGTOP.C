// print -n to n
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\t-%d",i);
	}
	for(i=0;i<=n;i++)
	{
		printf("\t%d",i);
	}

	getch();
}