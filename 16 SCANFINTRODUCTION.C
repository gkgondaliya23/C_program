// scanf function introduction
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter a : ");
	scanf("%d",&a);  //& address of operator
	printf("\n Enter b : ");
	scanf("%d",&b);

	printf("\n a : %d\n b : %d",a,b);

	printf("\n a + b : %d",a+b);
	getch();
}