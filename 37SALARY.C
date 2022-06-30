// tax slab
#include<stdio.h>
#include<conio.h>
void main()
{
	int s,total;
	clrscr();
	printf("Enter your salary:");
	scanf("%d",&s);

	if(s<=2500)
	{
		total = 0*s;
	}
	if(2500<s && s<=5000)
	{
		total = 2500*0.1;
	}
	if(5000<s && s<=10000)
	{
		total = 250+(s-5000)*0.2;
	}
	if(s>10000)
	{
		total = 1250+(s-10000)*0.3;
	}

		printf("\nTotal Tax :%d",total);
	getch();
}