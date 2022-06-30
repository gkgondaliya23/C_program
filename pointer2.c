// pointer using array

#include<stdio.h>
void main()
{
    int a[5] = {10,20,30,40,50};
    int *p = NULL;
    int i;
    p = &a;
    //printf("\n %u",p);
    printf("Array elements....\n");

    printf("\nValue\tAddress\n");
    printf("------------------------\n");
    
    for(i=0;i<5;i++)
    {
       printf("\n %d \t %u ",*(p+i),(p+i));
        //printf("\n %d \t %u ",a[i],&a[i]);
    }
    
}