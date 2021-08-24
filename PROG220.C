// to implement graphic functions
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int r,gd,gm;clrscr();
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 // circle(320,240,100);
 // arc(320,240,0,90,100);
 // pieslice(320,240,0,90,100);
 // ellipse(320,240,0,360,100,50);
 // sector(320,240,0,180,100,50);
 // fillellipse(320,240,100,50);
 getch();
}