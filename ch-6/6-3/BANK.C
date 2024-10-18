#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int n,age;
	char ac, name[50],dob;
	long int adhar,pan,bill,call,fix,deposit,withdraw;
	clrscr();

	printf("/\\ NAMASTE APNA BANK /\\\n\n\n");

	p("Press 1 for create account\n");
	p("Press 2 for deposite money\n");
	p("Press 3 for withdraw money\n");
	p("Press 4 for display account details\n");

	p("\n\n\nPlese enter your choice : ");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
			clrscr();
			fflush(stdin);
			p("\n\nPress A for create saving account. ");
			p("\nPress B for create current account. ");
			p("\nPress C for create fix deposite. ");
			p("\nPress D for create DEMATE account ");
			p("\n\n\nEnter your choice : ");
			scanf("%c",&ac);

				switch(ac)
				{
				   case 'A':
				   case 'a':
					clrscr();
					p("Enter your name :");
					scanf("%s",&name);

					fflush(stdin);
					p("Enter your adhar no. :");
					scanf("%ld",&adhar);

					p("Enter your pancard no. :");
					scanf("%ld",&pan);

					fflush(stdin);
					p("Enter your birth date :");
					scanf("%s",&dob);

					p("Enter your age :");
					scanf("%d",age);

					p("Enter your electricity bill no. :");
					scanf("%ld",&bill);

					p("Enter your phone no. : ");
					scanf("%ld",&call);

					clrscr();
					p("-----------------------------------");
					p("\nYour account has been created :-");
					p("\n-----------------------------------");
					p("\n\n NAME :\t\t %s",name);
					p("\n A/C no. :\t 987653459562");
					p("\n TYPE OF A/C :\t saving");
				   break;


				   case 'B':
				   case 'b':

					clrscr();
					p("Enter your name :");
					scanf("%s",&name);

					fflush(stdin);
					p("Enter your adhar no. :");
					scanf("%ld",&adhar);

					p("Enter your pancard no. :");
					scanf("%ld",&pan);

					fflush(stdin);
					p("Enter your birth date :");
					scanf("%s",&dob);

					p("Enter your age :");
					scanf("%d",age);

					p("Enter your electricity bill no. :");
					scanf("%ld",&bill);

					p("Enter your phone no. : ");
					scanf("%ld",&call);

					clrscr();
					p("-----------------------------------");
					p("\nYour account has been created :-");
					p("\n-----------------------------------");
					p("\n\n NAME :\t\t %s",name);
					p("\n A/C no. :\t 987653459562");
					p("\n TYPE OF A/C :\t current");
				    break;


				   case 'C':
				   case 'c':

					clrscr();
					p("Enter your name :");
					scanf("%s",&name);

					fflush(stdin);
					p("Enter your adhar no. :");
					scanf("%ld",&adhar);

					p("Enter your pancard no. :");
					scanf("%ld",&pan);

					fflush(stdin);
					p("Enter your birth date :");
					scanf("%s",&dob);

					p("Enter your age :");
					scanf("%d",age);

					p("Enter your electricity bill no. :");
					scanf("%ld",&bill);

					p("Enter your phone no. : ");
					scanf("%ld",&call);

					p("Enter the fix amount of deposit :  ");
					scanf("%ld",&fix);

					clrscr();
					p("-----------------------------------");
					p("\nYour account has been created :-");
					p("\n-----------------------------------");
					p("\n\n NAME :\t\t %s",name);
					p("\n A/C no. :\t 987653459562");
					p("\n TYPE OF A/C :\t fix deposite");
					p("\n Fix amount :\t %ld",fix);
				    break;


				   case 'D':
				   case 'd':
					clrscr();
					p("Enter your name :");
					scanf("%s",&name);

					fflush(stdin);
					p("Enter your adhar no. :");
					scanf("%ld",&adhar);

					p("Enter your pancard no. :");
					scanf("%ld",&pan);

					fflush(stdin);
					p("Enter your birth date :");
					scanf("%s",&dob);

					p("Enter your age :");
					scanf("%d",age);

					p("Enter your electricity bill no. :");
					scanf("%ld",&bill);

					p("Enter your phone no. : ");
					scanf("%ld",&call);

					clrscr();
					p("-----------------------------------");
					p("\nYour account has been created :-");
					p("\n-----------------------------------");
					p("\n\n NAME :\t\t %s",name);
					p("\n A/C no. :\t 987653459562");
					p("\n TYPE OF A/C :\t DEMATE");






					break;



				}
	break;
	case 2:

			clrscr();

			p("\n\n select your account type : ");
			p("\n\n\n Press A for saving account");
			p("\n Press B for current account ");
			p("\n Press C for fix deposit ");
			p("\n Press D for DEMATE ");
			p("\n\n Please enter your choice : ");
			fflush(stdin);
			scanf("%c",&ac);



			switch(ac)
			{

				clrscr();
				case 'A':
				case 'a':
					p("\n\n\n Enter the amount you want to deposit : ");
					scanf("%ld",&deposit);
					p("\n Total amount : %ld",500000+deposit);
			      break;

				case 'B':
				case 'b':
					p("\n\n\n Enter the amount you want to deposit : ");
					scanf("%ld",&deposit);
					p("\n Total amount : %ld",500000+deposit);
			      break;

				case 'C':
				case 'c':
					p("\n\n\n Enter the amount you want to deposit : ");
					scanf("%ld",&deposit);
					p("\n Total amount : %ld",500000+deposit);
			      break;

				case 'D':
				case 'd':
					p("\n\n\n Enter the amount you want to deposit : ");
					scanf("%ld",&deposit);
					p("\n Total amount : %ld",500000+deposit);
			      break;


			}
	  break;

	  case 3:


			clrscr();

			p("\n\n select your account type : ");
			p("\n\n\n Press A for saving account");
			p("\n Press B for current account ");
			p("\n Press C for fix deposit ");
			p("\n Press D for DEMATE ");
			p("\n\n Please enter your choice : ");
			fflush(stdin);
			scanf("%c",&ac);



			switch(ac)
			{

				clrscr();
				case 'A':
				case 'a':
					p("\n\n\n Enter the amount you want to withdraw : ");
					scanf("%ld",&withdraw);
					p("\n Total amount : %ld",500000-withdraw);
			      break;

				case 'B':
				case 'b':
					p("\n\n\n Enter the amount you want to withdraw : ");
					scanf("%ld",&withdraw);
					p("\n Total amount : %ld",500000-withdraw);
			      break;

				case 'C':
				case 'c':
					p("\n\n\n Enter the amount you want to withdraw : ");
					scanf("%ld",&withdraw);
					p("\n Total amount : %ld",500000-withdraw);
			      break;

				case 'D':
				case 'd':
					p("\n\n\n Enter the amount you want to withdraw : ");
					scanf("%ld",&withdraw);
					p("\n Total amount : %ld",500000-withdraw);
			      break;


			}
	  break;

	  case 4:
			clrscr();

			p("\n\n select your account type : ");
			p("\n\n\n Press A for saving account");
			p("\n Press B for current account ");
			p("\n Press C for fix deposit ");
			p("\n Press D for DEMATE ");
			p("\n\n Please enter your choice : ");
			fflush(stdin);
			scanf("%c",&ac);


			 switch(ac)
			 {
				clrscr();
				case 'A':
				case 'a':
					p("\n\n NAME : Dholariya Sanjana");
					p("\n A/C type : Saving");
					p("\n A/C no. : 149397878634");
					p("\n Amount : 4578000");
				break;
				case 'B':
				case 'b':
					p("\n\n NAME : Dholariya Sanjana");
					p("\n A/C type : Current");
					p("\n A/C no. : 149397878634");
					p("\n Amount : 4578000");
				break;
				case 'C':
				case 'c':
					p("\n\n NAME : Dholariya Sanjana");
					p("\n A/C type : Fix deposit");
					p("\n A/C no. : 149397878634");
					p("\n Amount : 4578000");
				break;
				case 'D':
				case 'd':
					p("\n\n NAME : Dholariya Sanjana");
					p("\n A/C type : DEMATE");
					p("\n A/C no. : 149397878634");
					p("\n Amount : 4578000");
				break;
			 }

	}



	getch();
}