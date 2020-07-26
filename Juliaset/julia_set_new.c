#include <stdio.h>
#include <graphics.h>

int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);
    int ec = 4;
        
    int iter = 20,i;
    float zx, zy, cx= -1 , cy = 0 , qx, qy,tx, ty;
    

    for (zx=-2 ; zx <= 2; zx += 0.01)
    {   
        for (zy = -2; zy <= 2; zy += 0.01)
        {   tx = zx; ty=zy;
            
            for (i=0; i<iter ; i++)
            {
                qx = tx*tx - ty*ty + cx;
                qy = 2*tx*ty + cy;
                tx=qx;ty=qy;
            
                if((qx*qx + qy*qy) > ec)
                    break;
                
            }
            
            if(i>19) 
                putpixel(200 + 100 *zx, 200 + 100 * zy, i);
            else    
                putpixel(200 + 100 * zx, 200 + 100* zy, i);            
                    
        }  
    }

    
    getch();
    closegraph();
}