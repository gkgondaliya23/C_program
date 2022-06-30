// swapping value using pointer
#include<stdio.h>
int main()
{
    int a=10,b=20,*p,*q;
    p = &a;
    q = &b;

    printf("\n value of a: %d",*p);
    printf("\n value of b: %d",*q);
    // swapping value
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    
    printf("\n Swapping value of a: %d",*p);
    printf("\n Swapping value of b: %d",*q);
}