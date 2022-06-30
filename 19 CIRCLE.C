// area of circle
#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float a;
	clrscr();
	printf("Enter value r:");
	scanf("%d",&r);
	printf("r : %d",r);
	a = 3.14*r*r;
	printf("\nArea of Circle : %f",a);
	getch();
}