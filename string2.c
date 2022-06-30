// reverse string print
#include<stdio.h>
int main()
{
    char str[15],a[15];
    int i,j,k;
    printf("Enter String: ");
    gets(str);
    // printf("\nString :%s",str);

    for(i=0; str[i] != '\0'; i++);

    // for(j= i-1; j>=0 ;j--)
    // {
    //     a[j]=str[k++];
    //     // printf("\t%c ",str[k]);
    //     // k++;
    // }
    k=i;
    for(j=0;j<i;j++)
    {
        a[j]=str[--k];
    }
     a[i]='\0';
   printf("\nReverse String: %s",a);
    return 0;
}