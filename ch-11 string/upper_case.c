#include <stdio.h>
void main()
{
    int count = 100;

    char string[count];

    printf("Enter any string : ");
    gets(string);

    for (int i = 0; i < count; i++)
    {
        if (string[i] >= 97 && string[i] <= 122)
        {
            string[i] -= 32;
        }
    }

    printf("String in upper case :-  ");
    puts(string);
}