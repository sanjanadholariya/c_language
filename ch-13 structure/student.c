#include <stdio.h>
struct student
{
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_standard;
    char stu_school[50];
};
void main()
{

    int n;

    printf("Enter the number of students :- ");
    scanf("%d", &n);

    struct student s1[n];

    for (int i = 0; i < n; i++)
    {
        printf("\n\nEnter your i'd :- ");
        scanf("%d", &s1[i].stu_id);

        fflush(stdin);

        printf("Enter your name :- ");
        scanf("%[^\n]", &s1[i].stu_name);

        printf("Enter your age :- ");
        scanf("%d", &s1[i].stu_age);

        fflush(stdin);

        printf("Enter your course :- ");
        scanf("%[^\n]", &s1[i].stu_course);

        printf("Enter your city :- ");
        scanf("%s", &s1[i].stu_city);

        printf("Enter your standard :- ");
        scanf("%d", &s1[i].stu_standard);

        fflush(stdin);

        printf("Enter your school :- ");
        scanf("%[^\n]", &s1[i].stu_school);
    }

    for (int i = 0; i < n; i++)
    {

        printf("\n\nID\t:- %d", s1[i].stu_id);
        printf("\nName\t:- %s", s1[i].stu_name);
        printf("\nAge\t:- %d", s1[i].stu_age);
        printf("\nCourse\t:- %s", s1[i].stu_course);
        printf("\nCity\t:- %s", s1[i].stu_city);
        printf("\nStandard:- %d", s1[i].stu_standard);
        printf("\nSchool\t:- %s", s1[i].stu_school);
    }
}