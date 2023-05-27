#include <stdio.h>
#include <Windows.h>
#include <conio.h>

void setColor(int color)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main()
{
    setColor(10); // Green text
    printf("Hello, World!\n");
    printf("THANKS !\n\n\n");
    printf("*ABOUT THIS GAME*\n");
    printf("/t/tCREATED BY: SK AZIM\n");
    printf("/t/tDATE 15/01/2023");
        printf("*ABOUT THIS GAME*\n");
        printf("\t\tCREATED BY: SK AZIM\n");
        printf("\t\tDATE 15/01/2023");
    getch();
    return 0;
}
