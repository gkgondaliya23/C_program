// series 0.5,1,2.5,5,..... (while loop)
#include<stdio.h>
int main()
{
    float i=0.5,a=0.5,n;
    printf("Enter n:");
    scanf("%f",&n);
    printf("%.2f ",a);
    /* while(i<=n)
    {
        printf("%d ",i);
        i*=2;
    }*/
    do
    {   
        a=a+i;
        printf("%.2f ",a);
        i++;
    } while (i<=n);
    

    return 0;
}