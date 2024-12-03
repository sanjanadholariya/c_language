#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

void main()
{

    int n;

    printf("Enter any number which you want to find a cube :- ");
    scanf("%d", &n);

    int ans = cube(n);

    printf("The cube of %d is : %d  ", n, ans);
}