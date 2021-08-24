// toimplement getpixel and putpixel

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd,gm,x,y,c;clrscr();
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 settextstyle(1,0,5);
 outtextxy(140,0,"nice comuters");
 for(x=140;x<=500;++x)
 for(y=0;y<=50;y=y+1)
 {
  c=getpixel(x,y);
  putpixel(639-x,479-y,c);
 }
 getch();
 closegraph();
}