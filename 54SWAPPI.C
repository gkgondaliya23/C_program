// swpping value using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10, b=20,c;
	clrscr();
	printf("\n a =%d",a);
	printf("\t b =%d",b);
	c=a;
	a=b;
	b=c;
	printf("\nSwapping Values");
	printf("\n a =%d",a);
	printf("\t b =%d",b);
	getch();
}