// total marks and percentage
#include<stdio.h>
#include<conio.h>
void main()
{

	int m,p,c,total;
	float per;
	clrscr();
	printf("Maths :");
	scanf("%d",&m);
	printf("Physics :");
	scanf("%d",&p);
	printf("Chemistry :");
	scanf("%d",&c);
       //	printf("\nMaths: %d",m);
       //	printf("\nPhysics: %d",p);
	//printf("\nChemistry: %d",c);
	total = m + p + c;
	printf("\nTotal: %d", total);
	per =(float)(total*100)/300;
	printf("\nPercentage: %f",per);
	getch();
}