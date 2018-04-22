#include <graphics.h>
#include <time.h>
#include <stdio.h>

void drawCircle(int x, int y, float radius) 
{ delay(1000);
  
  ellipse(x, y,0,360, radius, radius);
 	
//	setcolor(BLACK);
	//ellipse(x,y,radius-150.0,radius-50.0); 

 if(radius >  1) 
  {
    radius *= 0.75f;
    drawCircle(x, y, radius);
  }
}
void main()
{	int gd=DETECT,gm=0;
	initgraph(&gd,&gm,NULL);

	drawCircle(320,240,200.0);

	getch();
	closegraph();
}

