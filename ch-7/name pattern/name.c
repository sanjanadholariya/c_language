#include<stdio.h>
#include<conio.h>


main()
{
	int i,j;


	for(i=1; i<=7; i++)
	{
		for(j=1; j<=41; j++)
		{
			if( (i==1 && ( (j>=2 && j<=5) || (j>=8 && j<=10) || j==13 || j==17 || (j>=19 && j<=23) || (j>=26 && j<=28) || j==31 || j==35 || (j>=38 && j<=40)  ) ) 
			|| ((i==2 || i==3) && ( j==1 || j==7 || j==11 || j==13 || j==17 || j==21 || j==25 || j==29 || j==31 || j==35 || j==37 || j==41) ) 
			||  (i==3 && (j==14 || j==32) )
		    ||  (i==4 && ( (j>=2 && j<=4) || (j>=7 && j<=11 ) || j==13 || j==15 || j==17 || j==21 || (j>=25 && j<=29) || j==31 || j==33 || j==35 || (j>=37 && j<=41) ) ) 
			||  (i==5 && ( j==16 || j==34)) 
			||( (i==5 || i==6) && (j==5 || j==7 || j==11 || j==13 || j==17 || j==19 || j==21 || j==25 || j==29 || j==31 || j==35 || j==37 || j==41) ) 
			||  (i==7 && ( (j>=1 && j<=4) || j==7 || j==11 || j==13 || j==17 || j==20 || j==25 || j==29 || j==31 || j==35 || j==37 ||j==41 ) ) 
			   )
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}

		}
		printf("\n");
	}

	getch();

} 
