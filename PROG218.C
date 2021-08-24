//to draw a circle
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd,gm;clrscr();
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 circle(320,240,100);
 getch();
}