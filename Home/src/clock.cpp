#include <bits/stdc++.h>
#include <graphics.h>
#include <ctime>
using namespace std;
const double PI = 3.14159265358979323846;
int cx, cy, r = 150;

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

void drawClock()
{
    setfillstyle(1, RED);
    fillellipse(cx, cy, r+5, r+5);
    setcolor(BLACK);
    setfillstyle(1, WHITE);
    fillellipse(cx, cy, r, r);
    setcolor(WHITE);
    for (int i = 0; i < 12; i++)
    {
        int hour = (6 - i) % 12 <= 0 ? (6 - i) % 12 + 12 : (6 - i) % 12;
        string numberString = to_string(hour);
        char *charArray = &numberString[0u];
        int x = cx + (r + 17) * sinDegrees(i * 30);
        int y = cy + (r + 17) * cosDegrees(i * 30);

        outtextxy(x - 5, y - 8, charArray);
    }
}

void drawClockHands(int hour, int minute, int second)
{
    int hourLength = r / 2;
    int minLength = r * 3 / 4;
    int secLength = r - 20;

    int hx = cx + static_cast<int>(hourLength * sin((hour % 12 + minute / 60.0) * (2 * M_PI / 12)));
    int hy = cy - static_cast<int>(hourLength * cos((hour % 12 + minute / 60.0) * (2 * M_PI / 12)));

    int mx = cx + static_cast<int>(minLength * sin(minute * (2 * M_PI / 60)));
    int my = cy - static_cast<int>(minLength * cos(minute * (2 * M_PI / 60)));

    int sx = cx + static_cast<int>(secLength * sin(second * (2 * M_PI / 60)));
    int sy = cy - static_cast<int>(secLength * cos(second * (2 * M_PI / 60)));

    // Draw hour hand in red
    setcolor(RED);
    line(cx, cy, hx, hy);

    // Draw minute hand in blue
    setcolor(BLUE);
    line(cx, cy, mx, my);

    // Draw second hand in black
    setcolor(BLACK);
    line(cx, cy, sx, sy);
}

void draw()
{
    cx = getmaxx() / 2;
    cy = getmaxy() / 2;
    drawClock();

    while (!kbhit())
    {
        time_t currentTime = time(nullptr);
        struct tm *localTime = localtime(&currentTime);

        int hour = localTime->tm_hour;
        int minute = localTime->tm_min;
        int second = localTime->tm_sec;

        setfillstyle(1, BLACK);
        fillellipse(cx, cy, 7, 7);
        setfillstyle(1, WHITE);
        drawClockHands(hour, minute, second);

        delay(1000);
        fillellipse(cx, cy, r, r);
        setcolor(WHITE);
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