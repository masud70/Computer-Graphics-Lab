#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int x, y, r, h, k;
	float p;

	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;

	/* initialize graphics and local variables */
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

	printf("Using Mid-point Circle Algorithm");

	x = 0;
	r = 75;
	y = r;
	p = 1 - r;
	h = 400;
	k = 150;

	while (x <= y)
	{
		putpixel(x + h, y + k, 2);
		putpixel(y + h, x + k, 2);
		putpixel(-y + h, x + k, 3);
		putpixel(-x + h, y + k, 3);
		putpixel(-x + h, -y + k, 4);
		putpixel(-y + h, -x + k, 4);
		putpixel(y + h, -x + k, 5);
		putpixel(x + h, -y + k, 5);

		if (p < 0)
			p = p + 2 * x + 3;
		else
		{
			p = p + 2 * (x - y) + 5;
			y = y - 1;
		}
		x = x + 1;
	}
	getch();
	closegraph();
}
