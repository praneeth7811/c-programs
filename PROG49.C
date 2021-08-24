//to find sales man commisiion with slab system
#include<stdio.h>
#include<conio.h>
void main()
{float s,c;clrscr();
 printf("enter sales");
 scanf("%f",&s);
 if(s<=1000.0) c=(s*10.0)/100.0;
 else if(s>1000&&s<5000)  c=(1000.0*10.0)/100.0+((s-1000)*15.0)/100.0;
 else c=(1000.0*10.0)/100.0+(4000.0*15.0)/100.0+((s-5000.0)*20.0)/100.0;
 printf("commision=%f",c);
 getch();
}