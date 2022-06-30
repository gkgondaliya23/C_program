// students grading system
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,total;
	float per;
	clrscr();
	printf("Enter Maths marks:");
	scanf("%d",&a);
	printf("Enter Physics marks:");
	scanf("%d",&b);
	printf("Enter Chemistry marks:");
	scanf("%d",&c);
	total = a+b+c;
	per = total*100/300;
	printf("\nyour percentage %f",per);
	if(per>75)
	{
		printf("\nGrade is A");
	}
	else if(60<per && per<75)
	{
		printf("\nGrade is B");
	}
	else if(45<per && per<60)
	{
		printf("\nGrade is C");
	}
	else if(35<per && per<45)
	{
		printf("\nGrade is D");
	}
	else if(per<35)
	{
		printf("\nYou are Fail!");
	}
	getch();
}