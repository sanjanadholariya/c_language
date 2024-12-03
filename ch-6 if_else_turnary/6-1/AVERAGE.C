#include<stdio.h>
#include<conio.h>
main()
{
	int maths,science,hindi,computer,eng;
	clrscr();

	printf("Maths : ");
	scanf("%d",&maths);

	printf("Science : ");
	scanf("%d",&science);

	printf("Hindi : ");
	scanf("%d",&hindi);

	printf("Computer : ");
	scanf("%d",&computer);

	printf("English : ");
	scanf("%d",&eng);

	printf("Average of these subject is : %d",(maths+science+hindi+computer+eng)/5);

	getch();

}