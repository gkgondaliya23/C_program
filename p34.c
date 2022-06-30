// series 1,4,9,16,... (while loop)
#include<stdio.h>
int main()
{
    int i=1,a,n;
    printf("Enter n:");
    scanf("%d",&n);
    /* while(i<=n)
    {
        a=i*i;
        printf("%d ",a);
        i++;
    }*/
    do
    {
        a=i*i;
        printf("%d ",a);
        i++;
    } while (i<=n);
    

    return 0;
}