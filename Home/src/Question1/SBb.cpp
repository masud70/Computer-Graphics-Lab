#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void drawImage(int x, int y, int r){
    setcolor(YELLOW);
    circle(x, y, r);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(x,y,YELLOW);
}

void draw(){
    int radius = 30, centerX = getmaxx()/2, centerY = getmaxy()/2;
    
    int left = centerX - radius, 
        right = centerX + radius,
        top = centerY - radius,  
        bottom = centerY + radius, 
        newLeft, 
        newTop, 
        area;
    char ch;
    void *image;
    drawImage(centerX, centerY, radius);

    while(cin>>ch){
        left = centerX - radius, 
        right = centerX + radius,
        top = centerY - radius,  
        bottom = centerY + radius;

        area = imagesize(left, top, right, bottom);
        image = malloc(area);
        getimage(left, top, right, bottom, image);
        putimage(left, top, image, XOR_PUT);
        free(image);

        switch (ch)
        {
        case 'i':
            radius++;
            break;
        case 'd':
            radius--;
            break;
        case '8':
            centerY--;
            break;
        case '2':
            centerY++;
            break;
        case '6':
            centerX++;
            break;
        case '4':
            centerX--;
            break;
        }

        if(radius>100) radius--;
        else if(radius<2) radius++;

        if(centerY-radius<40) centerY++;

        drawImage(centerX, centerY, radius);
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