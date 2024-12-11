#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("read.txt", "w");

    if (fp != '\0')
    {

        char msg[50];
        scanf("%[^\n]", &msg);

        fprintf(fp, "%s", msg);

        fclose(fp);
    }
    else
    {
        printf("File is not open yet....!");
    }
}