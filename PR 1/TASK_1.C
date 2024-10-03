#include<stdio.h>
#include<conio.h>
main()
{
	int c;
	float f;
	clrscr();

	printf("Enter the vlaue of celsius : ");  //38
	scanf("%d",&c);

	f = (c*9/5)+32;


	printf("The value of fahrenhit is : %.2f",f);     //100.4
	getch();
}