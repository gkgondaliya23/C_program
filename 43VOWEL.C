// enter ch -> vowel(a,e,i,o,u) or consonant
#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("Enter ch :");
	scanf("%c",&c);
	if(c=='a' || c=='e' || c== 'i' || c=='o' || c=='u' || c=='A' || c=='E' || c== 'I' || c=='O' || c=='U')
	{
		printf("\n char %c is 'Vowel'",c);
	}
	else
	{
		printf("\n char %c is 'Consonant'",c);
	}
	 getch();
}