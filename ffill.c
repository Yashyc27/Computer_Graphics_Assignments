#include<stdio.h>
#include<graphics.h>

void ffill(int x, int y, int newcolor)
{
	if(getpixel(x,y) != newcolor)
	{
		putpixel(x, y, newcolor);
		ffill(x-1,y,newcolor);
		ffill(x+1,y,newcolor);
		ffill(x,y-1,newcolor);
		ffill(x,y+1,newcolor);
		ffill(x+1,y+1,newcolor);
		ffill(x-1,y+1,newcolor);
		ffill(x-1,y-1,newcolor);
		ffill(x+1,y-1,newcolor);	
	}
}

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, NULL);
	rectangle(50,50,100,100);
	ffill(100,100,4);
	closegraph();
	delay(500);
}
