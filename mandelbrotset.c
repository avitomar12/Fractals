#include <stdio.h>
#include <graphics.h>
#include <complex.h>

int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);
    int ec = 4;
    
    complex C,Z;       
    int iter = 20,i;
    float cx , cy;
    

    for (cx=-2 ; cx <= 2; cx += 0.01)
    {   
        for (cy = -2; cy <= 2; cy += 0.01)
        {   C = cx + I*cy;
            Z = 0 + I*0;
            for (i=0; i<iter ; i++)
            {
                Z = Z*Z + C;
            
                if((creal(Z)*creal(Z) + cimag(Z)*cimag(Z)) > ec*ec)
                    break;
                
            }

                putpixel(200 + 100 *cx, 200 + 100 * cy, i);
                    
        }  
    }

    
    getch();
    closegraph();
}