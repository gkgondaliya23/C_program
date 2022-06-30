// print 1,4,3,9,16,5,.... 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a;
	clrscr();
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		a = i*i;
		printf("\t%d",a);
		} else{
		printf("\t%d",i);
	}              }

	getch();
}
