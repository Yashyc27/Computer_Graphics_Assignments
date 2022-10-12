#include<stdio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT, gm;
	int x, y, r, p;
	printf("ENTER THE RADIUS \n");
	scanf("%d",&r);
	initgraph(&gd, &gm, NULL);
	x=0;
	y=r;
	p=1-r;
	do
	{

		putpixel(200-x, 200+y, YELLOW);
		
		
		if(p<0)
		{
			p=p+(2*x)+1;
		}
		else
		{
			y=y-1;
			p=p+(2*x)-(2*y)+1;
		}
		x=x+1;
		delay(1000);
	}
	while(y>x);
	closegraph();
	getch();
}		
