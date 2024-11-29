#include <stdio.h>
main()
{
    int count;

    printf("Enter the size of array : ");
    scanf("%d", &count);

    printf("\n\nEnter first arrey's element :- \n");

    int array1[count];

    for (int i = 0; i < count; i++)
    {
        printf("Element[%d] : ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("\n\nEnter second arrey's element :- \n");

    int array2[count];

    for (int i = 0; i < count; i++)
    {
        printf("Element[%d] : ", i + 1);
        scanf("%d", &array2[i]);
    }

    int sum = 0;

    printf("\n\narray3 is :- ");
    for (int i = 0; i < count; i++)
    {
        sum = array1[i] + array2[i];
        printf("  %d  ", sum);
    }
}