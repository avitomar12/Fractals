#include <stdio.h>
#include <graphics.h>

void gasket(int x1,int y1,int x2,int y2, float z[])
{
    int p,q,r,s,u,v,w,x;
    p=z[i][0]*x1 + z[i][1]*y1+z[i][4];
    q=z[i][1]*x1 + z[0][3]*y1+z[i][5];
    r=z[i][0]*x2 + z[i][1]*y1+z[i][4];
    s=z[i][1]*x2 + z[0][3]*y1+z[i][5];
    u=z[i][0]*x2 + z[i][1]*y2+z[i][4];
    v=z[i][1]*x2 + z[0][3]*y2+z[i][5];
    w=z[i][0]*x1 + z[i][1]*y2+z[i][4];
    x=z[i][1]*x1 + z[0][3]*y2+z[i][5];

        
       
        line(p,q,r,s);
        line(r,s,u,v);
        line(u,v,w,x);
        line(w,x,p,q);
        
    

    
}

int main()
{
    int gd = DETECT, gm = 0, len;
    initgraph(&gd,&gm,NULL);

   

    getch();
    closegraph();
}    