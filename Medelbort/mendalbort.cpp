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
    
    
    for(cx=-ec ; cx<=ec; cx+=0.002)
    {
        for(cy=-ec ; cy<=ec; cy+=0.002)
        {
            c=complex<float>(cx,cy);
            z=complex<float>(0,0);
            for(i=0;i<20;i++)
            {
                z=z*z+c;
                
                if((real(z)*real(z)+imag(z)*imag(z))>(ec*ec))
                break;
            }
            if(i==20)
            {
                putpixel(300+150*cx,300+150*cy,WHITE);
            }

        }
    }
            getch();
            closegraph();

}