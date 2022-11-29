#include<stdio.h>
#include<graphics.h>
int main(){
    int x1,y1,x2,y2;
    printf("Enter 1st coordinates : ");
    scanf("%d %d",&x1,&y1);
    printf("Enter 2nd coordinates : ");
    scanf("%d %d",&x2,&y2);

    int gd = DETECT, gm;	
	initgraph(&gd, &gm, "");

    int dx = x2-x1;
    int dy = y2-y1;
    int p0 = (2 * dy)-dx;
    int pk = p0;
    int xk = x1;
    int yk = y1;
    for(int i=0;i<=dx;i++){
        if(pk<0){
            xk = xk + 1;
            pk = pk + (2*dy);
        }
        else{
            xk = xk+1;
            yk = yk+1;
            pk = pk + (2*dy) -(2*dy);
        }
        putpixel(xk,yk,GREEN);
    }
    getch();
    closegraph();
}