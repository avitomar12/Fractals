#include <stdio.h>
#include <time.h>
#include <graphics.h>
#include <math.h>

void koch(int x1, int y1, int x2, int y2)
{	int x3, x4, x5, x6, x7, y3, y4, y5, y6, y7;
	
    int a1=90;
	float ang1 = a1*(3.1428/180.0);

    int a2=-90;
	float ang2 = a2*(3.1428/180.0);
    
    
	x3 = (x2 + 3*x1)/4.0 ;
	x4 = (2*x2 + 2*x1)/4.0 ;
    x5 = (3*x2 + x1)/4.0 ;

	y3 = (y2 + 3*y1)/4.0;
	y4 = (2*y2 + 2*y1)/4.0;
    y5 = (3*y2 + y1)/4.0;

   	x6 = x3 + (x4-x3)*cos(ang1) + (y4-y3)*sin(ang1);
	y6 = y3 - (x4-x3)*sin(ang1) + (y4-y3)*cos(ang1);

    x7 = x4 + (x5-x4)*cos(ang2) + (y5-y4)*sin(ang2);
	y7 = y4 - (x5-x4)*sin(ang2) + (y5-y4)*cos(ang2);
	
	setcolor(GREEN);
	
	rectangle(x3, y6, x4, y4);
	rectangle(x4, y4, x5, y7);
	
	
	setcolor(BLACK);
	line(x3,y3,x5,y5);
	
	putpixel(x4,y4,GREEN);

	if(abs(x2-x1) > 10 || abs(y2-y1) > 10)
	{	
		//koch(x1, y1, x3, y3);
		//koch(x3, y3, x3, y6);
	//	koch(x3, y6, x4, y6);
		//koch(x4, y4, x2, y2);
	}

}

int main()
{	int gd = DETECT,gm=0;

	int x1=150,x2=450,y1=150,y2=150;
	int z1,z2;

	int a=-90;
	float ang = a*(3.1428/180.0);
	z1 = x1 + (x2-x1)*cos(ang)+(y2-y1)*sin(ang);
	z2 = y1 - (x2-x1)*sin(ang)+(y2-y1)*cos(ang);
	
	initgraph(&gd,&gm,NULL);
   
    setcolor(GREEN);

  	line(x1, y1, x2, y2);
	koch(x1, y1, x2, y2);
 
   //line(x1, y1, x1, z2);
	//koch(x1, z2, x1, y1);
 
	//line(z1, z2, x2, z2);
	//koch(z1, z2, x2, z2);

	//line(x2, y2, x2, z2);
	//koch(x2, y2, x2, z2);

	getch();

	closegraph();

	
}
