#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void BLA(int x1, int y1, int x2, int y2, int s = 1){
    int color = WHITE;
    int dx = x2-x1,
        dy = y2-y1,
        dt = 2 * (dy - dx),
	    ds = 2 * dy,
        d = 2 * dy - dx;
    
    if(x1==x2){
        int y = min(y1, y2);
        while(y<=max(y1, y2)){
            putpixel(x1, y, color);
            y++;
        }
        return;
    }else if(x1>x2 && y1==y2){
        BLA(x2, y2, x1, y1, s);
        return;
    }

    float slope = dy / (1.0*dx);
    cout<<"Slope: "<<slope<<" "<<dy<<" "<<dx<<endl;

    if(x1>x2 && y1>y2){
        BLA(x2, y2, x1, y1, s);
    }else if(slope>1){
        BLA(y1, x1, y2, x2, s);
    }else if(slope<0){
        BLA(x2, y1, x1, y2, -1);
    }else{
        int x = s<0 ? x2 : x1, y = y1;

        while(x1<=x2){
            putpixel(x, y, color);
            x1++;
            x += s;
            if(d<0){
                d += ds;
            }else{
                y++;
                d += dt;
            }
        }
    }
};

void draw(){
    BLA(100, 100, 100, 300);
    BLA(100, 300, 400, 300);
    BLA(400, 300, 400, 100);
    BLA(400, 100, 100, 100);
    BLA(100, 100, 400, 300);
    BLA(100, 300, 400, 100);

    fillellipse(100+(400-100)/2, 100+(300-100)/2, 40, 40);
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