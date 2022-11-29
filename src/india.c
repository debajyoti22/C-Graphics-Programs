#include<stdio.h>
#include<graphics.h>
int main(){
    int gd = DETECT, gm;  
    initgraph(&gd, &gm, "");

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);  
    rectangle(100,200,500,280);
    
    floodfill(180,270,GREEN); 

    
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);  
     rectangle(100,120,500,200);
    floodfill(180,170,WHITE);

      setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    circle(300,160,40);
    floodfill(300,160,BLUE);
    

    setcolor(LIGHTRED);
    setfillstyle(SOLID_FILL,LIGHTRED);  
    rectangle(100,40,500,120);
    floodfill(180,70,LIGHTRED);
  

    printf("Successfully Executed : ");
    getch();
    closegraph();
}