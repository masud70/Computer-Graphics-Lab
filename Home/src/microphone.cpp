#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void initialization(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*) "C:\\TC\\BGI");
    setcolor(BLACK);
    setfillstyle(1, WHITE);
    floodfill(4, 4, WHITE);
    setbkcolor(WHITE);
    outtextxy(getmaxx()/2-110, 10, (char*) "Md. Masud Mazumder (19701070)");
    line(0, 35, getmaxx(), 35);
}

int main(){
    // Initialization
    initialization();
    
    rectangle(240, 150, 250, 250);
    rectangle(350, 150, 360, 250);
    setfillstyle(1, BLACK);
    floodfill(241, 151, BLACK);
    floodfill(351, 151, BLACK);
    for(int i=0; i<10; i++){
        arc(300, 150, 0, 180, 50+i);
        arc(300, 250, 180, 360, 50+i);
        arc(300, 250, 180, 360, 70+i);
    }
    rectangle(220, 210, 230, 250);
    rectangle(370, 210, 380, 250);
    setfillstyle(1, BLACK);
    floodfill(221, 211, BLACK);
    floodfill(371, 211, BLACK);
    rectangle(295, 325, 305, 370);
    floodfill(304, 369, BLACK);
    rectangle(240, 370, 360, 380);
    floodfill(241, 371, BLACK);
    
    getch();
    closegraph();
    return 0;
}