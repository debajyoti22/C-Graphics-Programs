#include<stdio.h>
#include<graphics.h>
int main(){
    int xc,yc,r,x,y,p;    

    int gd = DETECT, gm;	
	initgraph(&gd, &gm, "");

    printf("Enter centre coordinates : ");
    scanf("%d %d",&xc,&yc);
    printf("Enter radius : ");
    scanf("%d",&r);

    x = 0;
    y=r;
    p=1-r;
    do{
    putpixel(xc+x,yc+y,15);
        setcolor(15);
        line(xc,yc,xc+x,yc+y);

        putpixel(xc+y,yc+x,14);
        setcolor(14);
        line(xc,yc,xc+y,yc+x);

        putpixel(xc-y,yc+x,9);
        setcolor(9);
        line(xc,yc,xc-y,yc+x);

        putpixel(xc-x,yc+y,2);
        setcolor(2);
        line(xc,yc,xc-x,yc+y);

        putpixel(xc-x,yc-y,4);
        setcolor(4);
        line(xc,yc,xc-x,yc-y);

        putpixel(xc-y,yc-x,3);
        setcolor(3);
        line(xc,yc,xc-y,yc-x);

        putpixel(xc+y,yc-x,7);
        setcolor(7);
        line(xc,yc,xc+y,yc-x);

        putpixel(xc+x,yc-y,13);
        setcolor(13);
        line(xc,yc,xc+x,yc-y);
        if(p<0) {
p+=(2*x)+1;
}
else{
y=y-1;
p+=(2*x)-(2*y)+1;
}
x=x+1;
}while(y>x);

    getch();
    closegraph();
}