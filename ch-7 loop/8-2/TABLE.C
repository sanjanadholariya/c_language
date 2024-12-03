#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,ans;
	clrscr();

	printf("Enter that digit which you want to table : ");
	scanf("%d",&n);

	while(i<=10)
	{
		ans = n*i;
		printf("\n %d x %d = %d\n",n,i++,ans);

	}

	getch();
}