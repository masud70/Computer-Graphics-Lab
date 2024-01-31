//        *************************************
//        * DIRECT USE OF LINE EQUATION*
//        *************************************

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{

	int x1, y1, x2, y2;
	float m, c, x, y;
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;

	/* initialize graphics and local variables */
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

	x1 = 200;
	x2 = 350;
	y1 = 250;
	y2 = 450;

	m = (y2 - y1) / (x2 - x1);
	c = y1 - m * x1;
	printf("Direct Use of the Line Equation ");

	if (m <= 1)
	{
		x = x1;
		while (x <= x2)
		{
			y = m * x + c;
			putpixel(x, y, 3);
			x = x + 1;
		}
	}

	if (m > 1)
	{
		y = y1;
		while (y <= y2)
		{
			y = y + 1;
			x = (y - c) / m;
			putpixel(x, y, 3);
		}
	}
	getch();
	closegraph();
	return 0;
}
