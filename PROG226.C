//to implement outtext functiom

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 settextstyle(1,0,1);
 setusercharsize(10,7,10,7);
 outtext("nice computers");
 getch();
}