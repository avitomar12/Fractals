#include <stdio.h>
#include <time.h>
#include <graphics.h>


void garket(int x1, int y1, int x2, int y2, int x3, int y3)
{	int x4,y4,x5,y5,x6,y6;

    setcolor(WHITE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    x4 = (x1+x2)/2 ;
    x5 = (x2+x3)/2 ;
    x6 = (x3+x1)/2 ;
    y4 = (y1+y2)/2 ;
    y5 = (y2+y3)/2 ;
    y6 = (y3+y1)/2 ;
    
  // delay(50);
	setcolor(YELLOW);

    line(x4,y4,x5,y5);
    line(x5,y5,x6,y6);
    line(x6,y6,x4,y4);

    if(x1 - x2 > 2)
	{	garket(x1,y1,x4,y4,x6,y6);
        garket(x4,y4,x2,y2,x5,y5);
        garket(x6,y6,x5,y5,x3,y3);
	
	}
	
}


int main()
{	int gd = DETECT,gm=0;

	int x1=300,x2=100,x3=500,y1=40,y2=400,y3=400;


	initgraph(&gd,&gm,NULL);

    garket(x1,y1,x2,y2,x3,y3);
	getch();

	closegraph();

	
}
