// series 1,1,2,3,5,... (while loop)
#include<stdio.h>
int main()
{
	int i=2,n,a=0,b=1,c;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("FIBONACCI SERIES");
	printf("\n%d",b);
	/* while (i<=n)
    {
        c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
        i++;
    }*/
    do
    {
        c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
        i++;
    } while (i<=n);
    
    	return 0;
}