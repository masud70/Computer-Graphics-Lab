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
    fillellipse(300, 250, 100, 100);
    setfillstyle(1, BLACK);
    fillellipse(300, 250, 90, 90);

    vector<int> v, c;

    for (int i = 0, j = 20.5, t = 0; i <= 360; i += 72, j += 72, t++)
    {

        v.push_back(300 + 30 * sinDegrees(i));
        v.push_back(250 + 30 * cosDegrees(i));

        v.push_back(300 + 30 * sinDegrees(i-72));
        v.push_back(250 + 30 * cosDegrees(i-72));

        v.push_back(300 + 30 * sinDegrees(i));
        v.push_back(250 + 30 * cosDegrees(i));

        v.push_back(300 + 70 * sinDegrees(j));
        v.push_back(250 + 70 * cosDegrees(j));

        v.push_back(300 + 70 * sinDegrees(j + 31));
        v.push_back(250 + 70 * cosDegrees(j + 31));

        c.push_back(310 + 50 * sinDegrees(i+36));
        c.push_back(251 + 50 * cosDegrees(i+36));
    }

    int *points = new int[v.size()];
    copy(v.begin(), v.end(), points);
    drawpoly(v.size() / 2, points);

    for(int i=0; i<c.size(); i+=2){
        setfillstyle(1, i);
        floodfill(c[i], c[i+1], WHITE);
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