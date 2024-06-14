#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int class;
    int roll;
    float per;
    char grd;
} st, st2;

int main()
{
    printf("For first student\n");

    printf("Enter Your name: ");
    scanf(" %s", st.name);

    printf("Enter Your class: ");
    scanf(" %d", &st.class);

    printf("Enter Your roll no: ");
    scanf(" %d", &st.roll);

    printf("Enter Your pertange: ");
    scanf(" %f", &st.per);

    printf("Enter Your grade: ");
    scanf(" %c", &st.grd);

    printf("For second student\n");

    printf("Enter Your name: ");
    scanf(" %s", st2.name);

    printf("Enter Your class: ");
    scanf(" %d", &st2.class);

    printf("Enter Your roll no: ");
    scanf(" %d", &st2.roll);

    printf("Enter Your pertange: ");
    scanf(" %f", &st2.per);

    printf("Enter Your grade: ");
    scanf(" %c", &st2.grd);

    printf("\n\nFirst student:-\n");

    printf("Your name is %s\n", st.name);
    printf("Your class is %d\n", st.class);
    printf("Your roll no is %d\n", st.roll);
    printf("Your pertange is %.2f\n", st.per);
    printf("Your grade is %c\n", st.grd);

    printf("\n\nSecond student:-\n");

    printf("\n\nYour name is %s\n", st2.name);
    printf("Your class is %d\n", st2.class);
    printf("Your roll no is %d\n", st2.roll);
    printf("Your pertange is %.2f\n", st2.per);
    printf("Your grade is %c\n", st2.grd);

    return 0;
}