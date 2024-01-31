//        ***********************
//        * DDA ALGORITHM *
//        ***********************

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int x1, y1, x2, y2;
	float m, x, y;
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;

	/* initialize graphics and local variables */
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	printf("Using DDA Algorithm");
	x1 = 200;
	x2 = 350;
	y1 = 250;
	y2 = 450;

	m = (y2 - y1) / (x2 - x1);

	if (m <= 1)
	{
		x = x1;
		while (x <= x2)
		{
			putpixel(x, y, 3);
			x = x + 1;
			y = y + m;
		}
	}
	if (m > 1)
	{
		y = y1;
		while (y <= y2)
		{
			putpixel(x, y, 3);
			x = x + (1 / m);
			y = y + 1;
		}
	}

	getch();
	closegraph();
	return 0;
}
