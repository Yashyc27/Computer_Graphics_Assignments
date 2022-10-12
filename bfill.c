#include<stdio.h>
#include<graphics.h>

void boundary_fill(int x, int y, int f_colour, int b_colour)
{
if(getpixel(x,y) != b_colour && getpixel(x,y) != f_colour)
{	

putpixel(x,y,f_colour);
delay(100)
boundary_fill(x+1, y, f_colour, b_colour);
boundary_fill(x-1, y, f_colour, b_colour);
boundary_fill(x, y+1, f_colour, b_colour);
boundary_fill(x,y-1,f_colour,b_colour);
boundary_fill(x+1, y+1, f_colour, b_colour);
boundary_fill(x-1, y-1, f_colour, b_colour);
boundary_fill(x-1, y+1, f_colour, b_colour);
boundary_fill(x+1,y-1,f_colour,b_colour);

}
}
void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, NULL);
	rectangle(100,100,25);
	boundary_fill(100,100,3,5);
	getch();
	closegraph();
}
