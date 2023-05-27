#include <stdio.h>

struct azim
{
    char name[20];
    int number;
    float pertange;
    char gread;
};


int main()
{
    struct azim a1 = {"Azim",101,99.75,'A'};

    printf("\n%s\t%d\t%.2f\t%c\n",a1.name,a1.number,a1.pertange,a1.gread);
    
    return 0;
}