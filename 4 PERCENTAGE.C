// total marks and percentage
#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int m = 90,p =77, c = 69;
	int total;
	float per;
	printf("Maths:%d",m);
	printf("\nPhysics: %d",p);
	printf("\nChemistry: %d",c);
	total = m + p + c;
	printf("\nTotal: %d", total);
	per =(float)(total*100)/300;
	printf("\nPercentage: %f",per);
	return 0;
}