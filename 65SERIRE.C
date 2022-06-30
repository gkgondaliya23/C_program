//print 1,4,12,32,.....
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1;
	clrscr();
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\t%d",a*i);
	a=a+a;
	}
	getch();
}