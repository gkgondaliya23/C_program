//variable declaration
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;// declaration
	int x=10,y=20; //initialization
	clrscr();
	printf("\n x : %d",x);
	printf("\n y : %d",y);

       //printf("\n x+y : %d",x+y);
	a = x+y;
	printf("\n x+y : %d",a);
	b = x-y;
	printf("\n x-y : %d",b);
	c = x*y;
	printf("\n x*y : %d",c);
	d = x/y;
	printf("\n x/y : %d",d);
	return 0;
}