#include <stdio.h>
#include <graphics.h>
#include <math.h>

void tranformation (int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, float sx, float sy, float tx, float ty, float ang)
{
    int u1, v1, u2, v2, u3, v3 ,u4, v4;

    u1 = x1 + tx;
    v1 = y1 + ty;

    u2 = sx * (x2 - x1) + x1 + (x2 - x1) * cos(ang) + (y2 - y1) * sin(ang)  + tx;
    v2 = sy * (y2 - y1) + y1 - (x2 - x1) * sin(ang) + (y2 - y1) * cos(ang)  + ty;

    u3 = sx * (x3 - x1) + x1  + (x3 - x1) * cos(ang) + (y3 - y1) * sin(ang) + tx;
    v3 = sy * (y3 - y1) + y1   - (x3 - x1) * sin(ang) + (y3 - y1) * cos(ang) + ty;

    u4 = sx * (x4 - x1) + x1   + (x4 - x1) * cos(ang) + (y4 - y1) * sin(ang) + tx;
    v4 = sy * (y4 - y1) + y1   - (x4 - x1) * sin(ang) + (y4 - y1) * cos(ang) + ty;

    line(u1,v1,u2,v2);
    line(u2,v2,u3,v3);
    line(u3,v3,u4,v4);
    line(u4,v4,u1,v1);
}

void rotation(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, float ang)
{	
    int u1, v1, u2, v2, u3, v3 ,u4, v4;

    u1 = x1;
    v1 = y1;
   
    u2 = x1 + (x2 - x1) * cos(ang) + (y2 - y1) * sin(ang);
    v2 = y1 - (x2 - x1) * sin(ang) + (y2 - y1) * cos(ang);

    u3 = x1 + (x3 - x1) * cos(ang) + (y3 - y1) * sin(ang);
    v3 = y1 - (x3 - x1) * sin(ang) + (y3 - y1) * cos(ang);

    u4 = x1 + (x4 - x1) * cos(ang) + (y4 - y1) * sin(ang);
    v4 = y1 - (x4 - x1) * sin(ang) + (y4 - y1) * cos(ang);


    line(u1,v1,u2,v2);
    line(u2,v2,u3,v3);
    line(u3,v3,u4,v4);
    line(u4,v4,u1,v1);
}


int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);
    
    int a=45;
    float ang = a*(3.1428/180.0);
	
    int x1=100, x2=300, x3=300, x4=100;
    int y1=100, y2=100, y3=300, y4=300;

    float sx = 0, sy = 0;
    int tx = 100, ty = 100;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);;
    line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
    
    setcolor(RED);
    tranformation(x1, y1, x2, y2, x3, y3, x4, y4, sx, sy, tx, ty, ang);

    getch();
	closegraph();
}