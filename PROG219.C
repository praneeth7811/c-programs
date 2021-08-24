//to draw a multiple circle from center
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int r,gd,gm;clrscr();
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 for(r=10;r<=200;r=r+10)
 circle(320,240,r);
 getch();
}