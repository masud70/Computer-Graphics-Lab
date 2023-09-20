#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void initialization(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*) "C:\\TC\\BGI");
    outtextxy(getmaxx()/2-110, 10, (char*) "Md. Masud Mazumder (19701070)");
    line(0, 35, getmaxx(), 35);
}

int main(){
    // Initialization
    initialization();
    
    // Triangle
    int points[] = {getmaxx()/2, 50, getmaxx()/2+100, 200, getmaxx()/2-100, 200, getmaxx()/2, 50};
    drawpoly(sizeof(points)/sizeof(int)/2, points);
    
    getch();
    closegraph();
    return 0;
}