#include <stdio.h>
void ans(int count, int array[])
{
    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += array[i];
    }

    printf("The sum of the array is :- %d ", sum);
}
void main()
{
    int count;

    printf("Enter the size of array :- ");
    scanf("%d", &count);

    int array[count];

    for (int i = 0; i < count; i++)
    {
        printf("Element [%d] :- ", i);
        scanf("%d", &array[i]);
    }

    ans(count, array);
}