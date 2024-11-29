#include <stdio.h>
main()
{
    int count;

    printf("Enter the size of array : ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++)
    {
        printf("Enter element[i] : ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }

    int sum = 0;

    printf("\n\n");

    for (int i = 0; i < count; i++)
    {
        sum = sum + array[i];
    }

    int avg;

    avg = sum / count;

    printf("\n\nThe average of this array is : %.2f ", (float)avg);
}