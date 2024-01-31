#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    int points[] = {
        200, 200,
        400, 200,
        300, 100,
        200, 200,

        225, 200,
        225, 350,

        0, 350,
        225, 350,
        225, 400,

        275, 400,
        275, 300,
        325, 300,
        325, 400,
        275, 400,

        375, 400,
        375, 350,

        getmaxx(), 350,
        375, 350,

        375, 200
    };
    drawpoly(sizeof(points)/sizeof(int)/2, points);

    circle(260, 250, 20);
    circle(340, 250, 20);
    circle(310, 350, 10);
    circle(420, 110, 25);

    setfillstyle(1, YELLOW);
    circle(420, 110, 25);
    floodfill(421, 111, WHITE);
    setcolor(YELLOW);

    for (int i = 0; i < 360; i += 30) {
        int rayLength = (i % 60 == 0) ? 30 : 15;
        int x1 = 420 + 40 * cos(i * 3.14 / 180);
        int y1 = 110 + 40 * sin(i * 3.14 / 180);
        int x2 = x1 + rayLength * cos(i * 3.14 / 180);
        int y2 = y1 + rayLength * sin(i * 3.14 / 180);
        line(x1, y1, x2, y2);
    }
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*) "C:\\TC\\BGI");
    outtextxy(getmaxx()/2-110, 10, (char*) "Md. Masud Mazumder (19701070)");
    line(0, 35, getmaxx(), 35);
    draw();
    getch();
    closegraph();
    return 0;
}