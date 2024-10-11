#include<stdio.h>
#include<conio.h>

main()
{
	int n1 ,n2;
	clrscr();

	printf("Enter first number : ");
	scanf("%d",&n1);

	printf("Enter second number :");
	scanf("%d",&n2);

	if(n1>n2)
	{
		printf("%d is maximum...",n1);
	}
	else
	{
		printf("%d is maximum...",n2);
	}

	getch();
}
