//A-a, B-b, C-c, .......
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,a;
	clrscr();
	for(i=65;i<=90;i++)
	{
		a = i+32;
		 printf("\t%c-%c",i,a);
	}

	getch();
}