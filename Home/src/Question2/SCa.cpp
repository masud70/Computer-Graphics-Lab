#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    int points[] = {
        200, 100,
        200, 290,
        300, 290,
        300, 100,
        200, 100
    };
    drawpoly(sizeof(points)/sizeof(int)/2, points);
    int points2[] = {
        210, 110,
        210, 180,
        290, 180,
        290, 110,
        210, 110
    };
    fillpoly(sizeof(points2)/sizeof(int)/2, points2);

    rectangle(210, 200, 230, 210);
    rectangle(240, 200, 260, 210);
    rectangle(270, 200, 290, 210);

    rectangle(210, 220, 230, 230);
    rectangle(240, 220, 260, 230);
    rectangle(270, 220, 290, 230);

    rectangle(210, 240, 230, 250);
    rectangle(240, 240, 260, 250);
    rectangle(270, 240, 290, 250);

    rectangle(210, 260, 230, 270);
    rectangle(240, 260, 260, 270);
    rectangle(270, 260, 290, 270);

    floodfill(211, 201, WHITE);
    floodfill(241, 201, WHITE);
    floodfill(271, 201, WHITE);

    floodfill(211, 221, WHITE);
    floodfill(241, 221, WHITE);
    floodfill(271, 221, WHITE);

    floodfill(211, 241, WHITE);
    floodfill(241, 241, WHITE);
    floodfill(271, 241, WHITE);

    floodfill(211, 261, WHITE);
    floodfill(241, 261, WHITE);
    floodfill(271, 261, WHITE);

    rectangle(285, 100, 290, 75);

    arc(287, 80, 300, 60, 12);
    arc(287, 80, 310, 50, 17);
    arc(287, 80, 120, 240, 12);
    arc(287, 80, 130, 230, 17);

    // File input
    int points3[] = {
        440, 150,
        430, 150,
        400, 200,
        400, 230,
        500, 230,
        500, 200,
        470, 150,
        460, 150,
        470, 150,
        500, 200,
        470, 200,
        465, 215,
        435, 215,
        430, 200,
        400, 200
    };
    drawpoly(sizeof(points3)/sizeof(int)/2, points3);

    int points4[] = {
        450, 130,
        450, 200,
        430, 180,
        450, 200,
        470, 180
    };
    drawpoly(sizeof(points4)/sizeof(int)/2, points4);
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