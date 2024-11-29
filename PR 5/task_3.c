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
            printf("Enter element[%d][%d] :-  ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int temp;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d", array[j][i]);
        }
        printf("\n");
    }
}