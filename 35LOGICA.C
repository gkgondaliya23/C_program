// given range x, y variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter value x:");
	scanf("%d",&x);
	printf("Enter value y:");
	scanf("%d",&y);
	if(x<2000 || 3000<x)
	{
		printf("\nx: %d",x);
	}
	if(100<y &&y<500)
	{
		printf("\ny: %d",y);
	}
	getch();
}