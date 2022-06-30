// nested for loop introduction
#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
	{
		printf("%d",i);
	}
	printf("\n");
	}
	return 0;
}


/*
	init(i)		cond(i)		stat(i)												inc(i)
	i = 1		i<=2		init(j)		cond(j<=3)		stat(j)		inc(j)
		1		1<=2	T		1			1<=3	T	***			  2
											2<=3	T	***			  3
											3<=3	T				  4
											4<=3	F								2
				2<=2 	T		1			1<=3	T				  2
											2<=3	T				  3
											3<=3	T				  4
											4<=3	F								3
				3<=2	F

*/