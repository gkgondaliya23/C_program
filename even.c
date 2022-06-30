/* using nested for loop
	2	2	2	2	2
	4	4	4	4	4
	6	6	6	6	6
	8	8	8	8	8
	10	10	10	10	10
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=10;i++)
    {
        for(j=1;j<=5;j++)
    {
        if(i%2==0){
            printf("%d\t",i);
        }
    }
    printf("\n");
    }
    return 0;
}