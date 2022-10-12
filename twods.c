#include<stdio.h>
#include<graphics.h>
//REFLECTOIN
void main()
{
	int x1, y1, x2, y2, x3, x4, y3, y4, ch;
	printf("REFLECTION ABOUT ---- \n");
	printf("1. About X axis \n");
	printf("2. About Y axis \n");
	printf("3. About origin \n");
	printf("Enter your choice \n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1: {
	printf("ENTER LINE x1, y1, x2, y2 \n");
	scanf("%d%d%d%d", &x1,&y1,&x2,&y2); 
	int gd=DETECT, gm;
	initgraph(&gd,&gm,NULL);
	x3 = x1;
	x4 = x2;
	y3 = -y1;
	y4 = -y2;
	setcolor(15);
	line(x1, y1, x2, y2);
	setcolor(6);
	line(150+x3, 150+y3, 150+x4, 150+y4);
	getch();
	closegraph();
	break;
        		}
        	case 2: {
        printf("ENTER LINE x1, y1, x2, y2 \n");
	scanf("%d%d%d%d", &x1,&y1,&x2,&y2); 
	int gd=DETECT, gm;
	initgraph(&gd,&gm,NULL);
	x3 = -x1;
	x4 = -x2;
	y3 = y1;
	y4 = y2;
	setcolor(15);
	line(x1, y1, x2, y2);
	setcolor(6);
	line(150+x3, 150+y3, 150+x4, 150+y4);
	getch();
	closegraph();
	break;
			}
		case 3: {
	printf("ENTER LINE x1, y1, x2, y2 \n");
	scanf("%d%d%d%d", &x1,&y1,&x2,&y2); 
	int gd=DETECT, gm;
	initgraph(&gd,&gm,NULL);
	x3 = -x1;
	x4 = -x2;
	y3 = -y1;
	y4 = -y2;
	setcolor(15);
	line(x1, y1, x2, y2);
	setcolor(6);
	line(150+x3, 150+y3, 150+x4, 150+y4);
	getch();
	closegraph();
	break;
	}
		default: printf("INVALID CHOICE BARABAR NUMBER DAALO!! \n");
	}
}
