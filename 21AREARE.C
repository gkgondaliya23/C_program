// area of rectangle
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c,l,b;
	clrscr();
	printf("Enter value l:");
	scanf("%d",&l);
	printf("Enter value b:");
	scanf("%d",&b);
	a = l*b;
	printf("\nArea of Rectangle is : %d",a);
	c =2*(l+b);
	printf("\nPerimeter of Rectangle is : %d",c);
	getch();
}