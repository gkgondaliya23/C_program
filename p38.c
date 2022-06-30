// series 1,2,4,8,... (while loop)
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter n:");
    scanf("%d",&n);
    
    /* while(i<=n)
    {
        printf("%d ",i);
        i*=2;
    }*/
    do
    {
        printf("%d ",i);
        i*=2;
    } while (i<=n);
    

    return 0;
}