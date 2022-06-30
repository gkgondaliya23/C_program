// convert into case A->a
#include<stdio.h>
#include<conio.h>
void main()
{
	char c,b;
	int a;
	clrscr();
	printf("Enter ch:");
	scanf("%c",&c);
	a = c;
	if(65<=a && a<=90)
	{
		b = a + 32;
		printf("\n char : %c",b);
		printf("\n char ascii : %d",b);
	}
	if(97<=a && a<=122)
	{
		b = a - 32;
		printf("\n char : %c",b);
		printf("\n char ascii : %d",b);
	}
	getch();
}