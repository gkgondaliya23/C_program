//print 1,2,4,8,........
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	printf("\t%d",i);
	getch();
}