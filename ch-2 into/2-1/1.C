#include<stdio.h>
#include<conio.h>
main(){
	int a=20, b=10;

	clrscr();

	printf("Additon of %d and %d is :  %d\n\n",a,b,a+b);
	printf("Subtraction of %d and %d is : %d \n\n",a,b,a-b);
	printf("Division of %d and %d is : %d\n\n",a,b,a/b);
	printf("Multiplication of %d and %d is : %d \n\n",a,b,a*b);
	printf("Modulo of %d and %d is : %d\n\n\n\n\n\n\n",a,b,a%b);



	printf("%d + %d = %d\n\n",a,b,a+b);
	printf("%d - %d = %d\n\n",a,b,a-b);
	printf("%d / %d = %d\n\n",a,b,a/b);
	printf("%d x %d = %d\n\n",a,b,a*b);
	printf("%d %% %d = %d",a,b,a%b);

	getch();
}

