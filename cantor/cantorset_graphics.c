#include <stdio.h>
#include <time.h>
#include <graphics.h>


void cantorfun(int x1, int x2, int y)
{	int x3, x4;

	

	x3 = ((x2 / 3) + (2 * (x1 / 3)));
	x4 = (((2 * x2) / 3) + (x1 / 3));

	setcolor(BLACK);

	line(x1,y,x2,y);
	delay(100);
	setcolor(WHITE);
	line(x3+1, y ,x4-1 ,y);
	delay(100);
	y = y+20;
	
	if(x3+1 < x4)
	{	
		cantorfun(x1, x3, y);
		cantorfun(x4, x2, y);
	}
	
}


int main()
{	int gd = DETECT,gm=0;


	int x1=40,x2=600,y=100;


	initgraph(&gd,&gm,NULL);



	cantorfun(x1,x2,y);
	getch();

	closegraph();

	
}
