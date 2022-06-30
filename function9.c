// with argument no return
// reverse number
#include<stdio.h>
void reverseNumber(int x)
{
    int a=0,rem;
     while (x!=0)
    {
        rem = x%10;
        a = a*10 + rem;
        x = x/10;
    }
    printf("Reverse number: %d",a);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    reverseNumber(n);
    return 0;
}