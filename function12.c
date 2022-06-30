// amount converting coins(indian rupees)
#include<stdio.h>
void amount(int n)
{
    int i,d=0,b;
    int a[]={500,200,100,50,20,10,5,2,1};
    for (i=0;i<9;i++)
    {
        if(n>=a[i])
        {
        b = n/a[i];
        d+=b;
        printf("\t%d: %d",a[i],d);
        n=n%a[i];
        d-=b;
        }   
    }
}
int main()
{
    int n;   
    printf("Enter amount:");
    scanf("%d",&n);
    amount(n);
    return 0;
}