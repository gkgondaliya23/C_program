// series 1,4,3,16,5,... (while loop)
#include<stdio.h>
int main()
{
    int i=1,a,n;
    printf("Enter n:");
    scanf("%d",&n);
    /* while(i<=n)
    {
        if(i%2==0){
        a=i*i;
        printf("%d ",a);
        }
        else{
            printf("%d ",i);
        }
        i++;
    }*/
    do
    {
        if(i%2==0){
        a=i*i;
        printf("%d ",a);
        }
        else{
            printf("%d ",i);
        }
        i++;
    } while (i<=n);
    

    return 0;
}