#include <stdio.h>
#include <graphics.h>

int li(int x1, int y1, int x2, int y2)
{
    for(int i=x1; i<=x2; i=i+1)
    {   
        //for(int j=y1; j<= y2; j=j+1)
        
        {    putpixel(i,y1,GREEN);
        }
    }    
}

int main()
{	int gd = DETECT,gm=0;
    initgraph(&gd,&gm,NULL);
    
    //line(150, 150, 250, 250);
    li(150,150,250,250);    
       
    getch();
	closegraph();

	
}
