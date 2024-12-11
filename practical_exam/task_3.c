#include <stdio.h>
void odd(int a)
{
    if (a % 2 != 0)
    {
        printf("%d ", a);
    }
}
void main()
{
    int count;

    printf("Enter the size of 1D array :- ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++)
    {
        printf("Enter element[%d] :- ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < count; i++)
    {
        odd(array[i]);
    }
}