#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    setfillstyle(1, WHITE);
    rectangle(40, 300, 610, 310);
    floodfill(41, 301, WHITE);
    rectangle(40, 440, 610, 450);
    floodfill(41, 445, WHITE);

    for(int i=0; i<8; i++){
        int dx = 80 * i;
        rectangle(40 + dx, 310, 50 + dx, 440);
        floodfill(41 + dx, 311, WHITE);

        if(i%2==0){
            rectangle(50 + dx, 350, 50 + 70 + dx, 360);
            floodfill(51 + dx, 351, WHITE);
        }
    }

    rectangle(110, 270, 120, 300);
    rectangle(530, 270, 540, 300);
    rectangle(110, 260, 540, 270);

    floodfill(111, 271, WHITE);
    floodfill(531, 271, WHITE);
    floodfill(111, 261, WHITE);

    for(int i=0; i<10; i++){
        line(130, 260+i, 325, 200+i);
        line(520, 260+i, 325, 200+i);
    }

    rectangle(320, 205, 330, 70);
    floodfill(321, 71, WHITE);

    rectangle(330, 70, 420, 80);
    rectangle(410, 80, 420, 120);
    rectangle(330, 120, 420, 130);

    floodfill(331, 71, WHITE);
    floodfill(411, 81, WHITE);
    floodfill(331, 121, WHITE);
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