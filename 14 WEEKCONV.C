// enter to days convert into year,week,day
#include<stdio.h>
#include<conio.h>
void main()
{
	int y,w,d,b,a;
	clrscr();
	printf("Enter Numbers of Days: ");
	scanf("%d",&a);
	y = a/365;
	b = a%365;
	w = b/7;
	d = b%7;
	printf("\nNumber of Years: %d",y);
	printf("\nNumber of Weeks: %d",w);
	printf("\nNumber of Days: %d",d);
	getch();
}