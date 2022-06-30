// skill + qode = skillqode
#include<stdio.h>
int main()
{
    char a[15],b[15],c[15];
    int i,j,k,n;
    printf("Enter String: ");
    gets(a);
    printf("Enter String: ");
    gets(b);
    printf("\nString :%s",a);
    printf("\nString :%s",b);

    for(i=0; a[i] != '\0'; i++);
    for(j=0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }
    a[i] = '\0';
   printf("\nString: %s",a);
    return 0;
}