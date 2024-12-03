#include <stdio.h>
void main()
{
    int count = 100;

    char string[count];

    printf("Enter string : ");
    gets(string);

    for (int i = 0; i < count; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            string[i] = string[i] + 32;
        }
    }

    printf("String in lower case :- ");
    puts(string);
    
}