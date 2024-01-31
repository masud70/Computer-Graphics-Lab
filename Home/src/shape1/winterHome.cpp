#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    int points[] = {
        100, 200, 
        500, 200, 
        500, 100, 
        228, 100,
        300, 200,
        200, 60,
        100, 200,
        130, 158,
        130, 100,
        150, 100,
        150, 130,
        100, 200,
        120, 200,
        120, 350,
        140, 350,
        140, 250,
        180, 250,
        180, 350,
        120, 350,
        280, 350,
        280, 200,
        280, 350,
        320, 350,
        320, 250,
        450, 250,
        450, 350,
        320, 350,
        480, 350,
        480, 200
    };
    drawpoly(sizeof(points)/sizeof(int)/2, points);

    rectangle(210, 250, 250, 300);
    rectangle(125, 90, 155, 100);
    circle(200, 150, 20);
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