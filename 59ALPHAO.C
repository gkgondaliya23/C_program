// print A,C,E,G,.....
#include<stdio.h>
#include<conio.h>
void main()
{
	char i;
	clrscr();
	for(i=65;i<=90;i++)
	{
		if(i%2!=0)
		{
		printf("\t%c",i);
		}
		     }

	getch();
}
