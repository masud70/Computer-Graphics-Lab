#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    // Radio
    rectangle(200, 100, 400, 200);
    rectangle(266, 80, 344, 100);
    rectangle(280, 142, 330, 158);
    line(280, 130, 330, 130);
    line(280, 170, 330, 170);
    circle(240, 150, 10);
    circle(240, 150, 20);
    circle(370, 150, 10);
    circle(370, 150, 20);

    // ID Card
    rectangle(200, 300, 400, 400);
    circle(250, 340, 10);
    arc(250, 375, 0, 180, 25);
    line(225, 375, 275, 375);

    line(300, 320, 380, 320);
    line(300, 340, 380, 340);
    line(300, 360, 380, 360);
    line(300, 380, 340, 380);
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