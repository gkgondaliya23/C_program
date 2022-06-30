// voting for eligible or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter your age:");
	scanf("%d",&a);
	if(a<18)
	{
		printf("\nYou are not Eligible for voting.");
	}
	else
	{
		printf("\nYou are Eligible for voting.");
	}
	getch();
}