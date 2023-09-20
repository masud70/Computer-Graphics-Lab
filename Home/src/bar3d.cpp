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
    
    int l = getmaxx()/2 - 100,
        t = getmaxy()/2 - 100,
        r = getmaxx()/2 + 100,
        b = getmaxy()/2 + 50,
        d = 50,
        tf = 1;

    bar3d(l, t, r, b, d, tf);
    
    getch();
    closegraph();
    return 0;
}