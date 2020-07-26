#include <stdio.h>
#include <graphics.h>
#include <complex.h>
#include <math.h>

int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);

    complex Z,C,t,q;
    int n = 4, iter = 20, i;

    C = -1 + I* 0;

    float ec = pow(2,1.0/(n-1));
  
    float zx, zy, qx, qy, tx, ty;
 
    
    for (zx=-1 * ec ; zx <= ec; zx += 0.01)
    {   
        for (zy = -1 * ec; zy <= ec; zy += 0.01)
        {   tx =  zx ;
            ty = zy;
            t = tx + I*ty;
        
            for (i=0; i<iter ; i++)
            {   
                t = cpow(t,n) + C;

                tx = creal(t);
                ty = cimag(t);
                
                if((tx*tx + ty*ty) > ec*ec)
                    break;
            }    
 
            
           putpixel(200 + 100 * zx, 200 + 100* zy, i);          
                    
        }  
    }
    
    getch();
    closegraph();
}
