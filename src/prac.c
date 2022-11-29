#include<stdio.h>
#include<graphics.h>
int main(){
    int gd = DETECT, gm;
    int a[] = {100,250,180,180,260,250,100,250};
    int b[] = {140,180,180,140,220,180,140,180};
    int c[] = {160,140,180,120,200,140,160,140};
    initgraph(&gd, &gm, "");

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);    
    drawpoly(4,a);
    drawpoly(4,b);
    drawpoly(4,c);
    floodfill(180,240,GREEN);
    floodfill(180,160,GREEN);
    floodfill(180,130,GREEN);

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);  
    rectangle(160,250,200,300);
    floodfill(180,270,RED);
  

    printf("Successfully Executed : ");
    getch();
    closegraph();
}