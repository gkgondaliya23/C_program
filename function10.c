// no argument no return
// reverse number
#include<stdio.h>
void reverseNumber()
{
    int n,rem,a=0;
    printf("Enter number:");
    scanf("%d",&n);
     while (n!=0)
    {
        rem = n%10;
        a = a*10 + rem;
        n = n/10;
    }
    printf("Reverse number: %d",a);
}
int main()
{
    
    reverseNumber();
    return 0;
}