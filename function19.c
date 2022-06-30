// using recursion function fibbonaci series
#include<stdio.h>
int series(int n)
{
   static int a=0,b=1,c;
    if (n>0)
    {
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
        series(n-1);
    }
	
}
int main()
{
    int n,a=0,b=1;

	printf("Enter n: ");
	scanf("%d",&n);
	printf("FIBONACCI SERIES");
	printf("\n%d\t%d",a,b);
	series(n-2);
}