#include <stdio.h>

void main()
{
    FILE *fp1, *fp2;
    int i;

    fp1 = fopen("even.txt", "w");
    fp2 = fopen("odd.txt", "w");

    if (fp1 != '\0' && fp2 != '\0')
    {
        for (i = 50; i <= 70; i++)
        {
            if (i % 2 == 0)
            {

                fprintf(fp1, "%d ", i);
            }
            else
            {

                fprintf(fp2, "%d ", i);
            }
        }
    }
}
