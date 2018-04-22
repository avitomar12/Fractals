#include<graphics.h>
#include<stdio.h>
void koch(int x1,int y1,int x2,int y2)
{
    line(x1,y1,x2,y2);
    
}
int main()
{
    int gd = DETECT, gm = 0, len;
    initgraph(&gd,&gm,NULL);

    line(300, 100, 200, 200);
    getch();
    closegraph();
}
