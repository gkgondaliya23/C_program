/* using while loop pattern
    1
    0 1
    0 1 0
    1 0 1 0
    1 0 1 0 1

*/
#include<stdio.h>
int main()
{
    int i=1,a=1;
    while (i<=5)
    {
        int j=1;
        while (j<=i)
        {
            if(a%2==1){
           printf("1");
           a++;
            }
            else{
                printf("0");
                a++;
            }
           j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}