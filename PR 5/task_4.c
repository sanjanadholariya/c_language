#include <stdio.h>
main()
{
    int count;

    printf("Enter the size : ");
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

    int row, col;

    printf("Enter row number :- ");
    scanf("%d", &row);

    printf("\n\nElement of row %d is :-  ", row);

    int sum1 = 0;

    for (int i = row; i <= row; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d ", array[i][j]);
            sum1 += array[i][i];
        }
    }

    printf("\n\nsum of row %d is :-  %d", row, sum1);
}