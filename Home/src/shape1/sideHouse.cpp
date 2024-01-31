#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    int points[] = {
        100, 200,
        300, 100,
        500, 200
    };
    drawpoly(sizeof(points)/sizeof(int)/2, points);

    int points2[] = {
        150, 250,
        100, 300,
        100, 400,
        150, 400,
        150, 215,

        300, 140,
        450, 215,
        450, 400,
        150, 400,

        275, 400,
        275, 330,
        325, 330,
        325, 400,

        500, 400,
        500, 300,
        450, 250
    };
    drawpoly(sizeof(points2)/sizeof(int)/2, points2);
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