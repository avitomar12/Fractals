#include <stdio.h>
#include <time.h>
#include <graphics.h>
#include <math.h>

void koch(int x1, int y1, int x2, int y2)
{	int x3, x4, x5, y3, y4, y5;
	int a=12.5;
	float ang = a*(3.1428/180.0);
	
	x3 = (x2 + 2*x1)/3.0 ;
	x4 = (2*x2 + x1)/3.0 ;

	y3 = (y2 + 2*y1)/3.0 ;
	y4 = (2*y2 + y1)/3.0 ;

	x5 = x3 + (x4-x3)*cos(ang) + (y4-y3)*sin(ang);
	y5 = y3 - (x4-x3)*sin(ang) + (y4-y3)*cos(ang);

	line(x3,y3,x4,y4);
	line(x3,y3,x5,y5);
	setcolor(GREEN);
//	rectangle(x5,y5,x4,y4);

	
	setcolor(BLACK);
//	line(x3,y3,x4,y4);
	
	if(abs(x2-x1) > 20 || abs(y2-y1) > 20)
	{	
	//	koch(x1, y1, x3, y3);
	//	koch(x4, y5, x4, y4);
	//	koch(x5, y5, x4, y5);
	//	koch(x4, y5, x4, y4);
	//	koch(x4, y4, x2, y2);
	}

}

int main()
{	int gd = DETECT,gm=0;

	int x1=150,x2=490,y1=250,y2=250;
	
	initgraph(&gd,&gm,NULL);
   	setcolor(GREEN);

 //   line(x1, y1, x2, y2);
	koch(x1, y1, x2, y2);
 
	getch();

	closegraph();

	
}
