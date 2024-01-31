#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    int area, temp1, temp2, left = 25, top = 75;
    void *p;
        
    setcolor(YELLOW);
    circle(50,100,25);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(50,100,YELLOW);
    
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(44,85,2,6);
    fillellipse(56,85,2,6);
    
    ellipse(50,100,205,335,20,9);
    ellipse(50,100,205,335,20,10);
    ellipse(50,100,205,335,20,11);
    
    area = imagesize(left, top, left + 50, top + 50);
    p = malloc(area);
    
    while(!kbhit())
    {
        temp1 = 50 + rand() % 550;
        temp2 = 50 + rand() % 350;
    
        getimage(left, top, left + 50, top + 50, p);
        putimage(left, top, p, XOR_PUT);
        putimage(temp1 , temp2, p, XOR_PUT);
        delay(1000);
        left = temp1;
        top = temp2;
    }
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