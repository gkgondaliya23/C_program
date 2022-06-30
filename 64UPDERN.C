//  A,c,E,g,I,.......
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<20;i++)
	{
		if(i%4==0)
			printf("%c",i+65);
		else
			printf("%c",i+32+65);
		i++;
	}

	getch();
}
