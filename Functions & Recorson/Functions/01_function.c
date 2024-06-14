#include <stdio.h>
void display();

int main()
{
    int a;
    printf("Initializing display function\n");
    display();
    printf("Display function end\n");
    return 0;
}

void display()
{
    printf("this is display\n");
}