// enter value divisible by 5 and 3
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter v alue a:");
	scanf("%d",&a);
	if(a%5==0 && a%3==0)
	{
		printf("Given value divisible by 5 and 3");
	}
	else
	{
		printf("Given value not divisible by 5 and 3");
	}
	getch();
}