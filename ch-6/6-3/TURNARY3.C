#include<stdio.h>
#include<stdio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter a :");
	scanf("%d",&a);

	printf("Enter b :");
	scanf("%d",&b);

	printf("Enter c :");
	scanf("%d",&c);

	(a<b) ?
		(a<c) ? printf("a is min...")
		      :	printf("c is min...")

	      : (b<c) ? printf("b is min...")
		      : printf("c is min...");

	getch();
}