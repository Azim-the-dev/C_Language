#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    float total,per;
    int temp;
    printf("\nEnter your MIL mark: ");
    scanf("%d", &m1);

    printf("\nEnter your ENG mark: ");
    scanf("%d", &m2);

    printf("\nEnter your C Language mark: ");
    scanf("%d", &m3);

    printf("\nEnter your POM mark: ");
    scanf("%d", &m4);

    printf("\nEnter your ENV mark: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    total=temp;
    per = (total/500)*100;

    printf("\nYou have %d mark out of 500 ",temp);

    return 0;
}