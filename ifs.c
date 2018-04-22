#include <stdio.h>
#include <graphics.h>
#include <complex.h>
#include <math.h>
#include <string.h>

int ifs(int x1, int y1, int x2, int y2, float z[3][6], int i)
{   
    int p, q, r, s, u, v, w, x;

    p = z[i][0]*x1 + z[i][1]*y1 + z[i][4];
    q = z[i][2]*x1 + z[i][3]*y1 + z[i][5];

    r = z[i][0]*x2 + z[i][1]*y1 + z[i][4];
    s = z[i][2]*x2 + z[i][3]*y1 + z[i][5];

    u = z[i][0]*x2 + z[i][1]*y2 + z[i][4];
    v = z[i][2]*x2 + z[i][3]*y2 + z[i][5];

    w = z[i][0]*x1 + z[i][1]*y2 + z[i][4];
    x = z[i][2]*x1 + z[i][3]*y2 + z[i][5];

    line(p, q, r, s);
    line(r, s, u, v);
    line(u, v, w, x);
    line(w, x, p, q);
/*
   if(((x2-x1)> 2) && ((y2-y1)>2))
    {
        ifs(p, q, u, v, z, 0);
        ifs(p, q, u, v, z, 1);
        ifs(p, q, u, v, z, 3);

    }
*/

}

int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);
    
    float t[3][6] = {{0.5, 0, 0, 0.5, 0, 0}, {0.5, 0, 0, 0.5, 0.5, 0}, {0.5, 0, 0, 0.5, 0.25, 0.5}};
   
    int x1=100, y1=20, x2=540, y2=460;
    setcolor(GREEN);
    rectangle(x1, y1, x2, y2);

 //   ifs(x1, y1, x2, y2, t, 0);
   // ifs(x1, y1, x2, y2, t, 1);
   ifs(x1, y1, x2, y2, t, 2);
        
    getch();
    closegraph();
}