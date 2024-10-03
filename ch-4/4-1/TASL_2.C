#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	clrscr();

	printf("enter the value of x :\t");
	scanf("%d",&x);

	printf("enter the value of y :\t");
	scanf("%d",&y);

	printf("(x-y)^2 = %d",(x*x)-(2*x*y)+(y*y));

	getch();
}