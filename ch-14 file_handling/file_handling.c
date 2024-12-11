#include <stdio.h>
void main()
{
    FILE *fp;

    fp = fopen("file.txt", "a");

    if (fp != '\0')
    {
        char email[50];
        int pass[50];

        printf("Enter your email :- ");
        scanf("%s", &email);

        printf("Enter your password :- ");
        scanf("%d", &pass);

        fprintf(fp, "\n\nEmail\t:- %s", email);
        fprintf(fp, "\nPassword\t:- %d", pass);

        fclose(fp);
    }
    else
    {
        printf("File is not open yet...!");
    }
}