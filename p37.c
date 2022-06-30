// series A,C,E,G,I,... (while loop)
#include<stdio.h>
int main()
{
    int i=65;
    
    /* while(i<=90)
    {
        if(i%2!=0){
        printf("%c ",i);
        }
        i++;
    }*/
    do
    {
        if(i%2!=0){
        printf("%c ",i);
        }
        
        i++;
    } while (i<=90);
    

    return 0;
}