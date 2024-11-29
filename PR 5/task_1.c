#include <stdio.h>
main()
{
    int count;

    printf("Enter the size of array : ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\n\nNegative element from array :-   ");

    for (int i = 0; i < count; i++)
    {
        if (array[i] < 0)
        {
            printf("%d ", array[i]);
        }
    }
}