// Write a program to find out whether a student is pass or fail.
// if it requires a total of 40% and at least 33% in each subject to pass.
// Assume 3 subjects and take marks as input from the user.

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float total;
    int per;

    printf("Enter Your ENV Mark: ");
    scanf("%d", &sub1);

    printf("Enter Your DL Mark: ");
    scanf("%d", &sub2);

    printf("Enter Your C Languse Mark: ");
    scanf("%d", &sub3);

    if ((sub1 > 100) || (sub2 > 100) || (sub3 > 100))
    {
        printf("\nDon't be smart give mark under (0-100)");
    }
    else
    {
        total = (sub1 + sub2 + sub3);
        per = (total / 300) * 100; // Percentage Calculation.

        if ((per >= 40) && (sub1 >= 33) && (sub2 >= 33) && (sub3 >= 33))
        {
            printf("\nYour persantage is %d and you are pass", per);
        }

        else if ((per >= 40) && (sub1 <= 33) && (sub2 >= 33) && (sub3 >= 33))
        {
            printf("\nYour persantage is %d but you are fail, Becase you have less than 33 persantage in ENV", per);
        }

        else if ((per >= 40) && (sub1 >= 33) && (sub2 <= 33) && (sub3 >= 33))
        {
            printf("\nYour persantage is %d but you are fail, Becase you have less than 33 persantage in DL", per);
        }

        else if ((per >= 40) && (sub1 >= 33) && (sub2 >= 33) && (sub3 <= 33))
        {
            printf("\nYour persantage is %d but you are fail, Becase you have less than 33 persantage in C Languse", per);
        }

        else if ((per <= 40) && (sub1 >= 33) && (sub2 >= 33) && (sub3 >= 33))
        {
            printf("\nYour persantage is %d but you are fail, Becase you have total less than 40 perstange mark", per);
        }

        else
        {
            printf("\nYour persantage is %d and you are fail", per);
        }
    }
    return 0;
}