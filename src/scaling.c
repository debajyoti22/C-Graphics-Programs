#include<stdio.h>
#include<graphics.h>
int main(){
    
    int x1,x2,y1,y2,sx,sy;
    printf("Enter the 1st point : "); //50,100
    scanf("%d %d",&x1,&y1);
    printf("Enter the 2nd point : "); //200,200
    scanf("%d %d",&x2,&y2);
    printf("Enter sx and sy : "); //2,2
    scanf("%d %d",&sx,&sy);

    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(GREEN);
    line(x1,y1,x2,y2);
    int matrix[3][3] = {{sx,0,0},{0,sy,0},{0,0,1}};
    int c1[] = {x1,y1,1};
    int c2[] = {x2,y2,1};
    int res1[] = {0,0,1};
    int res2[] = {0,0,1};

    for(int i=0;i<3;i++){
        int temp = 0;
        for(int j =0;j<3;j++){
            temp = temp + matrix[i][j] * c1[j];
        }
        res1[i] = temp;
    }

    for(int i=0;i<3;i++){
        int temp = 0;
        for(int j =0;j<3;j++){
            temp = temp + matrix[i][j] * c2[j];
        }
        res2[i] = temp;
    }

    setcolor(BROWN);
    line(res1[0],res1[1],res2[0],res2[1]);
    getch();
    closegraph();

}