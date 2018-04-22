#include <stdio.h>
#include <graphics.h>
#include <math.h>


void scaling(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, float sx, float sy)
{	
	int u1, v1, u2, v2, u3, v3 ,u4, v4;

    u1 = x1;
    v1 = y1;

    u2 = sx * (x1 - x2) + x2;
    v2 = sy * (y1 - y2) + y2;

    u3 = sx * (x1 - x3) + x3;
    v3 = sy * (y1 - y3) + y3;

    u4 = sx * (x1 - x4) + x4;
    v4 = sy * (y1 - y4) + y4;


    line(u1,v1,u2,v2);
    line(u2,v2,u3,v3);
    line(u3,v3,u4,v4);
	line(u4,v4,u1,v1);

}

void translation(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, float tx, float ty)
{	
	int u1, v1, u2, v2, u3, v3 ,u4, v4;

    u1 = x1 + tx;
    v1 = y1 + ty;

    u2 = x2 + tx;
    v2 = y2 + ty;

    u3 = x3 + tx;
    v3 = y3 + ty;

    u4 = x4 + tx;
    v4 = y4 + ty;


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
	
    int x1=200, x2=400, x3=400, x4=200;
    int y1=200, y2=200, y3=400, y4=400;

    float sx = 0.5, sy = 0.5;
    int tx = 50, ty = 50;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
    
    setcolor(RED);
    scaling(x1, y1, x2, y2, x3, y3, x4, y4, sx, sy);
    
    setcolor(BLUE);
    translation(x1, y1, x2, y2, x3, y3, x4, y4, tx, ty);
    
    setcolor(GREEN);
    rotation(x1, y1, x2, y2, x3, y3, x4, y4, ang);

    getch();
	closegraph();
}
