//function 
/*
function defination
return-type <function-name>(para1,para2,....)
{
    statements;
}

function call, declaration
*/
#include<stdio.h>
void newFunction()
{
    printf("\n New Function call....");
}
int main()
{
    printf("\n Before Function call....");
    newFunction();
    printf("\n After Function call....");
    return 0;
}
