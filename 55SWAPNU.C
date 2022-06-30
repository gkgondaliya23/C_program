// swapping value 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10, b=20;
	clrscr();
	printf("\n a =%d",a);
	printf("\t b =%d",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nSwapping Values");
	printf("\n a =%d",a);
	printf("\t b =%d",b);
	getch();
}