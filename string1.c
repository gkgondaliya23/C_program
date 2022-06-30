// introduction of string
#include<stdio.h>
int main()
{
    char str[15];
    int i;
    printf("Enter String: ");
    //scanf("%s",str);
    scanf("%[^\n]",str);
    //gets(str);

    //puts(str);
    printf("\nString :%s",str);

    for(i=0;str[i]!= '\0';i++);
    printf("\nLength: %d",i);
    return 0;
}