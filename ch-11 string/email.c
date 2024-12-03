#include <stdio.h>
#include <string.h>
void main()
{

    char email[100] = "sanjana@gmail.com";
    int pass[6] = {1, 2, 3, 4, 5, 6};

    char user_email[100];
    int user_pass[100];

    printf("Enter your mail :-  ");
    scanf("%[^\n]", &user_email);

    printf("Enter your password :-  ");
    scanf("%d", &user_pass);

    int cmp_mail = 0;
    int cmp_pass = 0;

    for (int i = 0; i < 100; i++)
    {
        if (email[i] != user_email[i])
        {
            cmp_mail = 1;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (pass[i] != user_pass[i])
        {
            cmp_pass = 1;
        }
    }

    if (cmp_mail == 0 && cmp_pass == 0)
    {
        printf("Login successfully...!");
    }
    else
    {
        printf("Login Failed. Invalid Credentials. %d %d", cmp_mail, cmp_pass);
    }
}