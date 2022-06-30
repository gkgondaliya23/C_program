// rectangle
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,l;
	clrscr();
	printf("Enter value b:");
	scanf("%d",&b);
	printf("Enter value l:");
	scanf("%d",&l);
	printf("b : %d & l ; %d",b,l);
	a = b*l;
	printf("\nArea of Rectangle : %d",a);
	getch();
}