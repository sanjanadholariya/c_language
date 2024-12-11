#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("data.txt", "w");

    if (fp != '\0')
    {
        int n;

        printf("Enter the number of fruits :- ");
        scanf("%d", &n);

        fflush(stdin);

        char name[20];
        char color[20];

        printf("\n\nEnter the name and colour of the fruits as describe below :- ");

        for (int i = 0; i < n; i++)
        {
            printf("\nName :- ");
            scanf("%[^\n]", &name);

            fflush(stdin);

            printf("Color :- ");
            scanf("%[^\n]", &color);

            fflush(stdin);

            fprintf(fp, "\n\nName :- %s", name);

            fprintf(fp, "\ncolor :- %s", color);
        }
    }
}