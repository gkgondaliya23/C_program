// price read rupees and paisa
#include<stdio.h>
#include<conio.h>
void main()
{
	float total;
	int r,p;
	clrscr();
	printf("Enter total amount:");
	scanf("%f",&total);
	printf("\ntotal amount: %f",total);
	r=total;
	printf("\nRupees: %d",r);
	p = (float)(total-r)*100;
	printf("\nPaisa: %d",p);
	getch();
}