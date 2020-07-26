#include <stdio.h>
#include <time.h>
#include <graphics.h>
#include <math.h>

void koch(int x1, int y1, int x2, int y2)
{	int x3, x4, x5, y3, y4, y5;
	int a=60;
	float ang = a*(3.1428/180.0);
	
	x3 = (2*x2 + 3*x1)/5.0 ;
	x4 = (3*x2 + 2*x1)/5.0 ;

	y3 = (2*y2 + 3*y1)/5.0;
	y4 = (3*y2 + 2*y1)/5.0;

	x5 = x3 + (x4-x3)*cos(ang) + (y4-y3)*sin(ang);
	y5 = y3 - (x4-x3)*sin(ang) + (y4-y3)*cos(ang);
	
	
	setcolor(BLACK);
	line(x3+1,y3,x4,y4);
	line(x3, y3, x4, y4);
	
	setcolor(GREEN);
	line(x3, y3, x5, y5);
	line(x4, y4, x5, y5);

	if(abs(x2-x1) > 50 || abs(y2-y1) > 50)
	{	
		koch(x1, y1, x3, y3);
		koch(x3, y3, x5, y5);
		koch(x5, y5, x4, y4);
		koch(x4, y4, x2, y2);
	}

}

int main()
{	int gd = DETECT,gm=0;



	int x1=150,x2=490,y1=150,y2=150;
	int z1,z2;

	int a=-60;
	float ang = a*(3.1428/180.0);
	z1 = x1 + (x2-x1)*cos(ang)+(y2-y1)*sin(ang);
	z2 = y1 - (x2-x1)*sin(ang)+(y2-y1)*cos(ang);
	
	initgraph(&gd,&gm,NULL);
	
	setcolor(GREEN);

    line(x1, y1, x2, y2);
	koch(x1, y1, x2, y2);
 
    line(x1, y1, z1, z2);
	koch(z1, z2, x1, y1);
 
	line(x2, y2, z1, z2);
	koch(x2, y2, z1, z2);

	getch();

	closegraph();

	
}
