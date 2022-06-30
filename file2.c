// file management in c
#include<stdio.h>
int main()
{
    FILE *fp;
    char buff[250];

    fp = fopen("skill.txt","r");
    while (fscanf(fp,"%s",buff) != EOF)
    {
        printf("%s",buff);
    }
    fclose(fp);
    //printf("\n\n%s",buff);
}