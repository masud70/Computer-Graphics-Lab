#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    rectangle(200, 100, 450, 300);
    rectangle(210, 110, 440, 270);

    rectangle(300, 300, 350, 320);
    rectangle(275, 320, 375, 340);

    circle(325, 285, 10);

    outtextxy(305, 160, (char*) "MASUD");
    outtextxy(290, 180, (char*) "MAZUMDER");
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