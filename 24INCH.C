// convert Inch into centimeter
#include<stdio.h>
#include<conio.h>
void main()
{
	float i,c;
	clrscr();
	printf("Enter Centimeter: ");
	scanf("%f",&c);
	i = c/2.5;
	printf("\nInch: %f", i);
	getch();
}