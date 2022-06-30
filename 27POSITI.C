// given number positive or negative
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter value a:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("its Negative value");
	} else
	{
		printf("its Positive value");
	}
	getch();
}