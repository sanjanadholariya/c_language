#include <stdio.h>

void sum(int a, int b)
{
    printf("\n(: Sum of this two number is :- %d :)", a + b);
}

void sub(int a, int b)
{
    printf("\n(: Sum of this two number is :- %d :)", a - b);
}

void mul(int a, int b)
{
    printf("\n(: Sum of this two number is :- %d :)", a * b);
}

void div(int a, int b)
{
    printf("\n(: Sum of this two number is :- %d :)", a / b);
}

void mod(int a, int b)
{
    printf("\n(: Sum of this two number is :- %d :)", a % b);
}

void main()
{
    while (1)
    {
        printf("\n\nPress 1 for (+) ");
        printf("\nPress 2 for (-) ");
        printf("\nPress 3 for (*) ");
        printf("\nPress 4 for (/) ");
        printf("\nPress 5 for (%%)");
        printf("\nPress 0 for exit.");

        int choice;

        printf("\n\nEnter your choice :- ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        int first, second;

        printf("\n\nEnter first number :- ");
        scanf("%d", &first);

        printf("Enter second number :- ");
        scanf("%d", &second);

        switch (choice)
        {
        case 1:
            sum(first, second);
            break;
        case 2:
            sub(first, second);
            break;
        case 3:
            mul(first, second);
            break;
        case 4:
            div(first, second);
            break;
        case 5:
            mod(first, second);
            break;
        default:
            printf("Undefined value...!");
            break;
        }
    };
}