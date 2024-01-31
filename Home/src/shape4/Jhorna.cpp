#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
const double PI = 3.14159265358979323846;

double degreesToRadians(double degrees)
{
    return degrees * PI / 180.0;
}

double sinDegrees(double degrees)
{
    return sin(degreesToRadians(degrees));
}

double cosDegrees(double degrees)
{
    return cos(degreesToRadians(degrees));
}

void draw()
{
    line(200, 100, 400, 100);
    line(120, 180, 480, 180);

    arc(200, 180, 90, 180, 80);
    arc(400, 180, 0, 90, 80);

    rectangle(250, 100, 350, 50);
    floodfill(251, 51, WHITE);
    floodfill(201, 101, WHITE);

    for (int i = 0, x = 250, y=350, r=20; i < 3; i++)
    {
        x -= 50 * sinDegrees(30);
        y += 50 * sinDegrees(30);
        fillellipse(x, 220 + i * 70, r, r);
        fillellipse(300, 220 + i * 70, r, r);
        fillellipse(y, 220 + i * 70, r, r);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"C:\\TC\\BGI");
    outtextxy(getmaxx() / 2 - 110, 10, (char *)"Md. Masud Mazumder (19701070)");
    line(0, 35, getmaxx(), 35);
    draw();
    getch();
    closegraph();
    return 0;
}