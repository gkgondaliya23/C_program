// ladder if else
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter v alue a:");
	scanf("%d",&a);
	printf("Enter v alue b:");
	scanf("%d",&b);
	printf("Enter v alue c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("\nA (%d) is largest",a);
	}

	else if(b<c)
		{
			printf("\nC (%d) is largest",c);
		}
		else
		{
			printf("\nB (%d) is largest",b);
		}

	getch();
}