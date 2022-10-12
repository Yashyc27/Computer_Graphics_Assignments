#include<stdio.h>
#include<graphics.h>
// TRANSFORMATION
void main()
{
	int x1, y1, x2, y2, x3, x4, y3, y4, tx, ty;
	printf("ENTER LINE x1, y1, x2, y2 \n");
	scanf("%d%d%d%d", &x1,&y1,&x2,&y2); 
	printf("ENTER tx and ty \n");
	scanf("%d%d",&tx,&ty);
	int gd=DETECT, gm;
	initgraph(&gd,&gm,NULL);
	x3 = x1+tx;
	x4 = x2+tx;
	y3 = y1+ty;
	y4 = y2+ty;
	setcolor(15);
	line(x1, y1, x2, y2);
	setcolor(6);
	line(x3, x4, y3, y4);
	getch();
	closegraph();
}
