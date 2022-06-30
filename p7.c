/* using nested for loop
    A
    b   c
    D   E   F
    g   h   i   j
    K   L   M   N   O
*/
#include<stdio.h>
int main()
{
    int i,j,n=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0){
                printf("%c\t",n);
            }
            else{
                printf("%c\t",n+=32);
                n-=32;
            }
            
        n++;
        }
    
    printf("\n");
    }
    return 0;
}