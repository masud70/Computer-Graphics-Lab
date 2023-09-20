#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void initialization(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*) "C:\\TC\\BGI");
    outtextxy(getmaxx()/2-110, 10, (char*) "Md. Masud Mazumder (19701070)");
    line(0, 30, getmaxx(), 30);
}

int main(){
    // Initialization
    initialization();
    
    int x = getmaxx()/2, 
        y = getmaxy()/2, 
        r = 100, start = 20, 
        end = 170;

    arc(x, y, start, end, r);
    
    getch();
    closegraph();
    return 0;
}