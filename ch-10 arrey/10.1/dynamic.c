#include <stdio.h>
main()
{
    int n;

    printf("Enter the length of array : ");
    scanf("%d", &n);

    int array[n];

    printf("\n\ninput of array :-\n\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element[%d] :", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n\noutput of array :-\t");

    for (int i = 0; i < n; i++)
    {
        printf("%d    ", array[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    printf("\n\nThe sum of this array is : %d ", sum);

    int avg;

    avg = sum / n;

    printf("\n\nThe average of this array is : %d", avg);
}