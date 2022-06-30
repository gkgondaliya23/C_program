// enter to days convert into year,week,day
#include<stdio.h>
#include<conio.h>
int main()
{
	int y,w,d,b,a=30;
	clrscr();
	printf("Numbers of days : %d",a);
	y = a/365;
	printf("\nNumber of Years : %d",y);
	b = a%365;
	w = b/7;
	d = b%7;
	printf("\nNumber of Weeks : %d",w);
	printf("\nNumber of Days : %d",d);
	return 0;
}