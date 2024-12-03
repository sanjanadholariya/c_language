#include <stdio.h>
#include <string.h>
main()
{
    int count = 100;

    char string[count];

    printf("Enter the string : ");
    scanf("%[^\n]", &string);

    int len = strlen(string);

    char seen[count];

    for (int i = 0; i < count; i++)
    {
        seen[i] = 0;
    }

    int record = 1;

    for (int i = 0; i < len; i++)
    {
        if (seen[i] == 1)
        {
            continue;
        }
        for (int j = i + 1; j < len; j++)
        {
            if (string[i] == string[j])
            {
                record++;
                seen[j] = 1;

            }
        }

        printf("\n%c = %d", string[i], record);
        record = 1;
    }
}