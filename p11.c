/* using nested for loop
    1
    01
    010
    1010
    10101
*/
#include<stdio.h>
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a%2==1){
                printf("1");
                a++;
            }
            else{
                printf("0");
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}