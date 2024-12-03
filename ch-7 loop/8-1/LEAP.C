#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();

	printf("Eneter the starting no. of year : ");
	scanf("%d",&a);

	printf("Enter the ending no. of the year :  ");
	scanf("%d",&b);

	printf("\n\n\n");

	while(a<=b)
	{

		if(a%4==0)
		{
		    printf("%d\t",a);
		}

		a++;
	}

	getch();
}