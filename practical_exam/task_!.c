#include <stdio.h>
void main()
{
    int eng, math, sci, ss, hindi;

    printf("\n\nEnter your marks which mention below:-");

    printf("\n\nEnglish marks :- ");
    scanf("%d", &eng);

    printf("\nMaths marks :-");
    scanf("%d", &math);

    printf("\nScience marks :- ");
    scanf("%d", &sci);

    printf("\nSocial Science marks :- ");
    scanf("%d", &ss);

    printf("\nHindi marks :- ");
    scanf("%d", &hindi);

    int avg;

    avg = (eng + math + sci + ss + hindi) / 5;

    if (avg > 90 && avg <= 100)
    {
        printf("\n **** congratulations...! you got Grade A");
    }
    else if (avg > 80 && avg <= 90)
    {
        printf("\n **** Exelent...! you got Grade B");
    }
    else if (avg > 70 && avg <= 80)
    {
        printf("\n **** very good...! you got Grade C");
    }
    else if (avg > 60 && avg <= 70)
    {
        printf("\n **** good...! you god Grade D");
    }
    else if (avg > 33 && avg <= 60)
    {
        printf("\n **** You got Grade E");
    }
    else if (avg >= 0 && avg <= 33)
    {
        printf("\n **** Batter luck for next time.... you are failed..!");
    }
    else
    {
        printf("\n **** Enter valid marks.");
    }
}