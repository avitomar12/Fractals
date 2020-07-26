#include <stdio.h>
#include <graphics.h>
#include<complex.h>
#include<math.h>

int main()
{
    int gd = DETECT, gm = 0, len;
    initgraph(&gd,&gm,NULL);
    int n=3,i=0;
    complex<float> z,c,t,q;
    c=complex(0.1,-0.1);
    float ec = pow(2,1/n-1),zx,zy,qx,qy;
    for(zx=-ec ; zx<=ec; zx+=0.02)
    {
        for(zy=-ec ; zy<=ec; zy+=0.02)
        {
            t=complex(zx,zy);
            for(i=0;i<20;i++)
            {
                q=pow(t,n)+c;
                qx= real(q); qy=imag(q);
                if((qx*qx + qy*qy)>(ec*ec))
                break;
            }
            if(i==20)
            {
                putpixel(100+30*zx,100+30*zy,RED);
            }

        }
    }





   
            getch();
} 

   