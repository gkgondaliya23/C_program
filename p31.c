// print 1+2+3+... +n = total (while loop)
#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    while (i<=n)
	{
        sum+=i;
		printf("%d ",i);
        i++;
    }
    printf("\nSum : %d",sum);
    /*do
    {
        sum+=i;
        printf("%d ",i);
        i++;
    } while (i<=n);
    printf("\nSum : %d",sum);
    */

	return 0;
}