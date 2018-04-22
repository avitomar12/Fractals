#include <stdio.h>
#include <graphics.h>

void gasket(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int x4,x5,x6,y4,y5,y6;
    if((x1-x2)>1)
    {
        
        x4=(x1+x2)/2;
        x5=(x1+x3)/2;
        x6=(x3+x2)/2;

        y4=(y1+y2)/2;
        y5=(y1+y3)/2;
        y6=(y3+y2)/2;

        line(x4, y4, x5, y5);
        line(x4, y4, x6, y6);
        line(x5, y5, x6, y6);
        gasket(x1,y1,x4,y4,x5,y5);
        gasket(x4,y4,x2,y2,x6,y6);
        gasket(x5,y5,x6,y6,x3,y3);
    }
    
}

int main()
{
    int gd = DETECT, gm = 0, len;
    initgraph(&gd,&gm,NULL);

    line(300, 100, 200, 200);
    line(300, 100, 400, 200);
    line(200, 200, 400, 200);

    gasket(300,100,200,200,400,200);

    getch();
    closegraph();
}    