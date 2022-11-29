#include<stdio.h>
#include<math.h>
#include<graphics.h>
void drawline(int x1,int x2,int y1,int y2,int c){
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
    int x1,y1,x2,y2;
    printf("Enter 1st coordinates : ");
    scanf("%d %d",&x1,&y1);
    printf("Enter 2nd coordinates : ");
    scanf("%d %d",&x2,&y2);

    int gd = DETECT, gm;	
	initgraph(&gd, &gm, "");

    drawline(x1,x2,y1,y2,6);

    	getch();
	closegraph();

}