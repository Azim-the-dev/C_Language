#include <stdio.h>

void rec();
int main()
{
    int a;
    printf("Processing....\n");
    rec();
    printf("Done");
    return 0;
}

void rec()
{
    int a;
    printf("Hello world\n");
    printf("Do wanna see again");
    scanf("%d", &a);

    if (a == 1)
    {
        rec();
    }
}