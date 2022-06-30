// convert decimal to binary
#include<stdio.h>
int main()
{
    int a[15],i,n;
    printf("Enter n:");
    scanf("%d",&n);
    i=0;
    while (n>0)
    {
        a[i] = n%2;
        n = n/2;
        i++;
    }
    // printing binary number
    int j = i-1;
    while(j>=0)
    {
        printf("%d ",a[j]);
        j--;
    }
    return 0;
}
