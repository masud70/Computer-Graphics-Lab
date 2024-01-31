#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    // Bicycle
    fillellipse(100, 300, 50, 50);
    fillellipse(300, 300, 50, 50);
    fillellipse(200, 300, 15, 15);

    setfillstyle(1, BLACK);
    fillellipse(100, 300, 45, 45);
    fillellipse(300, 300, 45, 45);
    fillellipse(200, 300, 10, 10);

    for(int i=0; i<7; i++){
        line(100, 298+i, 190, 298+i);
        line(98+i, 303, 148+i, 220);
        line(198+i, 290, 135+i, 200);
        line(120, 198+i, 158, 198+i);
        line(198+i, 290, 248+i, 220);
        line(298+i, 300, 238+i, 200);
        line(237+i, 200, 257+i, 185);
    }

    // Circle Plus
    setfillstyle(1, WHITE);
    fillellipse(500, 300, 50, 50);
    setfillstyle(1, BLACK);
    int points[] = {
        495, 250,
        495, 295,
        450, 295,
        450, 305,
        495, 305,
        495, 350,
        505, 350,
        505, 305,
        550, 305,
        550, 295,
        505, 295,
        505, 250,
        495, 250
    };
    fillpoly(sizeof(points)/sizeof(int)/2, points);
    setfillstyle(1, WHITE);
    rectangle(495, 235, 505, 250);
    rectangle(495, 350, 505, 365);
    rectangle(435, 295, 450, 305);
    rectangle(550, 295, 565, 305);

    floodfill(496, 236, WHITE);
    floodfill(496, 351, WHITE);
    floodfill(436, 296, WHITE);
    floodfill(551, 296, WHITE);
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