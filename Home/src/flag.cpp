#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void initialization(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*) "C:\\TC\\BGI");
    outtextxy(getmaxx()/2-110, 10, (char*) "Md. Masud Mazumder (19701070)");
    line(0, 35, getmaxx(), 35);
}

void tonmoy();

int main(){
    // Initialization
    initialization();
    /*
    rectangle(150,60,450,200);
    setfillstyle(1,GREEN);
    floodfill(151,61,WHITE);
    rectangle(138,45,150,460);
    setfillstyle(1,BLUE);
    floodfill(139,46,WHITE);
    bar(130,460,160,470);
    circle(300,130,55);
    setfillstyle(1,RED);
    floodfill(301,131,WHITE);
    */
    getch();
    closegraph();
    return 0;
}
