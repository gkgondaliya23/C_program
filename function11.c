// with argument no return
// perfect number or not
#include<stdio.h>
void perfectNumber(int n)
{
    int i,k=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            printf("%d ",i);
            k += i;
        }
    }
    if(k==n){
        printf("\n Yes %d is perfect number.",k);
    }
    else
    {
        printf("\n No %d is not perfect number.",n);
    }
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    perfectNumber(n);
    return 0;
    
}