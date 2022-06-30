// given value divisible by 5
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter v alue a:");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("Given value divisible by 5");
	}
	else
	{
		printf("Given value not divisible by 5");
	}
	getch();
}