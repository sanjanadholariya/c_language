#include <stdio.h>
main()
{
    int count;

    printf("Enter the size of array : ");
    scanf("%d", &count);

    int array[count][count];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("Element[%d][%d] :-  ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int max = array[0][0];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
    }

    printf("\n\nThe largest element of this 2d array is : %d ", max);
}