#include <stdio.h>
main()
{
    int count;

    printf("Enter the size of array : ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++)
    {
        printf("Enter element[%d] : ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }

    printf("\n\narray in ascending order :-   ");

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (array[i] > array[j])
            {
                int c = array[i];
                array[i] = array[j];
                array[j] = c;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
}