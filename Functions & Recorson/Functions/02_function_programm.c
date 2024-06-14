#include <stdio.h>

void a();
void b();
void c();
int main()

{
    int nothing;
    a();
    b();
    return 0;
}

void a()
{
    int a;
    printf("Good morning\n");
}

void b()
{
    printf("Good afternoon\n");
    c();
}

void c()
{
    printf("Good night\n");
}