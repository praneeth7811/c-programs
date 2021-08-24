//to print the text with out line


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int r,gd,gm;clrscr();
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 settextstyle(10,0,5);
 outtext("nice computers");
 // outtextxy(50,100,"nice computers");
 getch();
}