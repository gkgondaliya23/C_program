// sparse matrix
/* (when 0 enter than output speace)
    1   2   3
        5   6
    7   8    
*/
#include<stdio.h>
int main()
{
    int a[5][5],i,j;
    
    for(i=0;i<3;i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
              
    }
    for(i=0;i<3;i++)
    {
        for ( j = 0; j <3; j++)
        {
            if(a[i][j]==0)
            {
                printf(" \t");
            }
            else
            {
                printf("\t%d",a[i][j]);
            }
            
        }
       printf("\n");       
    }
    return 0;
}