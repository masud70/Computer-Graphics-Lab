#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    setfillstyle(1, WHITE);

    // Smile Face
    circle(100, 100, 50);
    circle(80, 90, 3);
    circle(120, 90, 3);

    floodfill(80, 90, WHITE);
    floodfill(120, 90, WHITE);

    line(80, 105, 120, 105);
    arc(100, 105, 180, 360, 20);

    // Sunglass face
    circle(300, 100, 50);
    line(280, 85, 285, 85);
    line(320, 85, 325, 85);

    circle(270, 80, 25);
    circle(330, 80, 25);
    arc(300, 80, 50, 130, 20);

    arc(300, 100, 220, 320, 25);

    // Eye blinking face
    circle(500, 100, 50);
    arc(485, 85, 30, 165, 10);
    arc(485, 110, 70, 105, 30);
    floodfill(485, 79, WHITE);
    fillellipse(515, 80, 6, 10);

    pieslice(500, 95, 160, 350, 30);
    setfillstyle(1, BLACK);
    setcolor(BLACK);
    pieslice(500, 85, 170, 340, 35);

    // Angry face
    setcolor(WHITE);
    circle(300, 300, 50);
    ellipse(285, 290, 0, 0, 8, 12);
    ellipse(315, 290, 0, 0, 8, 12);
    setfillstyle(1, WHITE);
    fillellipse(290, 295, 3, 5);
    fillellipse(310, 295, 3, 5);

    arc(270, 290, 0, 60, 23);
    arc(330, 290, 120, 180, 23);

    arc(300, 330, 30, 150, 20);
    arc(300, 330, 200, 340, 8);
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