#include <stdio.h>
main()
{
    int count;

    printf("Enter the size of arrray : ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    int n = 0;

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (array[i] == array[j])
            {
                array[j] = NULL;
                n++;
            }
        }
    }

    for (int i = 0; i < (count - n); i++)
    {
        printf("%d ", array[i]);
    }
}