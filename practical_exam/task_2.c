#include <stdio.h>
int avg(int a, int b)
{
    return a / b;
}
void main()
{
    int row, col;

    printf("Enter the number of row :- ");
    scanf("%d", &row);

    printf("Enter the number of column :-");
    scanf("%d", &col);

    int array[row][col];
    int sum = 0;

    printf("\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element[%d][%d] :- ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
        printf("\n");
    }

    int div_value = (row * col);

    int average = avg(sum, div_value);

    printf("The average of 2D array is :- %d ", average);
}