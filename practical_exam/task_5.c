#include <stdio.h>
struct laptop
{
    char company_name[50];
    char processor[20];
    int price;
};

void main()
{
    int n;

    printf("Enter the number of laptop :- ");
    scanf("%d", &n);

    struct laptop lp[n];

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);

        printf("\n\nEnter the name of the company :- ");
        scanf("%[^\n]", &lp->company_name);

        fflush(stdin);

        printf("Enter the processor :- ");
        scanf("%[^\n]", &lp->processor);

        printf("Enter the price :- ");
        scanf("%d", &lp->price);
    }

    printf("\n\n----------------------------------------------------------------------------------");

    for (int i = 0; i < n; i++)
    {
        printf("\n\nCompany\t  :- %s", lp->company_name);
        printf("\nProcessor :- %s", lp->processor);
        printf("\nPrice\t  :- %d", lp->price);
    }
}