// to implement fillpoly and draw poly

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd,gm;
 int triangle[]={100,50,
		 25,150,
		 175,150,
		 100,50,
		};clrscr();
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 drawpoly(4,triangle);
 fillpoly(4,triangle);
 getch();
}
