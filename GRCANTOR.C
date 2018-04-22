#include<stdio.h>
#include<graphics.h>

void dr(int x, int y, int len) 
{
  if (len >= 1)
   {
     delay(200);
    line(x,y,x+len,y);
    
    y += 20;
    dr(x,y,len/3);
    setcolor(YELLOW);
    line(x+(len/3)+1,y,x+(len*2/3)-1,y);
    setcolor(WHITE);
    dr(x+len*2/3,y,len/3);
  }
}


int main()
{
int gd = DETECT, gm =0, x, y, len;

printf("Enter starting co-ordinates");
scanf("%d%d",&x,&y);
printf("Enter the length");
scanf("%d",&len);

initgraph(&gd,&gm,NULL);
putpixel(200,100,RED);
line(x,y,x+len,y);
dr(x,y,len);
getch();
closegraph();
return 0;
}