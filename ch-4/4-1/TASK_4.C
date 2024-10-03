#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("Enter a : ");
	scanf("%d",&a);

	printf("Enter b : ");
	scanf("%d",&b);

	printf("\nAfter swapping :-");

	c=a;
	a=b;
	b=c;

	printf("\n\na : %d",a);
	printf("\nb : %d",b);

	getch();
}