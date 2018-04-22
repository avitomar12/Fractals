#include <stdio.h>
#include <time.h>
#include <graphics.h>


void carpet(int x1, int y1, int x2, int y2)
{	int x3,y3,x4,y4;
   
    x4 = ((x1 / 3) + (2 * (x2  / 3)));
	x3 = (((2 * x1) / 3) + (x2 / 3));
    
    y4 = ((y1 / 3) + (2 * (y2  / 3)));
	y3 = (((2 * y1) / 3) + (y2 / 3));

    line(x3,y1,x3,y2);
    line(x1,y3,x2,y3);
    line(x4,y1,x4,y2);
    line(x1,y4,x2,y4);
   
  if(x2-x1 >10)
	{	carpet(x1,y1,x3,y3);
        carpet(x3,y1,x4,y3);
        carpet(x4,y1,x2,y3);
        carpet(x4,y3,x2,y4);
        carpet(x4,y4,x2,y2);
        carpet(x3,y4,x4,y2);
        carpet(x1,y4,x3,y2);
        carpet(x1,y3,x3,y4);
       
	}
	
}

int main()
{	int gd = DETECT,gm=0;

	int x1=100,y1=40,x2=520, y2=460;


	initgraph(&gd,&gm,NULL);

    setcolor(1);
    carpet(x1,y1,x1+140,y1+140);
    
    setcolor(2);
    carpet(x1+140,y1,x1+280,y1+140);
    
    setcolor(3);
    carpet(x1+280,y1,x1+420,y1+140);
    
    setcolor(4);
    carpet(x1,y1+140,x1+140,y1+280);
    
    setcolor(5);
    carpet(x1,y1+280,x1+140,y1+420);
    
    setcolor(6);
    carpet(x1+140,y1+280,x1+280,y1+420);
    
    setcolor(7);
    carpet(x1+280,y1+280,x2,y2);
    
    setcolor(8);
    carpet(x1+280,y1+140,x1+420,y1+280);
    	
    getch();
	closegraph();

	
}
