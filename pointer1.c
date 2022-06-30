// pointer introduction

#include<stdio.h>
int main()
{
    int a=10,*p;
    p = &a;
    printf("Value of a: %d",a);
    printf("\nAddress of a: %u",&a);

    printf("\nAddress of a using p: %u",p);
    printf("\nAddress of p: %u",&p);
    printf("\nValue of a using p: %d",*p);
    return 0;
}