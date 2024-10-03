#include<stdio.h>
#include<conio.h>

main(){
	int a=999;
	clrscr();

	printf("%d,%d,%d,%d,%d,%d",a++,a--,--a,++a,++a,a--);
	getch();
}