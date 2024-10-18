#include<stdio.h>
#include<conio.h>
main()
{
	int n,rev=0,rem,real;
	clrscr();

	printf("\nEnter any number : ");
	scanf("%d",&n);

	real=n;

	while(n!=0)
	{
		rem = n % 10;

		rev = rev*10+rem;

		n=n/10;
	}

	if(real==rev)
	{
		printf("\nThis number is palindrom number .");
	}
	else
	{
		printf("\nThis number is not palindrom number .");
	}

	getch();
}