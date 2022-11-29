#include<stdio.h>
#include<graphics.h>
int circle(int xc,int yc,int r, int c){
    int x = 0;
   int  y=r;
   int  p=1-r;     
    do{
        putpixel(xc+x,yc+y,c);       
        putpixel(xc+y,yc+x,c);      
        putpixel(xc-y,yc+x,c);        
        putpixel(xc-x,yc+y,c);
        putpixel(xc-x,yc-y,c);        
        putpixel(xc-y,yc-x,c);       
        putpixel(xc+y,yc-x,c);      
        putpixel(xc+x,yc-y,c);
      
        if(p<0) {
p+=(2*x)+1;
}
else{
y=y-1;
p+=(2*x)-(2*y)+1;
}
x=x+1;
}while(y>x);

}


int main(){  
    
    int gd = DETECT, gm;	
	initgraph(&gd, &gm, "");
    circle(80,80,40,1);
    circle(120,120,40,14);
    circle(160,80,40,WHITE);
    circle(200,120,40,2);
    circle(240,80,40,4);


    getch();
    closegraph();
}