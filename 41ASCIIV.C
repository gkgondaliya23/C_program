/* ASCII -American Standard Code for Information Interchange
A - 65		Z - 90
a - 97		z - 122
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("Enter ch:");
	scanf("%c",&c);
	printf("\n char : %c",c);
	printf("\n char ascii : %d",c);
	 getch();
}