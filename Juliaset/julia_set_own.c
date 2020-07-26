#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <complex.h>

int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);
    int ec = 4;
        
    int iter = 20,i;
    complex Z,C,Q;
      
    C =(0,0);
    for (Z=-2 ; creal(Z) <= 2; Z += 0.05)
    {   
        for (Z=Z + (0 - 2*I); cimag(Z) <= 2.05; Z = Z + 0.05*I)
        {   
            for (i=0; i<20 ; i++)
            {
                Q = ((creal(Z)*creal(Z) - cimag(Z)*cimag(Z) + creal(C)), 2*creal(Z)*cimag(Z) + cimag(C));
                
                if((creal(Q)*creal(Q) + cimag(Q)*cimag(Q)) > ec)
                {
                    break;
                }
                if(i==20) 
                {
                    putpixel(100 + 150 * creal(Z), 100 + 150 * cimag(Z), WHITE);
                }               
            }        
        }  
        Z = Z - 2.05*I;
              
    }

    
    getch();
	closegraph();
}