#include<stdio.h>
#include<string.h>

main()
{
    char string[20];
    int vowels =0, consonents =0;
    printf("enter any string:-");
    scanf("%s",&string);

    for(int i=0;string[i] != '\0';i++)
    {

        char ch = string[i];
        if( ch >='a' && ch <='z')
        {
             if ( (ch == 'a' || ch =='e' || ch == 'i' || ch  =='o' || ch == 'u'))
            {
                 vowels++;
            }
           
        }
        else{
            consonents++;
        }       
    }
     printf("vower is :- %d\n",vowels);
     printf("consonent is :- %d\n", consonents);
    

    
}