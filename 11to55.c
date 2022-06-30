/* using nested for loop 
    11  12  13  14  15          
    21  22  23  24  25
    31  32  33  34  35
    41  42  43  44  45
    51  52  53  54  55
*/
#include<stdio.h>
int main()
{
    int i,j,n=11;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d\t",n);
            n++;
        }
    n=n+5;
    printf("\n");
    }
    return 0;
}