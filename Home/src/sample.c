#include <graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "c:\MinGW\bin";

    initgraph(&gd, &gm, data);

    line(20, 20, 100, 100);

    getch();
    closegraph();
    return (0);
}