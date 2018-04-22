
#include <stdio.h>
#include <graphics.h> 

void drawCircle(float x, float y, float radius,int i) {
  
  if(i%2==0)
  {
    setcolor(RED);
  ellipse(x,y,0,360,radius/2, radius/2);  
  }
  else{
    setcolor(GREEN);
  ellipse(x,y,0,360,radius/2, radius/2);
  }
  if(radius >2) {

  
    drawCircle(x+radius/2, y, radius/2,i++);
    //drawCircle(x-radius/2, y, radius/2,i--);
    //drawCircle(x, y+radius/2,radius/2,i++);
    drawCircle(x,y-radius/2, radius/2,i--);
 

  }
}





int main()
{
    int gd = DETECT, gm = 0, len;
    initgraph(&gd,&gm,NULL);

    
    drawCircle(300,250,200,0);

    getch();
    closegraph();
}    
