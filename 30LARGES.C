// a,b,c in largest no of among them
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter v alue a:");
	scanf("%d",&a);
	printf("Enter v alue b:");
	scanf("%d",&b);
	printf("Enter v alue c:");
	scanf("%d",&c);
	if(a<b)
	{
		if(b<c)
		{
			printf("\nC is largest");
		}
		else
		{
			printf("\nB is largest");
		}
	}
	else
	{
		if(a<c)
		{
			printf("\nC is largest");
		}
		else
		{
			printf("\nA is largest");
		}
	}
	getch();
}