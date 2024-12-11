#include <stdio.h>
void main()
{
    for (int i = 10; i >= 6; i--)
    {
        for (int s = 1; s <= (i - 5 - 1); s++)
        {
            printf("   ");
        }
        for (int j = i; j <= 10; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
}