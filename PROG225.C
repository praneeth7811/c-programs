//to implement floodfill  function

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 circle(320,240,100);
 floodfill(320,240,15);
 getch();
}