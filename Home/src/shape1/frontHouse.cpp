#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    setfillstyle(1, WHITE);

    int points[] = {150, 150, 450, 150, 450, 135, 300, 50, 150, 135, 150, 150};
    fillpoly(sizeof(points)/sizeof(int)/2, points);

    rectangle(160, 160, 440, 175);
    floodfill(161, 161, WHITE);

    for(int i=0; i<3; i++){
        int dx = i*95;
        rectangle(170 + dx, 185, 170 + dx + 70, 300);
        floodfill(171+dx, 186, WHITE);
    }

    rectangle(160, 310, 440, 325);
    floodfill(161, 311, WHITE);

    rectangle(150, 335, 450, 350);
    floodfill(151, 336, WHITE);
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