#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;

	clrscr();

	printf("enter the value of a :\t");
	scanf("%d",&a);

	printf("enter the value of b :\t");
	scanf("%d",&b);

	printf("(a+b)^3 = %d",(a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b));

	getch();
}