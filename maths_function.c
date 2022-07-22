/* Maths function
    1. ceil function -> round up value
    2. floor function -> round down value
    3. sqrt function -> square root of given number
    4. pow function -> power of given number
    5. abs function -> the absolute value of given number
    6. round function -> nearest integer value of the given value
    7. random function -> random integers whose range from 0 to RAND_MAX
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    printf("\n%f",ceil(3.6));    
    printf("\n%f",ceil(3.3));    
    printf("\n%f",floor(3.6));    
    printf("\n%f",floor(3.2));    
    printf("\n%f",sqrt(16));    
    printf("\n%f",sqrt(7));    
    printf("\n%f",pow(2,4));    
    printf("\n%f",pow(3,3));    
    printf("\n%d",abs(-12));     
    printf("\n%f",round(5.6));     
    printf("\n%f",round(3.2));     
    printf("\n%d",rand());     
    printf("\n%d",rand());     
 return 0;    

}