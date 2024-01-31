#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void initialization(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*) "C:\\TC\\BGI");
    setcolor(BLACK);
    rectangle(0, 0, getmaxx(), getmaxy());
    floodfill(4, 4, WHITE);
    setbkcolor(WHITE);
    outtextxy(getmaxx()/2-110, 10, (char*) "Md. Masud Mazumder (19701070)");
    line(0, 35, getmaxx(), 35);
}

int main(){
    // Initialization
    initialization();
    
    int shade[] = {150, 50, 450, 50, 500, 100, 100, 100, 150, 50};
    drawpoly(sizeof(shade)/sizeof(int)/2, shade);
    for(int i=150, j=100; i<450; i+=6, j+=8){
        line(i, 50, j, 100);
    }

    int front[] = {150, 100, 450, 100, 450, 300, 150, 300, 150, 100};
    drawpoly(5, front);

    // Windows
    rectangle(175, 150, 225, 250);
    rectangle(175+17, 150, 225-17, 250);
    rectangle(375, 150, 425, 250);
    rectangle(375+17, 150, 425-17, 250);

    // Door
    rectangle(250, 100, 350, 300);
    line(300, 100, 300, 300);
    setfillstyle(1, BLACK);
    fillellipse(300, 200, 7, 7);

    // Stair
    rectangle(150, 300, 450, 320);
    bar3d(250-20, 320+10, 350-20, 370+10, 20, 2);
    
    getch();
    closegraph();
    return 0;
}