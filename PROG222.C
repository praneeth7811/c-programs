// to implement the setfill style

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int r,gd,gm;clrscr();
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 setfillstyle(2,11);
 bar(30,30,500,200);
 getch();
}