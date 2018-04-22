#include <stdio.h>
#include <graphics.h>
#include <complex.h>

int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);
    int n=5;
    float ec = pow(2,1.0/(n-1));
    
    complex C,Z;       
    int iter = 20,i;
    float cx , cy;
    

    for (cx= -1*ec ; cx <= ec; ec += 0.01)
    {   
        for (cy = -1*ec; cy <= ec; cy += 0.01)
        {   C = cx + I*cy;
            Z = 0 + I*0;
            for (i=0; i<iter ; i++)
            {   
                Z = cpow(Z,n) + C;
                        
                if((creal(Z)*creal(Z) + cimag(Z)*cimag(Z)) > ec*ec)
                    break;
                
            }

                putpixel(200 + 100 *cx, 200 + 100 * cy, i);
                    
        }  
    }

    
    getch();
    closegraph();
}