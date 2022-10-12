#include<stdio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT, gm;
	int x1, x2, y1, y2;
	int dx, dy, p, i;
	printf("Enter values of x1 and y1 \n");
	scanf("%d%d",&x1,&y1);
	printf("Enter values of x2 and y2 \n");
	scanf("%d%d",&x2,&y2);
	initgraph(&gd, &gm, NULL);
	dx= x2-x1;
	dy= y2-y1;
	p = 2*dy-dx;
	for(i=1;1<=dx;i++)
	{
		if(p<0)
		{
			putpixel(x1,y1,7);
			p=p+2*dy;
		}
		else
		{
			putpixel(x1,y1,7);
			y1=y1+1;
			p=p+2*dy-2*dx;
		}
		x1 = x1+1;
		delay(1000);
	}
	getch();
	closegraph();
}
		
			
