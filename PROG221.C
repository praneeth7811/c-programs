// to implement colour and line functions
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int r,gd,gm;clrscr();
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 setcolor(15);
 setbkcolor(12);
 for(r=5;r<=100;r=r+5)
 circle(320,240,r);
 // line(10,20,600,300);
 // rectangle(100,50,500,300);
 // bar(100,50,500,300);
 // bar3d(100,100,500,200,50,1);
 printf("%d",getmaxx());
 printf("\n %d",getmaxy());
 printf("\n %d",getmaxcolor());
 getch();
}
