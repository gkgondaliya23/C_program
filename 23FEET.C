// convert inch into feet
#include<stdio.h>
#include<conio.h>
void main()
{
	float f,i;
	clrscr();
	printf("Enter Inch: ");
	scanf("%f",&i);
	f = i/12;
	printf("\nFeet: %f",f);
	getch();
}