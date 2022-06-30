/*
    1   2   3           diagonal element total= ?
    4   5   6           upper triangle total = ?
    7   8   9           lower triangle total = ?
*/
#include<stdio.h>
int main()
{
    int a[5][5],i,j,t=0,s=0,p=0;
    
    for(i=0;i<4;i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
              
    }
    for(i=0;i<4;i++)
    {
        for ( j = 0; j <4; j++)
        {
            printf("\t%d",a[i][j]);
            if(i==j)
            {
                t += a[i][j];
            }
            else if(j>i)
            {
                s += a[i][j];
            }
            else if(j<i)
            {
                p += a[i][j];
            }
        } 
        printf("\n");      
    }
    printf("\n Diagonal Element total %d",t);
    printf("\n Upper triangle total %d",s);
    printf("\n Lower triangle total %d",p);
    return 0;
}