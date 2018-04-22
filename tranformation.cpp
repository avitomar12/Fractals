#include<stdio.h>
#include<graphics.h>


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
getch();
closegraph();
return 0;
}