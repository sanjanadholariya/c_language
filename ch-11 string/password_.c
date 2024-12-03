#include <stdio.h>
#include <string.h>
void main()
{
    int count = 1000;

    char string[count];

    printf("\n\n--> Password must contain at least one letter, one digit & one special symbol. \n--> Password must be at least 6 characters.");

    printf("\n\n * Enter your password :- ");
    gets(string);

    int len = strlen(string);
    int upper = 0, lower = 0, digit = 0, symbol = 0;

    for (int i = 0; i < len; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            upper += 1;
        }
        else if (string[i] >= 97 && string[i] <= 122)
        {
            lower += 1;
        }
        else if (string[i] >= 48 && string[i] <= 57)
        {
            digit += 1;
        }
        else if ((string[i] >= 32 && string[i] <= 47) ||
                 (string[i] >= 58 && string[i] <= 64) ||
                 (string[i] >= 91 && string[i] <= 96) ||
                 (string[i] >= 123 && string[i] <= 126))
        {
            symbol += 1;
        }
    }

    if (upper >= 1 && lower >= 1 && digit >= 1 && symbol >= 1 && len >= 6)
    {
        printf("Password is strong...");
    }
    else
    {
        printf("Password is not strong...!");
    }
}