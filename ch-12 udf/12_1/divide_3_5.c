#include <stdio.h>

void divid()
{
    int n;

    printf("Enter any number :- ");
    scanf("%d", &n);

    if ((n % 3 == 0) && (n % 5 == 0))
    {
        printf("This number is divisible by 3 and 5 both.");
    }
    else
    {
        printf("This number is not divisible by 3 and 5 both.");
    }
}
void main()
{
    divid();
}