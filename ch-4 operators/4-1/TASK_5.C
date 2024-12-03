#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("Enter the value of a :\t");
	scanf("%d",&a);

	printf("Enter the value of b :\t");
	scanf("%d",&b);

	printf("\nBefore swap the values :-");
	printf("\na : %d",a);
	printf("\nb : %d",b);

	printf("\n\nAfter swap the values :-");

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\na : %d",a);
	printf("\nb : %d",b);

	getch();
}