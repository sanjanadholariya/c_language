#include<stdio.h>
#include<conio.h>
main()
{
	int B_S;
	float HRA,DA,TA;

	clrscr();

	printf("Enter your gross salary : ");
	scanf("%d",&B_S);

	printf("\nEnter your HRA : ");
	scanf("%f",&HRA);

	printf("\nEnter your DA : ");
	scanf("%f",&DA);

	printf("\nEnter your TA : ");
	scanf("%f",&TA);

	HRA = B_S*(HRA/100);
	DA = B_S*(DA/100);
	TA = B_S*(TA/100);

	printf("\n\nThe gross salary is : %.2f",B_S+HRA+DA+TA);

	getch();

}