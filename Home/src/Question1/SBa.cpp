#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    int points[] = {
        200, 200,
        210, 210,

        350, 100,
        500, 210,

        510, 200,

        350, 80,

        450, 155,
        450, 110,
        430, 110,
        430, 140,
        350, 80,

        200, 200,
    };

    drawpoly(sizeof(points)/sizeof(int)/2, points);

    int points2[] = {
        222, 200,
        222, 350,
        330, 350,
        330, 250,
        380, 250,
        380, 350,
        330, 350,
        488, 350,
        488, 200
    };

    drawpoly(sizeof(points2)/sizeof(int)/2, points2);

    rectangle(425, 110, 455, 100);
    circle(340, 300, 5);

    rectangle(250, 240, 300, 280);
    rectangle(410, 240, 460, 280);
    rectangle(330, 180, 380, 220);

    line(250, 260, 300, 260);
    line(410, 260, 460, 260);
    line(330, 200, 380, 200);

    line(275, 240, 275, 280);
    line(435, 240, 435, 280);
    line(355, 180, 355, 220);
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