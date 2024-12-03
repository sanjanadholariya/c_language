#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,count=11;
	clrscr();
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",count++);
		}
		printf("\n");
	}
	getch();	
}
