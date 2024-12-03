#include<stdio.h>
#include<conio.h>
main()
{
	int n,i=1,sum=0;
	clrscr();

	printf("Enter any number which you want to sum : ");
	scanf("%d",&n);

	while(i<=n)
	{
		sum = sum + i;
		printf("%d\t",i++);
	}

	printf("\n\nsum of 1 to %d is : %d ",n,sum);

	getch();
}