#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    outtextxy(getmaxx()/2-110, 10, "Md. Masud Mazumder (19701070)");
    line(0, 30, getmaxx(), 30);

    /* Initialize center of circle with center of screen */
    int x = getmaxx()/2;
    int y = getmaxy()/2;
    int radius = 100;

    circle(x, y, radius);

    getch();
    closegraph();
    return 0;
}