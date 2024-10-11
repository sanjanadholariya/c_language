#include<stdio.h>
#include<conio.h>
main()
{
	int mark;
	char grade;

	clrscr();

	printf("Enter your marks : ");
	scanf("%d",&mark);

	(mark>=91 && mark<=100)
		? grade='A'

		: (mark>=81 && mark<=90)
			? grade='B'

			: (mark>=71 && mark<=80)
				? grade='C'

				: (mark>=61 && mark<=70)
					? grade='D'
					: (mark>=33 && mark<=60)
						? grade='E'
						: (grade='F');



	switch(grade)
	{
		case 'A':
			printf("\nYour Grade is A ! exeletnt work...");
			break;
		case 'B':
			printf("\nYour Grade is B ! well done...");
			break;
		case 'C':
			printf("\nYour Grade is C ! Good job...");
			break;
		case 'D':
			printf("\nYour Grade is D ! You are passed...");
			break;
		case 'E':
			printf("\nYour Grade is E ! your are passed...");
			break;
		case 'F':
			printf("\nYour grade is F ! Your are faild...");
			break;

	}

	if(grade>='A' && grade<='D')
	{
		printf("Your are eligible for next step..!");
	}
	else
	{
		printf("Batter luck for next time..!");
	}
	getch();

}