// Electricity bill generation
#include<stdio.h>
#include<conio.h>
void main()
{
	int u;
	float bill,total;
	clrscr();
	printf("Enter Unit:");
	scanf("%d",&u);

	if(u<=100)
	{
		bill = 0.60*u+50;
	}
	else if(u<=300 && u>100)
	{
		bill =  60 +(u-100)*0.80+50;
	}
	else if(u>300)
	{
		bill = 60+160+(u-300)*0.90+ 50;
	}
		printf("\nTotal Bill :%.2f",bill);
	if(bill>300)
	{
		total = bill + (bill*15/100);
		printf("\nTotal Bill amount: %.2f",total);

	}
	getch();
}