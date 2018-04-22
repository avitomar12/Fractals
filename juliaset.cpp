#include <stdio.h>
#include <graphics.h>
#include<complex.h>
#include<math.h>
using namespace std;
int main()
{
    int gd = DETECT, gm = 0, len;
    initgraph(&gd,&gm,NULL);
    int n=3,i=0;
    complex<float> z,c,t,q;
    c=complex<float>(0.1,-0.1);
    float ec = pow(2,1/n-1),zx,zy,qx,qy;
    for(zx=-ec ; zx<=ec; zx+=0.0002)
    {
        for(zy=-ec ; zy<=ec; zy+=0.0002)
        {
            t=(zx,zy);
            for(i=0;i<20;i++)
            {
                q=pow(t,n)+c;
                qx= creal(q); qy=cimag(q);
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

   