#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int i = 0;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\Turbo\tc\bgi");

    while (i < 1000)
    {
        x = rand() % 644;
        y = rand() % 479;
        putpixel(x, y, 15);
        setcolor(random(16));
        i++;
    }
    getch();
    closegraph();
    return 0;
}