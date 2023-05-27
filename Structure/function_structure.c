#include <stdio.h>

struct azim
{
    char name[20];
    int number;
    float pertange;
    char gread;
};

void azim(struct azim a1);

int main()
{
    struct azim a1 = {"Azim", 101, 99.75, 'A'};

    azim(a1);

    return 0;
}

void azim(struct azim a1)
{
    printf("\n%s\t%d\t%.2f\t%c\n", a1.name, a1.number, a1.pertange, a1.gread);
}