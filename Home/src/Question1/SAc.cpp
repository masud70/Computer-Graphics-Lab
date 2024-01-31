#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void bresenham(int x1, int y1, int x2, int y2){
    int x=x1,
        y=y1,
        dx=x2-x1,
        dy=y2-y1,
        dt=2*(dy-dx),
        ds=2*dy,
        d=2*dy-dx;

    putpixel(x,y,7);

    while(x<=x2){
        x=x+1;
        if(d<0) d=d+ds;
        else{
            y=y+1;
            d=d+dt;
        }
        putpixel(x,y,7);
    }
}

void draw(){

    bresenham(100, 200, 300, 400);
    
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