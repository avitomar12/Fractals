#include <stdio.h>
#include <graphics.h>
#include<complex.h>
#include<math.h>
using namespace std;
int main()
{
    int gd = DETECT, gm = 0, len;
    initgraph(&gd,&gm,NULL);
    int itr=25,i=0;
    float cx,cy,ec=2;
    complex<float> z,c;
    ec=1.414;
    
    for(cx=-ec ; cx<=ec; cx+=0.02)
    {
        for(cy=-ec ; cy<=ec; cy+=0.02)
        {
            c=complex<float>(cx,cy);
            z=complex<float>(0,0);
            for(i=0;i<20;i++)
            {
                z=z*z*z+c;
                
                if((real(z)*real(z)+imag(z)*imag(z))>(ec*ec))
                break;
            }
            if(i==20)
            {
                putpixel(300+100*cx,300+100*cy,WHITE);
            }

        }
    }
            getch();
            closegraph();

}