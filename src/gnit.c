#include<stdio.h>
#include<math.h>
#include<graphics.h>

//used DDA algo
void drawline(int x1,int y1,int x2,int y2,int c){
    int steps;
    float xi,yi,dx,dy;
    dy = y2-y1;
    dx = x2-x1;
    if(abs(dy)>abs(dx))
    steps = abs(y1-y2);
    else
    steps = abs(x1-x2);
    xi = dx/steps;
    yi = dy/steps;

    for(int i=0;i<steps;i++){
        x1 = x1 + xi;
        y1 = y1 + yi;
        putpixel(x1,y1,c);
    }
}
int main(){    

    int gd = DETECT, gm;	
	initgraph(&gd, &gm, "");
    //G
    drawline(100,200,100,100,6);
    drawline(100,100,200,100,6);
    drawline(100,200,200,200,6);
    drawline(175,175,175,250,6);

    //N
    drawline(250,200,250,100,6);
    drawline(250,100,350,200,6);
    drawline(350,200,350,100,6);

    //I
    drawline(400,200,400,100,6);

    //T
    drawline(425,100,525,100,6);
    drawline(475,100,475,200,6);
   

    	getch();
	closegraph();

}