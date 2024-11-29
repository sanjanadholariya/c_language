#include <stdio.h>
main()
{
    int count;

    printf("Enter the size of array : ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++)
    {
        printf("Element [%d] : ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }

    printf("\n\nThe length of array is : %d", count);
}
