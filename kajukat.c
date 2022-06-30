// kajukatri shape using for loop
#include<stdio.h>  
int main() 
{  
  int width=10, space, stars, i, j, k;  
   
  space=width-1;  
   stars=1;  
  for( i=1;i<=width;i++)  
  {  
    for( j=1;j<=space;j++)  
    {  
      printf(" ");  
    }  
    for( k=1;k<=stars;k++) 
	{
	 printf("*");
	 } 
	if(space>i)  
    {  
      space=space-1;  
      stars=stars+2;  
    }  
    if(space<i)  
    {  
      space=space+1;  
      stars=stars-2;  
    }  
    printf("\n");  
  }  
  return 0;
}