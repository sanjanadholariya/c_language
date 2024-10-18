#include<stdio.h>
#include<conio.h>
main()
{
	int n1=0 , n2=1 , next , i , n;
	clrscr();

	next=n1+n2;

	printf("Enter a number till you want fibonacci sequence : ");
	scanf("%d",&n);

	printf("\n\n\n%d\t%d\t",n1,n2);

	for(i=3; i<=n; i++)
	{
	      printf("%d\t",next);

	      n1=n2;
	      n2=next;
	      next=n1+n2;

	      if(next>=n)
	      {
			break;
	      }
	}


	getch();

}