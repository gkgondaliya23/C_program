// convert C into F
#include<stdio.h>
#include<conio.h>

void main()
{

	float c, f;
	clrscr();
	printf("Enter celsius: ");
	scanf("%f",&c);
	f = ((c*9)/5)+32;
	printf("\nfahernhit: %f",f);
	getch();
}