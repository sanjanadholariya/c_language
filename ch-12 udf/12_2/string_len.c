#include <stdio.h>
#include <string.h>

int length(char string[])
{
    int len = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}

void main()
{
    char string[50];

    printf("Enter any string :- ");
    gets(string);

    int ans = length(string);

    printf("The length of string is %d ", ans);
}