#include<stdio.h>
#include<graphics.h>
// SCALING
void main()
{
	int x1, y1, x2, y2, x3, x4, y3, y4, sx, sy;
	printf("ENTER LINE x1, y1, x2, y2 \n");
	scanf("%d%d%d%d", &x1,&y1,&x2,&y2); 
	printf("ENTER sx and sy \n");
	scanf("%d%d",&sx,&sy);
	int gd=DETECT, gm;
	initgraph(&gd,&gm,NULL);
	x3 = x1*sx;
	x4 = x2*sx;
	y3 = y1*sy;
	y4 = y2*sy;
	setcolor(15);
	line(x1, y1, x2, y2);
	setcolor(6);
	line(x3, x4, y3, y4);
	getch();
	closegraph();
}
