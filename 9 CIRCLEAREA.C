// Area to circle
#include<stdio.h>
#include<conio.h>
int main()
{
	float a,r=10,b;
	clrscr();
	printf("Radius is :%f",r);
	a = (3.14)*r*r;
	printf("\nArea of Circle is: %f",a);
	b = (3.14)*2*r;
	printf("\nCircumtence of Circle is: %f",b);
	return 0;
}