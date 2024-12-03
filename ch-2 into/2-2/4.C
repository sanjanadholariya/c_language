#include<stdio.h>
#include<conio.h>
main(){
	int p,r;
	float n;

	clrscr();

	printf("Enter the principle amount : ");
	scanf("%d",&p);

	printf("\nEnter the rate of intrest :");
	scanf("%d",&r);

	printf("\nEnter the no. of years :");
	scanf("%f",&n);

	printf("\nThe simple intrest is : %.2f",(p*r*n)/100);

	getch();
}