// print odd number total (while loop)
#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    while (i<=n)
	{
        if(i%2!=0){
            sum+=i;
		printf("%d ",i);
        }
        i++;
    }
    printf("\nSum : %d",sum);
    /*do
    {
        if(i%2!=0){
        sum+=i;
        printf("%d ",i);
        }
        i++;
    } while (i<=n);
    printf("\nSum : %d",sum);
    */

	return 0;
}