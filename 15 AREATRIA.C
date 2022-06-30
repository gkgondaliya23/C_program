// Area of triangle
#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	int b,h;
	clrscr();
	printf("Enter value b:");
	scanf("%d",&b);
	printf("Enter value h:");
	scanf("%d",&h);
	printf("b : %d & h ; %d",b,h);
	a = 0.5*b*h;
	printf("\nArea of Triangle : %f",a);
	getch();
}