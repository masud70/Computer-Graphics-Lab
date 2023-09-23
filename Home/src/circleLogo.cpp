#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void initialization(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*) "C:\\TC\\BGI");
    setcolor(BLACK);
    setfillstyle(1, WHITE);
    floodfill(1, 1, WHITE);
    setbkcolor(WHITE);
    outtextxy(getmaxx()/2-110, 10, (char*) "Md. Masud Mazumder (19701070)");
    line(0, 35, getmaxx(), 35);
}

int main(){
    // Initialization
    initialization();
    
    rectangle(getmaxx()/2-120, getmaxy()/2-5, getmaxx()/2+120, getmaxy()/2+5);
    setfillstyle(1, BLACK);
    floodfill(getmaxx()/2, getmaxy()/2, BLACK);
    for(int i=0; i<10; i++){
        arc(getmaxx()/2, getmaxy()/2+5, 0, 165, 120+i);
        arc(getmaxx()/2, getmaxy()/2-5, 180, 345, 120+i);
    }
    
    getch();
    closegraph();
    return 0;
}