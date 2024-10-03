#include<stdio.h>
#include<conio.h>
main()
{
	int f_a, s_a, t_a;
	clrscr();

	printf("Enter first angle of triangle : ");
	scanf("%d",&f_a);

	printf("\nEnter second angle of triangle :");
	scanf("%d",&s_a);

	t_a = 180 - (f_a + s_a);

	printf("\nThe third angle of triangle is :  %d",t_a);

	getch();
}