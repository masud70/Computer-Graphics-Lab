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
    
    struct arccoordstype a;
    char arr[100];
    arc(250,200,0,90,100);
    getarccoords(&a);

    sprintf(arr,"(%d, %d)",a.xstart,a.ystart);
    outtextxy(360,195,arr);

    sprintf(arr,"(%d, %d)",a.xend,a.yend);
    outtextxy(245,85,arr);
    
    getch();
    closegraph();
    return 0;
}