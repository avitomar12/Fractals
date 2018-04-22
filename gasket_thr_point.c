#include <stdio.h>
#include <time.h>
#include <graphics.h>


void garket(int x1, int y1, int x2, int y2, int x3, int y3, int new_pt_x, int new_pt_y)
{	int mid_x, mid_y;
   delay(5);
    int rand_no = (rand() % 3) + 1;
     
    switch(rand_no)
    {
        case 1: mid_x = (x1 + new_pt_x )/2.0;
                mid_y = (y1 + new_pt_y )/2.0;
                break;

        
        case 2: mid_x = (x2 + new_pt_x )/2.0;
                mid_y = (y2 + new_pt_y )/2.0;
                //line(x2,y2, mid_x, mid_y);
                break;


        case 3 : mid_x = (x3 + new_pt_x )/2.0;
                mid_y = (y3 + new_pt_y )/2.0;
                //line(x3,y3, mid_x, mid_y);
                break;
    }
    
    putpixel(mid_x,mid_y, WHITE);
    //line(mid_x,mid_y,new_pt_x,new_pt_y);
    
    garket(x1,y1,x2,y2,x3,y3, mid_x, mid_y);

}

    
int main()
{	int gd = DETECT,gm=0;

	int x1=300,x2=100,x3=500,y1=40,y2=400,y3=400;
    
    int new_pt_x = 0;
    int new_pt_y = 0;

	initgraph(&gd,&gm,NULL);

    srand(time(NULL));
    
    garket(x1,y1,x2,y2,x3,y3, new_pt_x, new_pt_y);
	getch();

	closegraph();

	
}
