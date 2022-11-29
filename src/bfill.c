
#include <graphics.h>

void boundaryFill4(int x, int y, int bcolor,int fcolor)
{
	if(getpixel(x, y) != bcolor &&	getpixel(x, y) != fcolor)
	{
		putpixel(x, y, fcolor);
		boundaryFill4(x + 1, y, bcolor,fcolor);
		boundaryFill4(x, y + 1, bcolor,fcolor);
		boundaryFill4(x - 1, y, bcolor,fcolor);
		boundaryFill4(x, y - 1, bcolor,fcolor);
        boundaryFill4(x + 1, y+1, bcolor,fcolor);
		boundaryFill4(x+1, y - 1, bcolor,fcolor);
		boundaryFill4(x - 1, y+1, bcolor,fcolor);
		boundaryFill4(x-1, y - 1, bcolor,fcolor);
	}
}

//driver code
int main()
{
	
	int gd = DETECT, gm;	
	initgraph(&gd, &gm, "");

	int poly[] = {100,250,100,150,149,150,149,50,200,50,200,150,151,150,150,250,100,250};

	// circle function
	drawpoly(9,poly);


	boundaryFill4(125, 200, 15, 6);

	delay(10000);
	getch();
	closegraph();

	return 0;
}
/*

#include <graphics.h>

void boundaryFill4(int x, int y, int bcolor,int fcolor)
{
	if(getpixel(x, y) != bcolor &&	getpixel(x, y) != fcolor)
	{
		putpixel(x, y, fcolor);
		boundaryFill4(x + 1, y, bcolor,fcolor);
		boundaryFill4(x, y + 1, bcolor,fcolor);
		boundaryFill4(x - 1, y, bcolor,fcolor);
		boundaryFill4(x, y - 1, bcolor,fcolor);
        
	}
}

//driver code
int main()
{
	
	int gd = DETECT, gm;	
	initgraph(&gd, &gm, "");

	int poly[] = {100,250,100,150,149,150,150,50,200,50,200,150,150,150,150,250,100,250};

	// circle function
	drawpoly(9,poly);

    boundaryFill4(175, 100, 15, 4);
	boundaryFill4(125, 200, 15, 6);

	delay(10000);
	getch();
	closegraph();

	return 0;
}



*/