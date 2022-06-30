// salary for HRA and DA
#include<stdio.h>
#include<conio.h>
void main()
{
	int s,hra,da;
	clrscr();
	printf("Enter your salary:");
	scanf("%d",&s);

	if( s<=5000)
	{
		hra = s*0.08;
		da = s*0.20;
	}
	if(5000<s && s<=10000)
	{
		hra = s*0.12;
		da = s*0.30;
	}
	if(10000<s && s<=15000)
	{
		hra = s*0.15;
		da = s*0.40;
	}
	if(s>15000)
	{
		hra = s*0.20;
		da = s*0.50;
	}
		printf("\n HRA : %d",hra);
		printf("\n DA : %d",da);
	getch();
}