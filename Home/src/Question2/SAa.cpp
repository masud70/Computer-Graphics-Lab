#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    // Smile face
    circle(100, 100, 50);
    fillellipse(80, 90, 3, 3);
    fillellipse(120, 90, 3, 3);

    line(80, 105, 120, 105);
    arc(100, 105, 180, 360, 20);

    // Wifi
    fillellipse(300, 135, 5, 5);
    for(int i=1; i<6; i+=2){
        for(int j=10*i; j<10*i+10; j++){
            arc(300, 130, 45, 135, j);
        }
    }

    // TV
    for(int i=0; i<5; i++) rectangle(400+i, 70+i, 520-i, 130-i);
    rectangle(455, 130, 465, 145);
    floodfill(456, 131, WHITE);
    fillellipse(460, 150, 25, 5);
    setfillstyle(1, BLACK);
    fillellipse(460, 129, 3, 3);
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