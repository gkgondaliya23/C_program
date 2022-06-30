// Even number and odd number sum
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=0,b=0;
	clrscr();
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   if(i%2==0)
	   {
		a = a+i;
	   }
	}
	printf("\nEven Number sum: %d",a);
	for(i=1;i<=n;i++)
	{
	   if(i%2!=0)
	   {
		b = b+i;
	   }
	}
	printf("\nOdd Number sum: %d",b);
	getch();
}