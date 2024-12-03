#include<stdio.h>
#include<conio.h>

main()
{
	int n, sum=0, rev=0, mainsum, mul, rem, real;

	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	real = n;

	while(n!=0)
	{
		rem = n % 10;

		sum = sum + rem;

		n = n / 10;
	}

	mainsum = sum;

       //	printf("%d",mainsum);

	while(sum!=0)
	{
		rem = sum % 10;

		rev = rev * 10 + rem;

		sum = sum / 10;
	}

	//printf("%d",rev);
	mul = mainsum * rev;

	//printf("\t%d",mul);

	if(real==mul)
		printf("This number is magic number.");
	else
		printf("This number is not magic number.");


	getch();




}