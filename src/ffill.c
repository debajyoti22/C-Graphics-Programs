#include<stdio.h>
#include<graphics.h>
void ffill(int x,int y,int nc,int oc){
    if(getpixel(x,y)==oc){
        putpixel(x,y,nc);
        ffill( x+1, y, nc, oc);
        ffill( x-1, y, nc, oc);
        ffill( x, y+1, nc, oc);
        ffill( x, y-1, nc, oc);
        ffill( x+1, y+1, nc, oc);
        ffill( x-1, y+1, nc, oc);
        ffill( x-1, y-1, nc, oc);
        ffill( x+1, y-1, nc, oc);

    }
}
int main(){
    	int gd = DETECT, gm;	
        int poly[] = {100,250,100,150,149,150,149,50,200,50,200,150,151,150,150,250,100,250};
	initgraph(&gd, &gm, "");
    
    setcolor(WHITE);
    drawpoly(9,poly);

    ffill(125,200,6,0);
    getch();
    closegraph();

}