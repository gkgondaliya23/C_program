// print 0.5,1,2.5,5,.....
#include<stdio.h>
#include<conio.h>
void main()
{
	float i,n,a=0.5;
	clrscr();
	printf("Enter n: ");
	scanf("%f",&n);
	printf("\%.2f",a);
	for(i=0.5;i<=n;i++)
	{
	a= a+i;
	printf("\t%.2f",a);
	}
	getch();
}