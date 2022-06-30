// switch case introduction
#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter ch: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: 
        printf("\na + b :%d",a+b);
        break;
    
    case 2: 
        printf("\na - b :%d",a-b);
        break;
    
    case 3: 
        printf("\na * b :%d",a*b);
        break;
    
    case 4: 
        printf("\na / b :%d",a/b);
        break;
    
    default:
        printf("your choice is wrong");
        break;
    }
}