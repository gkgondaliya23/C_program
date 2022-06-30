// using recursion function
#include<stdio.h>
int rec(int n)
{
    printf("winding phase: level = %d\n",n);
    if(n>3)
    {
        rec(n+1);
    }
    printf("Unwinding Phase: level = %d\n",n);
}

int main()
{
    rec(3);
    return 0;
}