#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw(){
    int x=0,
        r=75,
        y=r,
        h=getmaxx()/2,
        k=getmaxy()/2;
    float p=1-r;

    while(x<=y){
        putpixel(x+h,y+k,2);
        putpixel(y+h,x+k,2);
        putpixel(-y+h,x+k,3);
        putpixel(-x+h,y+k,3);
        putpixel(-x+h,-y+k,4);
        putpixel(-y+h,-x+k,4);
        putpixel(y+h,-x+k,5);
        putpixel(x+h,-y+k,5);

        if(p<0) p=p+2*x+3;
        else{
            p=p+2*(x-y)+5;
            y=y-1;
        }
        x=x+1;
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