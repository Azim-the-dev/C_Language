#include <stdio.h>
#include <Windows.h>
#include <conio.h>

int main() {
    int num;

    printf("Enter how many eow of star you want: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            printf(".");
        }
        
        printf("\n");
    }
    printf("Click the button to make a sound!\n");

    while (1) {
        if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) {
            Beep(1000, 500);
        }
    }
    getch();

    return 0;
}