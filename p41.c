// series 1,4,12,32,..... (while loop)
#include<stdio.h>
int main()
{
    int i=1,a=1,n;
    printf("Enter n:");
    scanf("%d",&n);
    
    /* while(i<=n)
    {
        printf("%d ",a*i);
	    a=a+a;
        i++;
    }*/
    do
    {   
        printf("%d ",a*i);
	    a=a+a;
        i++;
    } while (i<=n);
    

    return 0;
}