// print 1,1,2,3,5,......
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=0,b=1,c;
	clrscr();
	printf("Enter n: ");
	scanf("%d",&n);
	printf("FIBONACCI SERIES");
	printf("\n%d\t%d",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
	getch();
}