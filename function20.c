// using recursion function fibbonaci series
#include<stdio.h>
int series(int n)
{
    if (n==0)
    {
		return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return (series(n-1) + series(n-2));
    }
    
	
}
int main()
{
    int n,i;

	printf("Enter n: ");
	scanf("%d",&n);
	printf("FIBONACCI SERIES\n");
	for(i=0;i<n;i++)
    {
        printf("%d ",series(i));
    }
}