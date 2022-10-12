#include <stdio.h>
#include <graphics.h>
void main( )
{
float x,y,xinc,yinc,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm;

printf("Enter the value of x1 and y1 : ");
scanf("%f%f",&x1,&y1);
printf("Enter the value of x2 and y2: ");
scanf("%f%f",&x2,&y2);

initgraph(&gd,&gm,NULL);

dx=abs(x2-x1);
dy=abs(y2-y1);
 
if(dx>=dy)
step=dx;
else
step=dy;
 
xinc=dx/step;
yinc=dy/step;
 
for(i=1;i<=step;i++)
{
putpixel(x,y,7);
x=x+xinc;
y=y+yinc;

delay(250);
}
 
closegraph();
}

